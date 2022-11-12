#include <stdio.h>
#include <time.h>
int addNumbers(int n);

int main() {
  clock_t start, end;
  double cpu_time_used;
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  start = clock();
  printf("Sum = %d", addNumbers(num));
  end = clock();
  cpu_time_used = ((double) (end - start));
  printf("Time requird=%f",cpu_time_used);
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
