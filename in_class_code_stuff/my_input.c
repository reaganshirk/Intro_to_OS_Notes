#include <stdio.h>

int prompt_char(char *strg)
{
  printf("%s: ", strg);

  return getchar();
}
  
