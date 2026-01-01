#include <stdio.h>

int main() {
   printf("Name:Aditi Singh\nERP ID:RU-25-11772\n");
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum number is: %d", a);
    else if (b >= a && b >= c)
        printf("Maximum number is: %d", b);
    else
        printf("Maximum number is: %d", c);

    return 0;
}
// OUTPUT:-
// Name:Aditi Singh
// ERP ID:RU-25-11772
// Enter three numbers: 5
// 4
// 1
// Maximum number is: 5%