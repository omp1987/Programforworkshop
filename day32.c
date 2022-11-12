#include <stdio.h>
#include<time.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    clock_t start, end;
    double cpu_time_used;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    start = clock();
    result = power(base, a);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("%d^%d = %d", base, a, result);
    printf("Time requird=%f",cpu_time_used);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
