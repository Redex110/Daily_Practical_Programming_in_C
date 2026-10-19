#include <stdio.h>

#define WIDTH 80

void printLine(int width)
{
  for(int i = 0; i < width; i++)
    printf("-");
  printf("\n");
}
int main()
{
  //File pointer 
  FILE *file_pointer;

  
  char new_string[100], original_string[100];

  
  //open the file using fopen() with r+ mode for both reading and writing 
  file_pointer = fopen("example.txt", "r+");
  
  fgets(original_string, sizeof(original_string), file_pointer);
  
  printLine(WIDTH);
  printf("File Content Rewriter\n");
  printLine(WIDTH);
  
  printf("Enter the content for text file : ");
  fgets(new_string, sizeof(new_string), stdin);
  printLine(WIDTH);

  printf("Original Content                : ");
  fputs(original_string, stdout);

  fputs(new_string, file_pointer);
 
  printf("New Content                     : ");
  fputs(new_string, stdout);
  printLine(WIDTH);


  //closing the file 
  fclose(file_pointer);

  return 0;
}
