#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b) {
    return a * b;
}

float luasLingkaran(float a) {
    return 3.14 * a * a;
}

int main() {
    int pilihan;
    float panjang, lebar;
    float jejari;

    do{
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan) 
        {   
            case 1:
                cout << "Hitung Luas Persegi Panjang"<< endl;
                cout << "Masukkan panjang = ";
                cin >> panjang;
                cout << "Masukkan lebar = ";
                cin >> lebar;
                cout << "Luas Persegi Panjang = " << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Hitung Luas Lingkaran"<< endl;
                cout << "Masukkan jejari = ";
                cin >> jejari;
                cout << "Luas Lingkaran = " << luasLingkaran(jejari) << endl;
                break;
            case 3:
                break;
            default:
                cout << "Pilihan salah, pilihan harus antara 1-3" << endl;        
        }
    } while (pilihan !=3);
}