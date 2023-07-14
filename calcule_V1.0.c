#include <stdio.h>
// Fonction pour effectuer les calculs
void my_calc (char op)
{
    int number1 = 0, number2 = 0, result = 0;
    // Remplacer '*' par 'x'
    if (op == '*')
        op = 'x';
    // Remplacer '%' par 'm'
    if (op == '%')
        op = 'm';
    
    switch (op)
    {
    case '+':
        printf("Entre NBR 1: ");
        scanf("%d",&number1);
        printf("\nEntre NBR 2: ");
        scanf("%d",&number2);
        result = number1 + number2;
        printf("\n%d + %d = %d\n", number1, number2, result);
        break;
    case '-':
        printf("Entre NBR 1: ");
        scanf("%d",&number1);
        printf("\nEntre NBR 2: ");
        scanf("%d",&number2);
        result = number1 - number2;
        printf("\n%d - %d = %d\n", number1, number2, result);
        break;
    case ('x'):
        printf("Entre NBR 1: ");
        scanf("%d",&number1);
        printf("\nEntre NBR 2: ");
        scanf("%d",&number2);
        result = number1 * number2;
        printf("\n%d * %d = %d\n", number1, number2, result);
        break;
    case 'm':
        printf("Entre NBR 1: ");
        scanf("%d",&number1);
        printf("\nEntre NBR 2: ");
        scanf("%d",&number2);
        result = number1 % number2;
        printf("\n%d mod %d = %d\n", number1, number2, result);
        break;
    case '/':
        printf("Entre NBR 1: ");
        scanf("%d",&number1);
        printf("\nEntre NBR 2: ");
        scanf("%d",&number2);
        result = number1 / number2;
        printf("\n%d / %d = %d\n", number1, number2, result);
        break;
    case '!':
        printf("Entre un NBR: ");
        scanf("%d", &number1);
        number2 = 1;
        for (int i = 1; i <= number1; i++)
            number2 *= i;
        printf("\n!%d = %d\n", number1, number2);
        break;
    case '^':
        int res = 1;
        printf("Entre X: ");
        scanf("%d", &number1);
        printf("Entre n: ");
        scanf("%d", &number2);
        for (int i = 0; i < number2; i++)
            res *= number1;
        printf("\n%d ^ %d = %d\n", number1, number2, res);
        break;
    
    default:
        printf("je ne peux pas faire cet operation\n");
        break;
    }
}
int main(void)
{
    char start, op;
    // Affichage du message de bienvenue
    printf("\t\t\t\tBienvenue dans la calculatrice simple V1.0\n");
    // Affichage des opérations disponibles
    printf("\tCette calculatrice est capable d'effectuer les operations suivantes:\n");
    printf("Addition(+) | Soustraction(-) | Multiplication(x) | Division euclidienne(m) | Division(/) | Factorielle(!) | Puissance(^) \n");
    // Demande de démarrer la calculatrice
    printf("Start (Y/N) : ");
    scanf(" %c", &start);

    while (start != 'N' && start != 'n')
    {
        printf("choisie l'operateur: ");
        scanf(" %c", &op);
        my_calc(op);
        printf("Continue (Y/N) : ");
        scanf(" %c", &start);
    }
    return 0;
}
