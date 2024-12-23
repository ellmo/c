#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20
#define SYM__DEG "\u00b0"

// function declaration
float f_to_c(float fahr);

int main() {
  for(float fahr = LOWER; fahr <= UPPER; fahr += STEP)
  {
    // printf("\u00B0"); /* prints the degree symbol (°) character */
    printf("%6.0f%sF %10.2f\u00B0C\n", fahr, SYM__DEG, f_to_c(fahr));
  }
}

// function definition
float f_to_c(float fahr)
{
  return (5.0 / 9.0) * (fahr - 32.0);
}
