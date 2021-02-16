//==============================================
// Name:           Sehajpreet Singh
// Student Number: 124314204
// Email:          ssingh1053@myseneca.ca
// Section:        NAA
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, high[10], low[10];;
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &N);
    printf("\n");
    while (N < 3 || N > 10)
    {
        printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &N);
    }

    for (int i = 1; i <= N; i++)
    {
        printf("Day %d - High: ", i);
        scanf("%d", &high[i]);
        printf("Day %d - Low: ", i);
        scanf("%d", &low[i]);
    }

    printf("Day Hi Low\n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d%4d%5d\n", i, high[i], low[i]);
    }

    return 0;
}
