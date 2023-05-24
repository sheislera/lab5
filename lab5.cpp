#include <iostream>
#include <iomanip>
#include "sho.h"

using namespace std;



int main()
{
	Ustanova A (380, 380, 380, 380, 1);
	Ustanova B (330, 340, 430, 480, 1);
	Ustanova V1 (200, 200, 300, 300, 0.9);
	Ustanova G1 (280, 290, 300, 320, 0.7);
	Ustanova D1 (340, 340, 540, 540, 0.3);

	Ustanova V2(0, 0, 0, 0, 0.1);
	Ustanova G2(0, 0, 0, 0, 0.3);
	Ustanova D2(0, 0, 0, 0, 0.7);

	Ustanova AB(A, B);
	Ustanova ABV1(AB, V1);
	Ustanova ABV1G1(ABV1, G1);
	Ustanova ABV1G2(ABV1, G2);
	Ustanova ABV1G1D1(ABV1G1, D1);
	Ustanova ABV1G1D2(ABV1G1, D2);
	Ustanova ABV1G2D1(ABV1G2, D1);
	Ustanova ABV1G2D2(ABV1G2, D2);

	Ustanova ABV2(AB, V2);
	Ustanova ABV2G1(ABV2, G1);
	Ustanova ABV2G2(ABV2, G2);
	Ustanova ABV2G1D1(ABV2G1, D1);
	Ustanova ABV2G1D2(ABV2G1, D2);
	Ustanova ABV2G2D1(ABV2G2, D1);
	Ustanova ABV2G2D2(ABV2G2, D2);

	Ustanova S1 = ABV1G1D1;
	Ustanova S2 = ABV1G1D2;
	Ustanova S3 = ABV1G2D1;
	Ustanova S4 = ABV1G2D2;
	Ustanova S5 = ABV2G1D1;
	Ustanova S6 = ABV2G1D2;
	Ustanova S7 = ABV2G2D1;
	Ustanova S8 = ABV2G2D2;


	cout << setprecision(0) << endl << fixed << setw(10) << "lower" << setw(10)  << "ml"  
		<< setw(10) << "mr" << setw(10) <<
		  "high" << setw(10) << "alfa" << setw(10)  << "beta" << setw(10) <<"h"  << setw(10) ;
	S1.output();
	S2.output();
	S3.output();
	S4.output();
	S5.output();
	S6.output();
	S7.output();
	S8.output();

}