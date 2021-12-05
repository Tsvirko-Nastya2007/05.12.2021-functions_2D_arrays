#include"MyFunc.h"
int main() {
	int n= 5;//str
	int m = 5;//kol
	int l;
	int f;
	int** mas;
	mas = new int* [n];//pamyat pod 1D-massiv, hranashchiy adresa strok
	//pamyat pod stroki
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n, m);
	print_matrix(mas, n, m);
	cout << endl;
	/*cout << "Col-vo poloz: " << positiv_matrix(mas, n, m) << endl;
	cout << "Col-vo chot: " << chot_matrix(mas, n, m) << endl;
	cout << "Enter row num: "<<endl;
	cin >> l;
	cout << proizv_matrix(mas, m, l)<<endl;
	cout << srar_matrix(mas,n)<<endl;*/
	/*mul_by_num(mas, n, m, 2);
	print_matrix(mas, n, m);
	cout << endl;*/
	//cout << "Srar main diag: " << srar_main_diag(mas, n, m) << endl;
	str_revers(mas, 0, m);
	print_matrix(mas, m, n);
}