#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama :";
		cin >> nama;
		cout << "Masukkan Nilai :";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	
}