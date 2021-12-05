#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void fill_random(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}
int positiv_matrix(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0) k++;
		}
	}
	return k;
}
int chot_matrix(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0) k++;
		}
	}
	return k;
}
int proizv_matrix(int** mas, int m, int k) {
	int g = 1;
	for (int i = 0; i < m; i++) {
		g *= mas[k][i];
	}
	return g;
}
double srar_matrix(int** mas, int n) {
	double j = 0;
	int h;
	cout << "Enter kol num: " << endl;
	cin >> h;
	for (int i = 0; i < n; i++) {
		j += mas[h][i];
	}
	j = j / n;
	return j;
}
void mul_by_num(int** mas, int n, int m, int num) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= num;
		}
	}
}
double srar_main_diag(int** mas, int n, int m) {
	int s=0;
	for (int i = 0; i < n; i++) {
		s += mas[i][i];
	}
	return static_cast<double> (s) / n;
}
void str_revers(int** mas, int k, int m) {
	int x = m / 2;
	for (int j = 0; j<x; j++) {
		swap(mas[k][j], mas[k][m - 1 - j]);
	}
}