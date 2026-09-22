#include <stdio.h>

int main() {

  printf("+-------------------------------+\n");
  printf("| ANSCI Value | ANSCI Character |\n");
  printf("+-------------------------------+\n");
  for(int i = 32; i <= 126; i++){
    printf("|    %3d      |        %c        |\n", i, i);
    printf("+-------------------------------+\n");
  }

  return 0;
}
