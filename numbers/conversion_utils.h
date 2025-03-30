#ifndef CONVERSION_UTILS
  #define CONVERSION_UTILS
  #define NUM_NAME_LEN 12
  
  /*
  This function will convert an integer between 0-99 to its name, as in, 0 -> "zero".
  
  Input-
    int num: The number being converted.
  Output-
    char*: The name of the number.
  */
  char* convert_int_to_name(int num);
#endif
