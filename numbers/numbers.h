#ifndef NUMBERS
  #include <stdio.h>
  
  #define NUMBERS
  
  /*
  This function will close/free all of the streams and the user input string if they need to be closed.
  
  Input-
    FILE* input_stream: The input stream. WIll be closed if is not null or stdin.
    FILE* output_stream: The output stream. Will be closed if is not null or stdout.
    char* user_input: The user input. Will be freed if not null.
  */
  void teardown(FILE* input_stream, FILE* output_stream, char* user_input);
#endif
