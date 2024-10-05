#include <iostream>
using namespace std;
static const int Lmt1 = 50, Lmt2 = 100, Lmt3 = 200, Lmt4 = 300, Lmt5 = 400;
static const double Prc1 = 1549, Prc2 = 1600, Prc3 = 1858, Prc4 = 2340, Prc5 = 2615, Prc6 = 2701;
static const double VAT_rate = 0.1;
static double temp1 = (Lmt1 - 0)*Prc1,
		temp2 = temp1 + (Lmt2 - Lmt1)*Prc2,
		temp3 = temp2 + (Lmt3 - Lmt2)*Prc3,
		temp4 = temp3 + (Lmt4 - Lmt3)*Prc4,
		temp5 = temp4 + (Lmt5 - Lmt4)*Prc5;
// 1st electricity bill function
double electricity_bill(int kWh) {
	double sum_money = 0;
	if (kWh <= Lmt1)
		sum_money = kWh*Prc1;
	else if (kWh <= Lmt2)	// Lmt1 < kWh <= Lmt2
		sum_money = temp1 + (kWh - Lmt1)*Prc2;
	else if (kWh <= Lmt3)	// Lmt2 < kWh <= Lmt3
		sum_money = temp2 + (kWh - Lmt2)*Prc3;
	else if (kWh <= Lmt4)	// Lmt3 < kWh <= Lmt4
		sum_money = temp3 + (kWh - Lmt3)*Prc4;
	else if (kWh <= Lmt5)	// Lmt4 < kWh <= Lmt5
		sum_money = temp4 + (kWh - Lmt4)*Prc5;
	else					// kWh > Lmt5
		sum_money = temp5 + (kWh - Lmt5)*Prc6;
	// Compute VAT
	sum_money = (1 + VAT_rate)*sum_money;
	return sum_money;
}
// 2nd electricity bill function
const int _MyExtreme = -1;
double subCompute(int Lm1, int Lm2, double Prc, int kWh) {
	double value = 0;
	if (kWh >= Lm1) {
		if (kWh < Lm2 || Lm2 == _MyExtreme)
			value = (kWh - Lm1)*Prc;
		else
			value = (Lm2 - Lm1)*Prc;
	}
	return value;
}

double electricity_bill_improved(int kWh) {
	double sum_money = subCompute(0, Lmt1, Prc1, kWh) + subCompute(Lmt1, Lmt2, Prc2, kWh)
					 + subCompute(Lmt2, Lmt3, Prc3, kWh) + subCompute(Lmt3, Lmt4, Prc4, kWh)
					 + subCompute(Lmt4, Lmt5, Prc5, kWh) + subCompute(Lmt5, _MyExtreme, Prc6, kWh);
	// Compute VAT
	sum_money = (1 + VAT_rate)*sum_money;
	return sum_money;
}

int main() {
	int kWh;
	cin >> kWh;
	cout << electricity_bill(kWh) << ".\n" << electricity_bill_improved(kWh) << ".\n";
}