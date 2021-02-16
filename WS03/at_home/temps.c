//==============================================
// Name:           Sehajpreet SIngh
// Student Number: 124314204
// Email:          ssingh1053@myseneca.ca
// Section:        NAA
// Workshop:       3 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4
#include <stdio.h>
int main()
{
    int total = 0, total_low = 0, total_high = 0, max, min;
    double mean, mean_low, mean_high;
    printf("---=== IPC Temperature Analyzer ===---\n");
    int high[NUMS], low[NUMS];
    for (size_t i = 1; i <= NUMS; i++)
    {

        do
        {

            printf("Enter the high value for day %d: ", i);
            scanf("%d", &high[i]);
            printf("\n");
            printf("Enter the low value for day %d: ", i);
            scanf("%d", &low[i]);
            printf("\n");
            if (high[i] < low[i] || high[i] > 40 || low[i] < -40)
            {
                printf(" Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low. \n\n");
            }
        } while (high[i] < low[i] || high[i] > 40 || low[i] < -40);

        total += high[i] + low[i];
        total_high += high[i];
        total_low += low[i];
    }
    mean = (double)total / 8;
    mean_low = (double)total_high / 4;
    mean_high = (double)total_low / 4;

    max = high[1];
    min = low[1];
    for (int i = 2; i <= NUMS; i++)
    {
        if (high[i] > max)
        {
            max = high[i];
        }
        if (low[i] < min)
        {
            min = low[i];
        }
    }
    int max_day;
    int min_day;
    for (int i = 0; i < NUMS; i++)
    {
        if (max == high[i])
        {
            max_day = i;
        }
        if (min == low[i])
        {
            min_day = i;
        }
    }

    printf("The average (mean) HIGH temperature was: %0.2lf\n", mean_high);
    printf("The average (mean) LOW temperature was: %0.2lf\n", mean_low);
    printf("The average (mean) temperature was: %0.2lf\n", mean);
    printf("The highest temperature was %d, on day %d\n", max, max_day);
    printf("The lowest temperature was %d, on day %d\n", min, min_day);
    return 0;
}
