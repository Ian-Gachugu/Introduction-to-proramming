#include<stdio.h>

int main()
{
    char firstName[15];
    printf("Enter your firstName\n");
    scanf("%s", firstName);
    printf("%s", firstName);

    char lastName[15];
    printf("Enter your lastName\n");
    scanf("%s", lastName);
    printf("%s", lastName);

    char regNumber[15];
    printf("Enter your regNumber\n");
    scanf("%s", regNumber);
    printf("%s", regNumber);

    // Marks scored by the student in various units.
    float introductionToProgramming;
    printf("Enter marks scored in Introduction to Programming\n");
    scanf("%f", &introductionToProgramming);
    printf("%f", introductionToProgramming);

    float networking;
    printf("Enter marks scored in Networking\n");
    scanf("%f", &networking);
    printf("%f", networking);

    float accounting;
    printf("Enter marks scored for Accounting\n");
    scanf("%f", &accounting);
    printf("%f", accounting);

    float OS;
    printf("Enter marks scored for OS\n");
    scanf("%f", &OS);
    printf("%f", OS);

    float compApplication;
    printf("Enter marks scored for Computer Application\n");
    scanf("%f", &compApplication);
    printf("%f", compApplication);

    return 0;
}
