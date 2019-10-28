#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int array[10];
   srand(time(NULL));
   int i = 0;
   for (i = 0; i < 10; i++) {
      array[i] = 0;
      if (i < 9) {
         array[i] = rand();
      }
      printf("%d. %d\n", i, array[i]);
   }
   int reverse[10];
   int *apoint = array;
   int *rpoint = reverse;
   for (i = 0; i < 10; i++) {
      *(rpoint+9-i) = *(apoint+i);
   }
   for (i = 0; i < 10; i++) {
      printf("%d. %d\n", i, reverse[i]);
   }
}
