#include "conversion_utils.h"
#include <stdlib.h>
#include <string.h>

/*
This function will use the tens and ones digits of the inputted number to get the appropriate name within the first_digit and second_digit
arrays / exceptional_cases array and then return the combined name.
*/  
char* convert_int_to_name(int num)
{
  char* first_digit[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char* second_digit[] = {"", "ten", "twenty ", "thirty ", "fourty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
  char* exceptional_cases[] = {"zero", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

  char* result = (char*) malloc(NUM_NAME_LEN * sizeof(char));

  if (result == NULL)
    return NULL;
  
  /*If the num is one of the exceptional cases- get its name from the appropriate place in the exceptional_cases array*/
  if (num == 0 || (num > 10 && num < 20))
    strncpy(result, exceptional_cases[num % 10], NUM_NAME_LEN);
  /*First put the second digits (the tens) into result. Then, add the first digit (the ones) onto the result*/
  else
  {
    strncpy(result, second_digit[num / 10], NUM_NAME_LEN);
    strncat(result, first_digit[num % 10], NUM_NAME_LEN - strlen(result) - 1);
  }
  
  return result;
}

