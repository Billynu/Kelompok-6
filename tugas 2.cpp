#include <iostream>
using namespace std;

int main() {
    int jumlahKertas = 0;
    int seluruhKertas = 10;
    int kertas;

   do {
        cout << "Masukan kertas: ";
        cin >> kertas;

        if ( jumlahKertas < kertas + seluruhKertas) {
            cout << "Kertas yang dimasukan lebih " << (kertas + jumlahKertas - seluruhKertas)<< " Coba Lagi!"<< endl<< endl;
        } else if (kertas + jumlahKertas < seluruhKertas) {
            jumlahKertas += kertas;
            cout << "Kertas yang dimasukan kurang " << (seluruhKertas - jumlahKertas)<<endl << "Coba Lagi!" << endl<<endl;
        } else {
            jumlahKertas += kertas;
            cout << "Jumlah kertas " << jumlahKertas << endl;
            break; 
        }
        jumlahKertas += kertas;
        cout << "Jumlah kertas " << jumlahKertas << endl;
        cout << "==============="<<endl;
    }  while (true);

    return 0;
}

