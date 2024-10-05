#include <iostream>
using namespace std;
const int min_year = 1900, max_year = 10000;

int check_leap_year(int year) {
	int ans;
	if (year < min_year || year > max_year)
		ans = -1;
	else {
		if (year % 4 != 0)
			ans = 0;
		else {
			if (year % 100 != 0)
				ans = 1;
			else {
				if (year % 400 == 0)
					ans = 1;
				else
					ans = 0;
			}
		}
	}
	return ans;
}

int check_leap_year1(int year) {
	int ans;
	if (year < min_year || year > max_year)
		ans = -1;
	else if (year % 4 != 0)
		ans = 0;
	else if (year % 100 != 0)
		ans = 1;
	else if (year % 400 == 0)
		ans = 1;
	else
		ans = 0;
	return ans;
}

int check_leap_year2(int year) {
	int ans;
	if (year < min_year || year > max_year)
		ans = -1;
	else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		ans = 1;
	else
		ans = 0;
	return ans;
}

int check_leap_year3(int year) {
	if (year < min_year || year > max_year)
		return -1;
	else return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int num_day_of_month(int month, int year) {
	int num_day;
	int is_leap = check_leap_year3(year);
	if (is_leap == -1 || month < 1 || month > 12)
		num_day = -1;
	else {
		switch (month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				num_day = 31;
				break;
			case 4: case 6: case 9: case 11:
				num_day = 30;
				break;
			default:
				if (is_leap)
					num_day = 29;
				else
					num_day = 28;
		}
	}
	return num_day;
}

bool next_day(int& day, int& month, int& year) {
	int anum_day_in_month = num_day_of_month(month, year);
	if (anum_day_in_month == -1 || day < 1 || day > anum_day_in_month)
		return false;
	else {
		if (day < anum_day_in_month)
			++day;
		else if (month < 12) { // day = anum_day_in_month
			day = 1;
			++month;
		}
		else { // day = anum_day_in_month & month = 12
			day = month = 1;
			++year;
		}
	}
	return true;
}

int main() {
	int d, m, y;
	cin >> d >> m >> y;
	cout << "Leap year: " << check_leap_year(y) << ", " << check_leap_year1(y) << ", " << check_leap_year2(y) << ", " << check_leap_year3(y) << ".\n";
	cout << "The number of days in month " << m << " of year " << y << " is " << num_day_of_month(m, y) << ".\n";
	next_day(d, m, y);
	cout << "The next day: " << d << "/" << m << "/" << y << ".\n";
}