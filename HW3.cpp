#include<iostream>
#include<cmath>
using namespace std;
void Basic();
void Advanced();
void SuperAdvanced();
void Sum();
void Sub();
void Multi();
void Division();
void All_In_One();
void Sin();
void Cos();
void Pow();
void Sqrt();
int main()
{
	cout << "Welcome to Magic Calculator!" << endl;
	cout << "1)Basic Calculation" << endl << "2)Advanced Calculation" << endl << "3)Super Advanced Calculation" << endl;
	cout << "Choose your option please:";
	int n;
	cin >> n;
	if (n == 1)
	{
		Basic();
	}
	if (n == 2)
	{
		Advanced();
	}
	if (n == 3)
	{
		SuperAdvanced();
	}

	return 0;
}


void Basic()
{
	cout << " 1)Summation \n 2)Subtract \n 3)Multiply \n 4)Division \n 5)All in One \n";
		int m;
	cin >> m;
	if (m == 1)
		Sum();
	else if (m == 2)
		Sub();
	else if (m == 3)
		Multi();
	else if (m == 4)
		Division();
	else if (m == 5)
		All_In_One();
	else
		cout << "Error! \n";
}


void Sum()
{
	float x, y;
	cout << "Enter two Numbers: \n";
	cin >> x >> y;
	cout << "x + y = " << x + y << endl;
}


void Sub()
{
	float x, y;
	cout << "Enter two Numbers: \n";
	cin >> x >> y;
	cout << "x - y = " << x - y << endl;
}


void Multi()
{
	float x, y;
	cout << "Enter two Numbers: \n";
	cin >> x >> y;
	cout << "x * y = " << x*y << endl;
}


void Division()
{
	float x, y;
	cout << "Enter two Numbers: \n";
	cin >> x >> y;
	cout << "x / y = " << x / y << endl;
}


void All_In_One()
{
	float x, y;
	cout << "Enter two Numbers: \n";
	cin >> x >> y;
	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x*y << endl;
	cout << "x / y = " << x / y << endl;
}




void Advanced()
{
	cout << " 1)Sin(x) \n 2)Cos(x) \n 3)x^y \n 4)Sqrt(x) \n";
	int k;
	cin >> k;
	if (k == 1)
		Sin();
	else if (k == 2)
		Cos();
	else if (k == 3)
		Pow();
	else if (k == 4)
		Sqrt();
	else
		cout << "Error! \n";
}


void Sin()
{
	float x;
	cout << "Enter the angle:";
	cin >> x;
	cout << "sin(x)=" << sin(x) << endl;
}


void Cos()
{
	float x;
	cout << "Enter the angle:";
	cin >> x;
	cout << "cos(x)=" << cos(x) << endl;
}


void Pow()
{
	float x , y;
	cout << "Enter the Base:";
	cin >> x;
	cout << "Enter the Power:";
	cin >> y;
	cout << "x ^ y =" << pow(x, y) << endl;
}


void Sqrt()
{
	float x;
	cout << "Enter a Number:";
	cin >> x;
	cout << "Sqrt(x)=" << sqrt(x) << endl;
	if (x < 0)
	{
		cout << "Error! Enter a positive Number. \n";
	}
}




void SuperAdvanced()
{
	cout << "Enter whatever you want and press '=' !!! \n";
	int x, Result = 0;
	char ch;
	cin >> x;
	cin >> ch;
	Result = x;
	while (ch != '=')
	{
		cin >> x;
		if (ch == '+')
		{
			Result += x;
		}
		else if (ch == '-')
		{
			Result -= x;
		}
		cin >> ch;
	}
	cout << endl << "Result= " << Result << endl;
} 