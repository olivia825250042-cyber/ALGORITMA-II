#include <iostream>
using namespace std;
int main () {
    int nA,nB,AirisanB,nU;
    cout<<"Masukkan Jumlah Elemen A = ";
    cin>>nA;
    cout<<"Masukkan Jumlah Elemen B = ";
    cin>>nB;
    cout<<"Masukkan Jumlah Irisan A dan B = ";
    cin>>AirisanB;
    cout<<"Masukkan Jumlah Elemen Semesta = ";
    cin>>nU;

    int kardinalitasAUB = nA + nB - AirisanB ;
    int selisih_simetris = nA + nB - 2*AirisanB ;
    int komplemen_selisihsimetris = nU - selisih_simetris;

    cout<<"Jumlah Elemen AUB =  "<<kardinalitasAUB<<endl;
    cout<<"Jumlah Elemen Selisih Simetris = "<<selisih_simetris<<endl;
    cout<<"Jumlah Elemen Komplemen Selisih Simetris = "<<komplemen_selisihsimetris<<endl;

    cout<<" Kelompok 5: Olivia (825250042), Merry (825250072), Mettadevi (825250074), Kania (825250075), Johanna (825250147)";
 return 0;
}