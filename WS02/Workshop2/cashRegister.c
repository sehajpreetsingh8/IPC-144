#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int quarters_req, dimes_req, nickles_req, pennies_req;
	double amount, GST, amt_w_GST, loon_left, quarters_left, dimes_left, nickles_left, pennies_left;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	GST = amount * 0.13;
	amt_w_GST = amount + GST + .005;
	loon_left = amt_w_GST - (int)amt_w_GST;

	quarters_req = loon_left / 0.25;
	quarters_left = loon_left - (quarters_req * 0.25);

	dimes_req = quarters_left / 0.10;
	dimes_left = quarters_left - (dimes_req * 0.10);

	nickles_req = dimes_left / 0.05;
	nickles_left = dimes_left - (nickles_req * 0.05);

	pennies_req = nickles_left / 0.01;
	pennies_left = nickles_left - (pennies_req * 0.01);

	printf("GST: %0.2lf\n", GST);
	printf("Balance owing : $%0.2lf\n", amt_w_GST);
	printf("Loonies required: %d, balance owing $%0.2lf\n", (int)amt_w_GST, loon_left);
	printf("Quarters required: %d, balance owing $%0.2lf\n", quarters_req, quarters_left);
	printf("Dimes required: %d, balance owing $%0.2lf\n", dimes_req, dimes_left);
	printf("Nickels required : %d, balance owing $%0.2lf\n", nickles_req, nickles_left);
	printf("Pennies required : %d, balance owing $%0.2lf\n", pennies_req, pennies_left);
	return 0;
}