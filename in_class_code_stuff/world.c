#include <stdio.h>
#include "my_input.h"

int main(int argc, char **argv)
{
  printf("Hello, World?\n");

  int c = prompt_char("What is your favorite letter?");

  printf("Mine is %c\n", c-1);
}
