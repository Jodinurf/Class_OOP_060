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
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilainya : " << nilai;
};

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukkan kode : ";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah:";
		cin >> namaMK;
		cout << "Masukkan SKS :";
		cin >> sks;
	}
	void tampilMK() {
		cout << "\nData Matakuliah";
		cout << "\nkode Matakuliah : " << kode;
		cout << "\nNaman Matakuliah : " << namaMK;
		cout << "\nSKS : " << sks;
	}
};
