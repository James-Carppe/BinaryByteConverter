#include <stdio.h>

void Power(int *power, int *result, int *j)
{
	if (*power == 0) {
		*result = 1;
		return;
	}
	
	*result = 2;
	for (*j = 1; *j < *power; (*j)++)
	{
		*result = (*result) * 2;
	}
	
	return;
}

void main()
{
	char  binaryInput[8] = {'0','0','0','0','0','0','0','0'};
	int   decimalNumber = 0, digit = 7, add, i, j;
	
	printf("Enter your binary number:");
	scanf("%s", &binaryInput);

	for (i = 0; i <= 7; i++)
	{
		digit = 7 - i;
		if ( binaryInput[i] == '1')
		{
			Power(&digit, &add, &j);
			decimalNumber = decimalNumber + add;
		}
	}
	
	printf("Your binary number is equal to the decimal number: %d", decimalNumber);
	
	scanf("%s", &binaryInput);
	return;
}