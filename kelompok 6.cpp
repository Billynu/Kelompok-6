#include <iostream>
using namespace std;

int main() {
    int totalBuku = 0; 
    int batasLemari = 30; 
    int buku;

    while (totalBuku < batasLemari) {
        cout << "Masukan jumlah buku: ";
        cin >> buku;
        

        if (buku % 2 == 0) {
            cout << "Buku yang dimasukkan tidak berjumlah ganjil!"<<endl<<"Coba lagi!" << endl<<endl;
            cout << "Jumlah Buku: "<< totalBuku << endl;
            cout << "================="<< endl;
            
        } else {
            totalBuku += buku;
            cout << "Memasukkan " << buku << " buku" << endl<<endl;
            cout << "Jumlah Buku: "<< totalBuku << endl;
            cout << "================="<< endl;
        }

        if (totalBuku >= batasLemari) {
            cout << "Lemari Buku telah penuh" << endl;
        }
    }

    return 0;
}
