#include <stdio.h>
// S_n(x) = sum_{i=0}^n x^i/i
double sum_exp(double x, int n) {
	double Sn = 0, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		Sn += y/i;
	}
	return Sn;
}
// E_n(x) = sum_{i=0}^n (-1)^{i-1}*x^i/i
double sum_exp_minus(double x, int n) {
	double En = 0, y = -1;
	x = -x;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		En += y/i;
	}
	return En;
}
// Exp_n(x) = sum_{i=0}^n x^i/i!
double Exp(double x, int n) {
	double Expn = 1, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x/i;
		Expn += y;
	}
	return Expn;
}

void main()
{
	double x, Sn, En, Kn; int n;
	printf("Input x: ");
	scanf("%lf", &x);
	printf("Input n: ");
	scanf("%d", &n);
	Sn = sum_exp(x, n);
	printf("S(%lf, %d) = %lf.\n", x, n, Sn);
	En = sum_exp_minus(x, n); // 1st sol: use new func
	printf("E(%lf, %d) = %lf.\n", x, n, En);
	En = -sum_exp(-x, n); // 2nd sol: use old func
	printf("E(%lf, %d) = %lf.\n", x, n, En);
	Kn = Exp(-x, n); // K_n(x) = sum_{i=0}^n (-1)^i*x^i/i!
	printf("K(%lf, %d) = %lf.\n", x, n, Kn);
}