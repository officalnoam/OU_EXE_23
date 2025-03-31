#include "io_utils.h"
#include "conversion_utils.h"
#include <stdlib.h>
#include <string.h>

/*
This function will get the user input from the user stream.
*/
char* get_user_input(FILE* input_stream)
{
  char c;
  int size = 0;
  int capacity = (BUFFER_SIZE + 1) * sizeof(char);
  char* str = NULL;
  char* temp = NULL;

  str = (char*) malloc(capacity);
  if (str == NULL)
  {
    perror("Memory allocation failed.\n");
    return NULL;
  }

  /*Get all of the chars until an EOF from the input stream*/  
  while ((c=fgetc(input_stream)) != EOF)
  {
    if (size == capacity - 1)
    {
      str[size] = '\0';
      capacity = capacity + BUFFER_SIZE * sizeof(char);
      temp = (char*) realloc(str, capacity);
      
      if (temp == NULL)
      {
        perror("Memory allocation failed.\n");
        free(str);
        return NULL;
      }
      
      if (temp != str)
      {
        str = temp;
      }
    }
    str[size] = c;
    size++;
  }
  str[size] = '\0';
  return str;
}
  
/*This function will parse ints from the user input until the end of the string, convert it to the name of the num and put it into the output stream.*/
void output_nums(char* user_input, FILE* output_stream)
{
  int* num;
  int i = 0;
  char* name;
  
  num = convert_str_to_num(user_input, &i);
  while (*num != -1)
  {
    name = convert_int_to_name(*num);
    fprintf(output_stream, "%s\n", name);
    free(name);
    free(num);
    num = convert_str_to_num(user_input, &i);
  }
  free(num);
}
