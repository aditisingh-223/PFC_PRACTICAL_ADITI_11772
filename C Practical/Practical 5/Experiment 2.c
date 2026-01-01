#include <stdio.h>

int main() {
   printf("Name:Aditi Singh\nERP ID:RU-25-11772\n");
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("The number is Even");
    else
        printf("The number is Odd");

    return 0;
}
// OUTPUT:-
// Name:Aditi Singh
// ERP ID:RU-25-11772
// Enter a number: 99
// The number is Odd%