#include <iostream>
using namespace std;
static const int lvl1 = 4, lvl2 = 4;
static const double uPrice1 = 5300, uPrice2 = 10200, uPrice3 = 11400;
static const double extra_rate = 0.05 + 0.1;
static double temp1 = lvl1*uPrice1, temp2 = temp1 + lvl2*uPrice2;

double water_bill(int m3, int num_person)
{
	double sum_money = 0;
	int Lmt1 = num_person*lvl1, Lmt2 = num_person*(lvl1 + lvl2);
	if (m3 <= Lmt1)
		sum_money = m3*uPrice1;
	else if (m3 <= Lmt2)
		sum_money = num_person*temp1 + (m3 - Lmt1)*uPrice2;
	else
		sum_money = num_person*temp2 + (m3 - Lmt2)*uPrice3;
	// Compute VAT
	sum_money = (1 + extra_rate)*sum_money;
	return sum_money;
}

double water_bill(int old_index, int new_index, int num_person) {
	if (old_index >= new_index)
		return 0;
	return water_bill(new_index - old_index, num_person);
}

int main() {
	int old_index, new_index, num_person;
	cin >> old_index >> new_index >> num_person;
	cout << water_bill(old_index, new_index, num_person) << ".\n";
}
