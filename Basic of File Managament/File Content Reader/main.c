#include <stdio.h>
#include <stdlib.h>

#define WIDTH 60

void printLine(int width)
{
  for(int i = 0; i < width; i++)
    printf("-");
  printf("\n");
}

int main()
{
  //FILE pointer declaretion
  FILE *file_pointer;

  int character;

  //Opening the file
  file_pointer = fopen("example.txt", "r");

  //Checking if the file exist 
  if(file_pointer == NULL)
  {
    printLine(WIDTH);
    printf("ERROR : Can't access the file\n");
    printLine(WIDTH);
    exit(1);
  }

  // Start of Output Section 
  printLine(WIDTH);
  printf("File Content Reader\n");
  printLine(WIDTH);
  printf("File            : example.txt\n");
  printf("Content of File : ");


  //print the content of the file 
  while(1)
  {
    character = fgetc(file_pointer);
    
    if(character == EOF)
      break;

    printf("%c", character);
  }

  printLine(WIDTH);
  //End of Outpu Section 


  //Closing the file 
  fclose(file_pointer);

  return 0;
}
