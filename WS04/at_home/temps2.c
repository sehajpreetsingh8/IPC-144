//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, high[10], low[10];

    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &N);
    printf("\n");
    while (N < 3 || N > 10)
    {
        printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &N);
        printf("\n");
    }
    for (int i = 1; i <= N; i++)
    {
        printf("Day %d - High: ", i);
        scanf("%d", &high[i]);
        printf("Day %d - Low: ", i);
        scanf("%d", &low[i]);
    }
    printf("\nDay Hi Low\n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d%4d%5d\n", i, high[i], low[i]);
    }
    int max = high[1], min = low[1], max_day = 1, min_day = 1;
    for (int i = 1; i <= N; i++)
    {
        if (high[i] > max)
        {
            max = high[i];
            max_day = i;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (low[i] < min)
        {
            min = low[i];
            min_day = i;
        }
    }

    printf("\nThe highest temperature was %d, on day %d\n", max, max_day);
    printf("The lowest temperature was %d, on day %d\n", min, min_day);
    int number;
    do
    {
        double avg;
        int total = 0;
        printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        scanf("%d", &number);
        if (number < 0)
        {
            break;
        }
        printf("\n");
        while (number == 0 || number > 5)
        {
            printf("Invalid entry, please enter a number between 1 and 5, inclusive: ");
            scanf("%d", &number);
            printf("\n");
        }
        for (int i = 1; i <= number; i++)
        {
            total += high[i] + low[i];
        }
        avg = (double)total / (number * 2);
        printf("The average temperature up to day %d is: %.2lf", number, avg);
        printf("\n");
    } while (number > 0);
    printf("\nGoodbye!\n");
    return 0;
}
