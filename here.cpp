#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Russian");
	//������ 1. 
	int arr[5]; 
	// ���� ������ � ������.
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}
	// ����� ������ �� ������� � �������.  
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}

    // ������ 2.
	int arr[4];
	// ���� ������ � ������.
	for (int i1 = 4; i1 >= 0; i1--) {
		std::cin >> arr[i1];
	}
	// ����� ������ �� ������� � �������.  
	for (int i1 = 4; i1 >= 0; i1--) {
		std::cout << arr[i1] << ' ';
	}

    // ������ 3. 
	int arr[10]; 
	for (int i2 = 0; i2 < 10; i2 += 2) {
		std::cin >> arr[i2];
	}
	for (int i2 = 0; i2 < 10; i2 += 2) {
		std::cout << arr[i2] << ' '; 
	}

    // ���1.
	int arr[10]; 
	for (int i3 = 0; i3 < 10; i3++) {
		std::cin >> arr[i3];
    } 
	int k = 0;
	for (int i3 = 0; i3 < 10; i3++) {
		std::cout << arr[i3] << ' ';
        if (arr[i3] > 0) {
			k++;
		}
    } 

	std::cout << k << std::endl; 

    // C��2. 
	int mas[10]; 
	for (int i4 = 0; i4 < 10; i4++) {
		std::cin >> mas[i4]; 
	}
	int kol = 0;
	int kol1 = 0; 
	for (int i4 = 0; i4 < 10; i4++) {
	std::cout << mas[i4] << ' '; 
		if (mas[i4] % 2 == 0) {
			kol++; 
		}
		else { 
			kol1++;
		}
	}
	std::cout << "���������� ������:" <<  kol << std::endl; 
	std::cout << "���������� ��������:" <<  kol1 << std::endl; 

	//��� 3 
	int mass[10]; 
	int sum = 0; 
	for (int i5 = 0; i5 < 10; i5++) {
		std::cin >> mass[i5]; 
	}
	for (int i5 = 0; i5 < 10; i5++) {
		std::cout << mass[i5]; 
		if (mass[i5] % 3 != 0) {
			sum = sum + mass[i5];
		}
	}
	std::cout << sum << std::endl; 
}