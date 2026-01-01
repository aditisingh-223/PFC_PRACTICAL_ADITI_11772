#include <stdio.h>

int main()
{
   printf("Name:Aditi Singh\nERP ID:RU-25-11772\n");
    int value;
    char ch;
    printf("Enter an integer (ASCII value): ");
    scanf("%d", &value);

    ch = value + 3;

    printf("Character after three steps is: %c\n", ch);

    return 0;
}
// OUTPUT:-
// Name:Aditi Singh
// ERP ID:RU-25-11772
// Enter an integer (ASCII value): 99
// Character after three steps is: f