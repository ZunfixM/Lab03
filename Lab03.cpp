// Lab03.cpp
// Trevor Dine
// 8 October 2018

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

short consecShortSum(int start);
long consecLongSum(int start);
float longFactorial(long start);
double doubleFactorial(long start);
float stupidFloatSum(int n);
double stupidDoubleSum(int n);

int main()
{
	int startVal = 0;
	bool finished = false;
	
	while (!finished)
	{
		cout << "Value to start (-9999 to exit): ";
		cin >> startVal;
		if (startVal == -9999)
		{
			finished = true;
		}
		else
		{
			//cout << "\nValue of n: " << startVal << "\nSum: " << consecShortSum(startVal) << endl;
			//cout << "\nValue of n: " << startVal << "\nSum: " << consecLongSum(startVal) << endl;
			//cout << "\nValue of n: " << startVal << "\nFactorial: " << longFactorial(startVal) << endl;
			//cout << "\nValue of n: " << startVal << "\nFactorial: " << doubleFactorial(startVal) << endl;
			cout << "\nValue of n: " << startVal << "\nWeird Sum: " << stupidFloatSum(startVal) << endl;
			cout << "\nValue of n: " << startVal << "\nWeird Sum: " << stupidDoubleSum(startVal) << endl;
		}
	}
	
	/*
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	*/
	system("pause");
	return 0;
}

// Finds the sum of the numbers from the starting value to zero and stores that value as a short.
short consecShortSum(int start)
{
	short sum = 0;

	if (start < 256) // Checks to see if the starting value is too big.
	{
		for (int i = start; i > 0; i--) // Performs the sum.
		{
			sum += i;
		}
	}
	else
	{
		cout << "Starting value is too large."; // Message to user if the value they entered is too big.
	}
	
	return sum;
}

// Finds the sum of the numbers from the starting value to zero and stores that value as a long.
long consecLongSum(int start)
{
	long sum = 0;

	if (start < 65537)
	{
		for (int i = start; i > 0; i--) // Performs the sum.
		{
			sum += i;
		}
	}
	else
	{
		cout << "Starting value is too large."; // Message to user if the value they entered is too big.
	}

	return sum;
}

// Finds the factorial of the given value stored as a float.
float longFactorial(long start)
{
	float product = 1.0;

	if (start < 35)
	{
		for (int i = start; i > 0; i--) // Performs the product.
		{
			product = product * i;
		}
	}
	return product;
}

// Finds the factorial of the given value stored as a double.
double doubleFactorial(long start)
{
	double product = 1.0;

	if (start < 171)
	{
		for (int i = start; i > 0; i--) // Performs the product.
		{
			product = product * i;
		}
	}
	return product;
}

// Finds the sum of the function 1/i from i = 1 to n using floats.
float stupidFloatSum(int n)
{
	float sum = 0.0;

	for (float i = 1; i <= n; i++) // Performs the sum.
	{
		sum += (1/i);
	}

	return sum;
}

// Finds the sum of the function 1/i from i = 1 to n using doubles.
double stupidDoubleSum(int n)
{
	double sum = 0.0;

	for (double i = 1; i <= n; i++) // Performs the sum.
	{
		sum += (1 / i);
	}

	return sum;
}
