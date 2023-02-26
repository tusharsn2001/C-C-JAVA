#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{
    /* data */
    char name[25];
    int age;
};
int main()
{
    int n = 4, i;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < 4; i++)
    {
        ptr[i] = i;
    }
    printf("%d", *ptr + 1);
    struct student tusj = {"Tushar", 22};
    printf("\n Name = %s,Age = %d\n", tusj.name, tusj.age);
    return 0;
}