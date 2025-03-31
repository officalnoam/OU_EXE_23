#include "numbers.h"
#include "io_utils.h"
#include <stdlib.h>
#include <stdio.h>

void teardown(FILE* input_stream, FILE* output_stream, char* user_input)
{
  if (input_stream != NULL && input_stream != stdin)
    fclose(input_stream);

  if (output_stream != NULL && output_stream != stdout)
    fclose(output_stream);
  
  if (user_input != NULL)
    free(user_input);    
}
 
int main(int argc, char** argv)
{
  FILE* input_stream = NULL;
  FILE* output_stream = NULL;
  char* user_input = NULL;
  
  /*Set input stream*/
  if (argc > 1)
  {
    input_stream = fopen(argv[1], "r");
    if (input_stream == NULL)
    {
      perror("Failed to open input file");
      return 1;
    }
  }
  else
    input_stream = stdin;

  /*Set output stream*/
  if (argc == 2)
  {
    output_stream = fopen(argv[2], "w");
    if (output_stream == NULL)
    {
      perror("Failed to open output file");
      teardown(input_stream, output_stream, user_input);
      return 1;
    }
  }
  else
    output_stream = stdout;
  
  user_input = get_user_input(input_stream);
  if (user_input == NULL)
  {
    teardown(input_stream, output_stream, user_input);
    return 1;
  }
  /*If the input stream is stdin- add a newline before num output so that the input and output aren't in the same line*/
  if (input_stream == stdin)
    printf("\n");

  output_nums(user_input, output_stream);
  teardown(input_stream, output_stream, user_input);
  return 0;
}
