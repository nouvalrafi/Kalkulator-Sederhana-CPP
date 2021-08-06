#include <iostream>
using namespace std;

	void fungsiUlang(){
	int inputAngka, a, b, c; //tipe data untuk bilangan bulat
	float d, e, f; //tipe data untuk operasi pembagian
			cout << "==============================================\n"; //dashboard kalkulator sederhana
			cout << "Selamat Datang di Program Kalkulator Sederhana\n";
			cout << "==============================================\n";
			cout << "Pilih Opsi\n";
			cout << "1. Penjumlahan\n";
			cout << "2. Pengurangan\n";
			cout << "3. Perkalian\n";
			cout << "4. Pembagian\n";
			cout << "5. Sisa bagi\n";
			cout << "==============================================\n";

			cout << "Masukkan angka : ";
			cin >> inputAngka; //menginput angka sesuai dashboard yang tersedia

				switch (inputAngka) //pengondisian jika sudah menginput angka
				{
				case 1:
					cout << "==============================================\n"; //penjumlahan
					cout << "1. Penjumlahan\n";
					cout << "==============================================\n";
					cout << "a + b = c\n";
					cout << "Input a = ";
					cin >> a;
					cout << "Input b = ";
					cin >> b;
					c = a + b;
					cout << a << " + " << b << " = " << c << endl;
					break;
				case 2:
					cout << "==============================================\n"; //pengurangan
					cout << "2. Pengurangan\n";
					cout << "==============================================\n";
					cout << "a - b = c\n";
					cout << "Input a = ";
					cin >> a;
					cout << "Input b = ";
					cin >> b;
					c = a - b;
					cout << a << " - " << b << " = " << c << endl;
					break;
				case 3:
					cout << "==============================================\n"; //perkalian
					cout << "3. Perkalian\n";
					cout << "==============================================\n";
					cout << "a * b = c\n";
					cout << "Input a = ";
					cin >> a;
					cout << "Input b = ";
					cin >> b;
					c = a * b;
					cout << a << " * " << b << " = " << c << endl;
					break;
				case 4:
					cout << "==============================================\n"; //pembagian
					cout << "4. Pembagian\n";
					cout << "==============================================\n";
					cout << "a / b = c\n";
					cout << "Input a = ";
					cin >> d;
					cout << "Input b = ";
					cin >> e;
					f = d / e;
					cout << d << " / " << e << " = " << f << endl;
					break;
				case 5:
					cout << "==============================================\n"; //sisa bagi
					cout << "5. Sisa Bagi\n";
					cout << "==============================================\n";
					cout << "a % b = c\n";
					cout << "Input a = ";
					cin >> a;
					cout << "Input b = ";
					cin >> b;
					c = a % b;
					cout << a << " % " << b << " = " << c << endl;
					break;
				default:
					cout << "\n==============================================\n"; //jika input tidak sesuai
					cout << "Angka yang anda masukkan tidak ditemukan\n";
					cout << "Coba ketik 1/2/3/4/5\n";
					break;
				}
	}
int main(){
	char kembali;
	bool ulang = true;
	while (ulang == true){ //looping fungsiUlang() pada kalkulator jika bernilai true
	fungsiUlang(); //memanggil fungsi
		cout << "==============================================\n"; 
		cout << "\napakah anda ingin mengulangi lagi?\n";
		cout << "Ketik (Y/N) : ";
		cin >> kembali;
			if (kembali == 'Y' || kembali == 'y'){
				continue;
			} else if(kembali == 'N' || kembali == 'n'){ //jika input n/N berhenti
				cout << "==============================================\n\n";
				cout << "=================Terimakasih==================";
				cout << "\n\n==============================================";
				ulang = false;
			} else{
				cout << "==============================================\n";
				cout << "Input tidak dikenali\n";
				cout << "==============================================\n";
				ulang = false;
			}
	}
	std::cin.get();
	return 0;
}
