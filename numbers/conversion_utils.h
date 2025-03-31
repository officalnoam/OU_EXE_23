#ifndef CONVERSION_UTILS
  #define CONVERSION_UTILS
  #define NUM_NAME_LEN 20
  
  /*
  This function will convert an integer between 0-99 to its name, as in, 0 -> "zero".
  
  Input-
    int num: The number being converted.
  Output-
    char*: The name of the number.
  */
  char* convert_int_to_name(int num);
  
  /*
  This function will convert a single or double digit int within a string to an actual integer.
  
  Input-
    char* str: The string containing the num (and additional nums).
    int* index_p: A pointer to the index of the number.
  Output-
    int*: The pointer to the parsed int.
  */
  int* convert_str_to_num(char* str, int* index_p);
#endif
