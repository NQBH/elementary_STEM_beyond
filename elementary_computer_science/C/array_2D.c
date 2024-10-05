#include <stdio.h>
#include <time.h>
#include <cstdlib>
#define num_row 5 // const int num_row = 5;
#define num_col 7 // const int num_col = 7;
#define max_row 20 // const int max_row = 5;
#define max_col 20 // const int max_col = 7;
#define M 20
#define N 20

int size_input(int max_val) {
	int val;
	while (1) {
		scanf("%d", &val);
		if (val < 1 || val > max_val)
			printf("Invalid value!\n");
		else
			break;
	}
	return val;
}

void array_2D_input(int a[max_row][max_col], int& m, int& n) {
	int i, j;
	printf("Number of rows (<= %d): ", max_row);
	m = size_input(max_row);
	printf("Number of columns (<= %d): ", max_col);
	n = size_input(max_col);
	printf("Input elements: \n");
	for (i = 0; i < m; ++i)
		for (j = 0; j < n; ++j)
			scanf("%d", &a[i][j]);
}

void array_2D_output(int a[max_row][max_col], int m, int n) {
	int i, j;
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
// Copy row k -> row h
void copy_row(int a[M][N], int m, int n, int k, int h) {
	if (k < 1 || k >= m || h < 1 || h >= m)
		return;
	for (int i = 0; i < n; ++i)
		a[h][i] = a[k][i];
}
// Copy column k -> column h
void copy_column(int a[M][N], int m, int n, int k, int h) {
	if (k < 1 || k >= m || h < 1 || h >= m)
		return;
	for (int i = 0; i < m; ++i)
		a[i][h] = a[i][k];
}
// Swap row k & row h
void swap_row(int a[][N], int m, int n, int k, int h) {
	int i, temp;
	if (k == h) return;
	for (i = 0; i < n; ++i) {
		temp = a[k][i];
		a[k][i] = a[h][i];
		a[h][i] = temp;
	}
}
// Swap column k & column h
void swap_column(int a[][N], int m, int n, int k, int h) {
	int i, temp;
	if (k == h) return;
	for (i = 0; i < m; ++i) {
		temp = a[i][k];
		a[i][k] = a[i][h];
		a[i][h] = temp;
	}
}
// Remove row without preserving ordering
void remove_row_nonordered(int a[][N], int& m, int n, int k) {
	if (k < 0 || k >= m) return;
	if (k != m - 1) {
		copy_row(a, m, n, m - 1, k);
		--m;
	}
}
// Remove row without preserving ordering
void remove_row_ordered(int a[][N], int& m, int n, int k) {
	int i, j, t, b[M][N];
	if (k < 0 || k >= m) return;
	if (k == m - 1) {
		--m;
		return;
	}
	t = 0;
	for (i = 0; i < m; ++i) {
		if (i == k) continue;
		for (j = 0; j < n; ++j)
			b[t][j] = a[i][j];
		++t;
	}
	for (i = 0; i < t; ++i)
		for (j = 0; j < n; ++j)
			a[i][j] = b[i][j];
	--m;
}

void remove_row_ordered_direct(int a[][N], int& m, int n, int k) {
	int i, j;
	if (k < 0 || k >= m) return;
	for (i = k; i < m - 1; ++i)
		for (j = 0; i < n; ++j)
			a[i][j] = a[i+1][j];
	--m;
}

void remove_row_ordered_indirect(int a[][N], int& m, int n, int k) {
	int i, j;
	if (k < 0 || k >= m) return;
	for (i = k; i < m - 1; ++i)
		copy_row(a, m, n, i + 1, i);
	--m;
}

void remove_row_ordered_swap(int a[][N], int& m, int n, int k) {
	int i;
	if (k < 0 || k >= m) return;
	for (i = k; i < m - 1; ++i)
		swap_row(a, m, n, i, i + 1);
	--m;
}

int main() {
	int a[num_row][num_col], i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < num_row; ++i)
		for (j = 0; j < num_col; ++j)
			a[i][j] = rand() % 100;
	int mRow, nCol;
	printf("mRow = ");
	scanf("%d", &mRow);
	printf("nCol = ");
	scanf("%d", &nCol);
	if (mRow < 1 || mRow > max_row || nCol < 1 || nCol > max_col) {
		printf("Invalid size!\n");
		return 1;
	}
	// Input 2D array
	for (i = 0; i < mRow; ++i)
		for (j = 0; j < nCol; ++j)
			scanf("%d", &a[i][j]);
	// Output 2D array
	for (i = 0; i < mRow; ++i) {
		for (j = 0; j < nCol; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	// 2D array input & output functions
	int b[max_row][max_col], m, n;
	array_2D_input(b, m, n);
	printf("Array elements:\n");
	array_2D_output(b, m, n);
}
// g++ array_2D.c -o array_2D