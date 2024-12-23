#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
  for(float fahr = 0; fahr <= 300; fahr += 20)
  {
    float cels = (5.0 / 9.0) * (fahr - 32.0);
    // printf("\u00B0"); /* prints ° char */
    printf("%6.0f%sF %10.2f\u00B0C\n", fahr, "\u00b0", cels);
  }
}
