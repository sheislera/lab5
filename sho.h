#include <iostream>
#include <iomanip>
#include "cmath"
using namespace std;

//helow
class Ustanova 
{
public:
	int low, ml, mr, high;
	float alfa = 0, beta = 0, h;

	Ustanova(float a, float b, float c, float d, float e)
	{
		low = a;
		ml = b;
		mr = c;
		high = d;
		h = e;
		alfa = b - a;
		beta = d - c;
	}

	float min(Ustanova a, Ustanova b)
	{
		if (a.h > b.h) return b.h;
		return a.h;
	}

	float alfa_plus(Ustanova a, Ustanova b) 
	{
		return min(a, b) * (a.alfa / a.h + b.alfa / b.h);
	}

	float beta_plus(Ustanova a, Ustanova b)
	{
		return min(a, b) * (a.beta / a.h + b.beta / b.h);
	}

	float mr_plus(Ustanova a, Ustanova b) 
	{
		return a.mr + b.mr + a.beta + b.beta - beta_plus(a, b);
	}

	float ml_plus(Ustanova a, Ustanova b)
	{
		return a.ml + b.ml - a.alfa - b.alfa + alfa_plus(a, b);
	}

	Ustanova(Ustanova a, Ustanova b)
	{

		ml = ml_plus(a,b);
		mr = mr_plus(a,b);

		h = min(a,b);
		alfa = alfa_plus(a,b);
		beta = beta_plus(a,b);
		low = ml - round(alfa);
		high = mr + round(beta);
	}

	void output() 
	{
		cout << setprecision(0) << endl << fixed << setw(10) << low << setw(10) << ml << setw(10) << mr << setw(10)
			 << high << setw(10) << alfa << setw(10) << beta << setw(10) << setprecision(1) << h  ;
	}
};