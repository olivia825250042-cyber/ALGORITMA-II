#include <iostream>
using namespace std;

int main (){
    int angka1,angka2,angka3,angka4;
    //Anggota himpunan A
    cout<<"Masukkan anggota himpunan A = ";
    cin>>angka1;
    cout<<"Masukkan anggota kedua himpunan A = ";
    cin>>angka2;

    //Anggota himpunan B
    cout<<"Masukkan anggota himpunan B = ";
    cin>>angka3;
    cout<<"Masukan anggota kedua himpunan B = ";
    cin>>angka4;

    //kesimpulan recap himp A himp B
    cout<<"Anggota himpunan A = {"<<angka1<<" , "<<angka2<<"}"<<endl;
    cout<<"Anggota himpunan B = {"<<angka3<<" , "<<angka4<<"}"<<endl;
    
    //irisan himpunan A dan himpunan B
   cout << "Irisan (A ∩ B): { ";
    bool adaIrisan = false;
    if (angka1 == angka3 || angka1 == angka4) {
        cout << angka1 << " ";
        adaIrisan = true;
    }
    if (angka2 == angka3 || angka2 == angka4) {
        cout << angka2 << " ";
        adaIrisan = true;
    }
    if (!adaIrisan) {
        cout << "Tidak ada irisan";
    }
    cout << "}" << endl;

    //gabungan himpunan A dan himpunan B
     cout << "Gabungan (A ∪ B): { ";
     
    cout << angka1 << " " << angka2 << " ";

    if (angka3 != angka1 && angka3 != angka2) {
        cout << angka3 << " ";
    }
    if (angka4 != angka1 && angka4 != angka2 && angka4 != angka3) {
        cout << angka4 << " ";
    }

    cout << "}" << endl;

    //himpunan A cross himpunan B
    cout << "Himpunan A x Himpunan B = { ";
    cout << "(" << angka1 << "," << angka3 << ") ";
    cout << "(" << angka1 << "," << angka4 << ") ";
    cout << "(" << angka2 << "," << angka3 << ") ";
    cout << "(" << angka2 << "," << angka4 << ") ";
    cout << "}" << endl;
    
    cout<<"Kelompok 5 = Olivia (825250042), Merry (825250072), Mettadevi (825250074), Kania (825250075), Johanna (825250147)";
    return 0;
}