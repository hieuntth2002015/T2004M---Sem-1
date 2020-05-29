#include <stdio.h>
int main() {
    //prompt user for yearly temperature of the five cities

    char cities[5][20];
    float temps[25];
    int i = 0;
    printf("Please enter the yearly temperature of the five cities\n");
    for (i; i <= 4; i++) {
      printf("Enter city %d \n", i + 1);
      scanf("%s", & cities[i]);

      for (i; i <= 4; i++) {
        printf("Enter temperatures for city %d\n", i + 1);

        for (i; i <= 24; i++) {
          printf("For year %d\n", i + 1);

          scanf("%f", & temps[i]);
          if (i == 5) {
            continue;
          }
        }
      }
    }
    return 0;
}
