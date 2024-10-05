#include <stdio.h>
#include <math.h>
#define Swap(x, y) {auto z = x; x = y; y = z;}
#define Swap_decl(x, y) { decltype(x) z; z = x; x = y; y = z;}
void swap(float *x, float *y) {
	float u = *x;
	*x = *y;
	*y = u;
}

void ajust(float *x, float *y) {
	if (fabs(*x) > fabs(*y))
		swap(x, y); // swap(&(*x), &(*y)); // <=>
}

int main() {
	float a = 186, b = 273, A = -1864.5F, B = 273.9F, x = 1.1125, y = -4.125;
	swap(&a, &b);
	printf("New values of a & b now are a = %f, b = %f.\n", a, b);
	ajust(&A, &B);
	printf("New values of A & B now are A = %f, B = %f.\n", A, B);
	Swap(x, y);
	printf("New values of x & y now are x = %f, y = %f.\n", x, y);
	Swap_decl(x, y);
	printf("New values of x & y now are x = %f, y = %f.\n", x, y);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc swap.c -o swap
swap.c: In function ‘main’:
swap.c:3:26: warning: type defaults to ‘int’ in declaration of ‘z’ [-Wimplicit-int]
    3 | #define Swap(x, y) {auto z = x; x = y; y = z;}
      |                          ^
swap.c:21:9: note: in expansion of macro ‘Swap’
   21 |         Swap(x, y);
      |         ^~~~
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ ./swap 
New values of a & b now are a = 273.000000, b = 186.000000.
New values of A & B now are A = 273.899994, B = -1864.500000.
New values of x & y now are x = -4.125000, y = 1.000000.
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ swap.c -o swap
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ ./swap 
New values of a & b now are a = 273.000000, b = 186.000000.
New values of A & B now are A = 273.899994, B = -1864.500000.
New values of x & y now are x = -4.125000, y = 1.112500.
*/