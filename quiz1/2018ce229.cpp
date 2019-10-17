#include<iostream>
#include<conio.h>
using namespace std;
class rational_number
{
private:
	int c;		//integer for numerator
	int d,e,f,g,h;		//integer for denominator
public:
	
	rational_number()			//no-argument constructor that initializes the numerator and denominator tpo a fixed valuse=0
	{
		c = 0;
		d = 0;
		e = 0;
		f = 0;
		g = 0;
		h = 0;
	}
	rational_number(int c, int d,int e,int f)		//constructor to prevent the 0 value in denominator  and avoid negative numbers
	{
		this->c= c;
		this->d = d;
		this->e = e;
		this->f = f;
	}
	void  divide_fractions();
	void multiply_fractions();
	void greater_than();
	void smaller_than();
	void greater_or_equal();
	void smaller_or_equal();
	void equal();

};
void add_fraction()
{
	int c, d, e, f,g,h;
	cout << "enter the ist fraction : ";
	cout << "enter numerartor = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = (c*f + e*d);
	h = (d*f);
	if (h != 0)
	{
		cout << "the sum of fractions " << c << "/" << d << "  +  " << e << "/" << f << " = " << g << " /" << h << endl;
	}
	else
	{
		cout << " math error" << endl;
	}
	


}
void subtract_fraction()
{
	int c, d, e, f,g,h;
	cout << "enter the ist fraction : ";
	cout << "enter numerartor = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = (c*f - e*d);
	h = (d*f);
	if (h != 0)
	{
		cout << "the sum of fractions " << c << "/" << d << "  -  " << e << "/" << f << " = " << g << "/" << h << endl;
	}
	else
	{
		cout << "math error" << endl;
	}
	
}
void rational_number:: multiply_fractions()
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerartor = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	cout << "you have entered " << c << "/" << d << " and " << e << "/" << f << endl;
	g = c*e;
	h = d*f;
	if (h != 0)
	{
		cout << "the multiplication results in " << g << "/" << h << endl;
	}
	else
	{
		cout << "the math error" << endl;
	}
	
}
void  rational_number :: divide_fractions()
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	cout << "you have entered " << c << "/" << d << " and " << e << "/" << f << endl;
	if (e != 0)
	{
		g = c / e;
	}
	else
	{
		cout << "math error" << endl;
	}
	if (f != 0 && d!=0)
	{
		h = d / f;
	}
	else
	{
		cout << "math error";
	}
	
	
	cout << "the division  results in " << g << "/" << h << endl;
}
void rational_number::greater_than()									//to check if ist fraction is greater the=an second or not
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = c / d;				//ist fraction
	h = e / f;				//2nd fraction
	if (g > h)
	{
		cout << "the fraction " << c << " / " << d << "is greater"<<endl;

	}
	else
	{
		cout << "it is not greater than 2nd fraction" << endl;
	}
}
void rational_number:: smaller_than()									//to check if ist fraction is greater the=an second or not
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = c / d;				//ist fraction
	h = e / f;				//2nd fraction
	if (g < h)
	{
		cout << "the fraction " << c << " / " << d << "is smaller" << endl;

	}
	else
	{
		cout << "it is not smaller than 2nd fraction" << endl;
	}
}
void rational_number::greater_or_equal()									//to check if ist fraction is greater the=an second or not
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = c / d;				//ist fraction
	h = e / f;				//2nd fraction
	if (g >= h)
	{
		cout << "the fraction " << c << " / " << d << "is greater or equal" << endl;

	}
	else
	{
		cout << "it is not greater or equal to than 2nd fraction" << endl;
	}
}
void rational_number::smaller_or_equal()									//to check if ist fraction is greater the=an second or not
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = c / d;				//ist fraction
	h = e / f;				//2nd fraction
	if (g <= h)
	{
		cout << "the fraction " << c << " / " << d << "is smaller and equal to" << endl;

	}
	else
	{
		cout << "it is not smaller than and equal to 2nd fraction" << endl;
	}
}
void rational_number::equal()
{
	int c, d, e, f, g, h;
	cout << "enter the ist fraction : ";
	cout << "enter numerator = ";
	cin >> c;
	cout << "enter denominator = ";
	cin >> d;
	cout << "enter the 2nd fraction : ";
	cout << "enter numerartor = ";
	cin >> e;
	cout << "enter denominator = ";
	cin >> f;
	g = c / d;				//ist fraction
	h = e / f;				//2nd fraction
	if (g == h)
	{
		cout << "the fraction " << c << " / " << d << "is equal to" << endl;

	}
	else
	{
		cout << "it is  not equal to 2nd fraction" << endl;
	}

}
int main()
{
	rational_number r;
	rational_number(1, 2, 3, 4);
	cout << "ADDING TWO FRACTIONS ........." << endl;
	add_fraction();
	cout << "SUBTRACTING TWO FRACTIONS ........." << endl;
	subtract_fraction();
	cout << "DIVIDING TWO FRACTIONS ........." << endl;
	r.divide_fractions();
	cout << "TO FIND THE GREATER OR EQUAL TO TWO FRACTIONS ........." << endl;
	r.greater_or_equal();
	cout << "GREATER OF TWO FRACTIONS ........." << endl;
	r.greater_than();
	cout << "product OF TWO FRACTIONS ........." << endl;
	r.multiply_fractions();
	cout << "equality OF TWO FRACTIONS ........." << endl;
	r.equal();
	cout << "SMALLER OR EQUAL OF TWO FRACTIONS ........." << endl;
	r.smaller_or_equal();
	cout << "SMALLER OF TWO FRACTIONS ........." << endl;
	r.smaller_than();
	system("pause");
	return 0;
}