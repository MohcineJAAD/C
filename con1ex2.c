    //challenge : C program to calculate the sum: S = 1 + 2 + 3 + ... + N, where N is entered by the user. Using the while loop.
#include <stdio.h>
int main()
{
    int num, s = 0;
    printf("Enter Number : ");
    scanf("%d", &num);
    while (num)
        s += num--;
    printf("The result is : %d", s);
}