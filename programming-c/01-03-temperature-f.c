#include <stdio.h>

int main() {
  float cels, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    cels = (5.0 / 9.0) * (fahr - 32.0);
    // printf("\u00B0"); /* prints ° char */
    printf("%6.0f%sF %10.2f\u00B0C\n", fahr, "\u00b0", cels);
    fahr += step;
  }
}
