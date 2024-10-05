#include <stdio.h>
int main() {
	float x;
	unsigned short a[10] = {0};
	unsigned short *pshort;
	unsigned long *plong;
	void *p;
	pshort = a; // <=> p = &a[0]
	*pshort = 5; // a[0] = 5
	pshort = &a[2];
	*pshort = 19; // a[2] = 19

	p = &x;
	*(float*)p = 1.5F; // x = 1.5
	p = &a[8];
	*(unsigned short*)p = 23; // a[8] = 23
	plong = (unsigned long*)&a[5];
	*plong = 0xDEADBEEF; // Affect on both a[5] & a[6]
}