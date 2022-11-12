
#include <stdio.h>
#include <time.h>
struct Distance {
   int feet;
   float inch;
} d1, d2, result;

int main() {
   clock_t start, end;
   double cpu_time_used;
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   start = clock();
   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   end = clock();
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   cpu_time_used = ((double) (end - start));
   printf("Time requird=%f",cpu_time_used);
   return 0;
}

