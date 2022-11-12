#include <stdio.h>
#include <time.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("Time requird=%f",cpu_time_used);
    return 0;
}
