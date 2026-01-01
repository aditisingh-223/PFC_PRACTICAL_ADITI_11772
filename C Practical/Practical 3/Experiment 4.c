#include <stdio.h>

int main()
{
printf("Name:Aditi Singh\nERP ID:RU-25-11772\n");
    int a;
    printf("Enter value of a:\n");
    scanf("%d", &a);
    int b;
    printf("Enter value of b:\n");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping a is %d and b is %d\n", a, b);
    return 0;
}
// OUTPUT:-
// Name:Aditi Singh
// ERP ID:RU-25-11772
// Enter value of a:
// 5
// Enter value of b:
// 8
// After swapping a is 8 and b is 5