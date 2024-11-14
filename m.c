#include <stdio.h>

int main()
{
  FILE *file = fopen(__FILE__, "r");
  char ch;

  if (file == NULL){
    printf("Error opening file\n");
    return 1;
  }
  while ((ch == fgetc(file)) != EOF) {
    putchar(ch);
  }

  fclose(file);

  return 0;
}