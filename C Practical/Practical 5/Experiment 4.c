#include <stdio.h>

int main() {
    int day;
printf("Name:Aditi Singh\nERP ID:RU-25-11772\n");
    int n;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}
// OUTPUT:-
// Name:Aditi Singh
// ERP ID:RU-25-11772
// Enter day number (1-7): 5
// Friday
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_05 %