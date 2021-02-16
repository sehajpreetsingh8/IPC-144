//==============================================
// Name:           Sehajpreet Singh
// Student Number: 124314204
// Email:          ssingh1053@myseneca.ca
// Section:        NAA
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int quarters_req;
	double amount, loon_left, quarters_left;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	loon_left = amount - (int)amount;
	quarters_req = loon_left / 0.25;
	quarters_left = loon_left - (quarters_req * 0.25);
	printf("Loonies required: %d, balance owing $%0.2lf\n", (int)amount, loon_left);
	printf("Quarters required: %d, balance owing $%0.2lf\n", quarters_req, quarters_left);
	return 0;
}
// Start your code below:
