#include <stdio.h>

int main(int argc, char* argv)
{
  if (argc == 2)
  {
    /*Function to read from specific file*/
    /*Function to write to specific file*/
    printf("Input file output file\n");
  }
  else if (argc == 1)
  {
    /*Function to read from specific file*/
    /*Function to write to stdout*/
    printf("Input file stdout.\n");
  }
  else
  {
    /*Function to read from stdin*/
    /*Function to write to stdout*/
    printf("Stdin stdout.\n");
  }
  

