#include <stdio.h>

#define WIDTH 50 
void printLine(int width){
  for(int i = 0; i < width; i++)
    printf("-");
  printf("\n");
}

int main()
{
  //File pointer declaration
  FILE *file_pointer;

  //String that is going inside the file 
  char *string = "#include <stdio.h> \n int main(){printf(\"Hello, World!\\n\"); return 0; }";

  //Creating the file using fopen() with write mode
  file_pointer = fopen("example.c", "w");

  //Output
  printLine(WIDTH);
  printf("File Creation Example\n");
  printLine(WIDTH);
  printf("Creating the file : example.c\n");
  printf("File Creation Process Complete!\n");
  printLine(WIDTH);

  //Writing the content of string into file 
  fputs(string, file_pointer);

  //Closing the file 
  fclose(file_pointer);

  return 0;

}
