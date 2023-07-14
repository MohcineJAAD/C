/*#include <stdio.h>
void compr(int *val1, int *val2)
{
    if (*val1 > *val2)
        printf("%d est plus grand que %d", *val1, *val2);
    else if (*val1 < *val2)
        printf("%d est le plus grand que %d", *val2, *val1);
    else
        printf("%d est egale a %d", *val1, *val2);
}
int main()
{
    int val1, val2;
    printf("entre la premier valeur: ");
    scanf("%d", &val1);
    printf("entre la deuxieme valeur: ");
    scanf("%d", &val2);
    compr(&val1, &val2);
    return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
    int taille = 0;
    printf("entre la taille de tab : ");
    scanf("%d",&taille);
    int tab[taille];
    for(int *p = tab; p < tab + taille; p++)
    {
        printf("T[%d] = ",p - tab +1);
        scanf("%d",p);
    }

    int s = 0;

    for(int *p = tab; p < tab + taille; p++)
        s += *p;

    printf("La Somme Est : %d",s);

    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    int taille = 0;
    printf("Entre la taille : ");
    scanf("%d", &taille);
    int tab[taille];
    for (int *p = tab; p < tab + taille; p++)
    {
        printf("T[%d] = ",p - tab +1);
        scanf("%d",p);
    }
    
}
*/
/*
#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {20 , 30, 40};
    int *ptr, i;
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {
        printf("Address de var[%d] = %x\n", i, ptr);
        printf("la valuer de var[%d] = %d\n", i, *ptr);
        ptr++;
        i++;
    }
    
}
*/








/*
//Q1
#include <stdio.h>
int main(void)
{
    int var;
    int *pointer;
    pointer = &var;
    printf("address of a variable is : %x",pointer);
    return 0;
}
*/
/*
//swap 
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = 0;
    temp = *x;
    *x   = *y;
    *y   = temp;
}
int main(void)
{
    int var1 = 5;
    int var2 = 4;
    printf("befor swap:\nvar1 = %d\nvar2 = %d", var1, var2);
    swap(&var1, &var2);
    printf("\nafter swap:\nvar1 = %d\nvar2 = %d", var1, var2);
    return 0;
}
*/
/*
//maximum of two numbers
#include <stdio.h>
const int MAX = 3;
int finmax(int *v1, int *v2)
{
    if (*v1 > *v2)
        return *v1;
    else if (*v2 > *v1)
        return *v2;
    else
        return *v1;
    
}
int main(void)
{
    int val1 = 20;
    int val2 = 25;
    printf("le MAX est : %d",finmax(&val1, &val2));

}
*/
/*
//sum of an array 
#include <stdio.h>
int sumarray(int *vals)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += *vals;
        vals++;
    }
    return sum;
}
int main(void)
{
    int vals[] = {40, 40, 40};
    printf("somme of array = %d",sumarray(vals));
}
*/
/*
//print array in reverse
#include<stdio.h>
int main (void)
{
    int arr[] = {15, 13, 10};
    int *p;
    p = arr + 2;
    for (int i = 0; i < 3; i++)
    {
        printf("| %d | ",*p);
        p--;
    }
    
}
*/
/*
#include <stdio.h>
const int MAX = 3;
int main(void)
{
    int arr[] = {10, 20, 50};
    int *ptr[MAX];

    for(int i=0; i<MAX; i++)
        ptr[i] = &arr[i];
    
    for(int i=0; i<MAX; i++)
        printf("L'address de l'element %d est: %x\t La valeur de ce element est: %d\n", i, ptr[i], *ptr[i]);

    return 0;

}
*/
/*
#include <stdio.h>
const int MAX = 4;
int main(void)
{
    char *names[] =
    {
        "mohcine jaad",
        "mohammed jaad",
        "jaad jaad",
        "mohcine mohcine"
    };
    for(int i=0; i<MAX; i++)
        printf("le nom de l'element %d est : %s\n", i, names[i]);
}
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[10] ;
    char dest[10];

    printf("entre votre Nom: \n");
    gets(src);
    for (int i = 0; i < strlen(src)+1; i++)
    {
        dest[i] = src[i];
    }
    printf("tu entre Nom : ");
    puts(dest);
}