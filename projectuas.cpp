#include<iostream>
#include<string>
#include<stdio.h>
#include<iomanip>
#include<fstream>
using namespace std;
#define max 6

int pilih,j,kecepatanroket, jarakplanet;
float a [max] , jumlah = 0 , rata_rata,estimasi;

void menghitungestimasi(){
    ofstream ryu;
    ryu.open("NASA Calculator.txt");
    cout << "Masukkan kecepatan roket (standartnya adalah 40000 km/j) : ";
    cin >> kecepatanroket;
    ryu << "Masukkan kecepatan roket (standartnya adalah 40000 km/j) : " << kecepatanroket;
    cout << "Masukkan jarak planet dari bumi dalam satuan km : ";
    cin >> jarakplanet;
    ryu << "Masukkan jarak planet dari bumi dalam satuan km : " << jarakplanet;
    estimasi=jarakplanet/kecepatanroket;
    cout << "Waktu tempuh anda adalah : " << estimasi << " hari ";
    ryu << "Waktu tempuh anda adalah : " << estimasi << " hari ";
    ryu.close();
}

int main() {
do{
cout << "Riyu Muhammad NASA calculator v 1.0" << endl;
cout << "----------------------------------------------------------------------------------" << endl;
cout << "1. Menghitung kecepatan rata rata roket dalam satuan mach ( 1 mach= 1234,8 km/j )" << endl;
cout << "2. Menghitung jarak tempuh roket ke salah satu planet dalam satuan km/j" << endl;
cout << "3. Untuk keluar ( pakai kapital )" << endl;
cout << "----------------------------------------------------------------------------------" <<endl;
cout << "Pilih yang ingin anda gunakan : ";
cin >> pilih;
cout << endl;
ofstream ryu;
switch(pilih){
case 1:
//Memasukkan atau Meng-input nilai ke dalam elemen array
            ryu.open("NASA Calculator.txt");
            cout << "Masukkan Nilai Yang Ingin Dihitung : \n\n " ;
            ryu << "Masukkan Nilai Yang Ingin Dihitung : \n\n " ;
            for( j = 1 ; j < max ; j++ ) {
                        cout << endl ;
                        ryu << endl ;
                        cout << "Kecepatan ke- " << j << " = " ;
                        cin >> a [j];
                        ryu << "Kecepatan ke- " << j << " = " << a[j];
                        jumlah = jumlah + a [j] ;
            }

//Melakukan Proses perhitungan
            rata_rata = jumlah / max ;
            cout << endl ;

//Menampilkan atau Output Hasil Perhitungan
            cout << "Nilai Rata-Rata Dari Data Diatas Adalah = " << rata_rata << " mach "<< endl;
            ryu << "Nilai Rata-Rata Dari Data Diatas Adalah = " << rata_rata << " mach "<< endl;
            ryu.close();
            break;

case 2:
    menghitungestimasi();
    cout << endl;
    break;

case 3:
    cout << "Tekan tombol enter" << endl;
    break;

default:
    cout << "Yang anda pilih belum tersedia untuk sementara";
}
} while (pilih!=3);

return 0;
}

