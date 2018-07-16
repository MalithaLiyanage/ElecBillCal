#include <stdin>
#include <math.h>



int main()
{

	float price;
	int number1;

	printf("Enter the Units");
	scanf("%d",&number1);     // Getting the Input


	if (number1 < 0)
	{
		
		printf("-1\n");

	}

	else if (number1<=30)
	{

		price=2.5*number1+ 30; //Calculations

	}

	else if (number1<=60)
	{

		price=(number1-30)*4.85+30*2.5+60;

	}

	else if (number1<=90)
	{

		price=(number1-60)*10+60*7.85+90;

	}

	else if (number1<=120)
	{

		price = (number1-90)*27.75+30*10+60*7.85+480;

	}

	else if (number1<=180)
	{

		price = (number1-120)*32+30*27.75+30*10+60*7.85+480;

	}
	else
	{

		price = (number1-180)*45+60*32+30*27.75+30*10+60*7.85+540;

	}


	if (price==0)  //Used print nothing more han '-1' when wrong input is given.
	{

	}
	else
	{

		printf("Bill = %.2f\n", price); //Bill is printed in two decimal points

	}

	return 0;
}


