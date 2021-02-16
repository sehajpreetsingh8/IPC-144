//==============================================
// Name:           Sehajpreet Singh
// Student Number: 124314204
// Email:          ssingh1053@myseneca.ca
// Section:        NAA
// Workshop:       3 (in-lab)
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 3
int main()
{
    int total = 0;
    double mean;
    printf("---=== IPC Temperature Analyzer ===---\n");
    for (size_t i = 1; i <= NUMS; i++)
    {
        int high, low;
        do
        {

            printf("Enter the high value for day %d: ", i);
            scanf("%d", &high);
            printf("\n");
            printf("Enter the low value for day %d: ", i);
            scanf("%d", &low);
            printf("\n");
            if (high < low || high > 40 || low < -40)
            {
                printf(" Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low. \n\n");
            }
        } while (high < low || high > 40 || low < -40);
        total += high + low;
    }
    mean = (double)total / 6;
    printf("The average (mean) temperature was: %0.2lf\n", mean);
    return 0;
}
