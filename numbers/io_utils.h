#ifndef IO_UTILS
  #include <stdio.h>

  #define IO_UTILS
  #define BUFFER_SIZE 5 
 
  /*
  This function will get the user input until an EOF.
  
  Input-
    FILE* input_stream: The input stream that the input should be gotten from.
  Output-
    char*: The user input.
  */ 
  char* get_user_input(FILE* input_stream);
  
  /*
  This function will convert the user input into the number names, and output it.
  
  Input-
    char* user_input: The user input.
    FILE* output_streamL The output stream that the number names should be outputted to.
  */
  void output_nums(char* user_input, FILE* output_stream);
#endif
