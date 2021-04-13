#include<iostream>
using namespace std;
struct data{
    char nim[15];
    string nama;
    struct{
        char namaJalan[30];
        int nomorRumah;
        char kota[30];
        char provinsi[30];
    }alamat;
    struct {
        int tanggal,tahun;
        char tempatLahir[30];
        char bulan[15];
    }tanggalLahir;
   
};
int main()
{
     cout<<"Selamat Datang \n";
    data mhs[5];
    int i;
    for(i=0;i<5;i++){
    cout<<"Aturan input data: Tanda (angka) harus berisi angka \n";
    cout<<"_______________________\n";
    cout<<"DATA MAHASISWA No. "<<i+1<<endl;
    cout<<"NIM (angka) :";
    cin>>mhs[i].nim;
    cout<<"Nama: "; 
    cout<<mhs[i].nama;
    cin>>mhs[i].nama;
    cout<<endl;
    cout<<"ALAMAT \n";
    cout<<"Jalan : ";
    cin>>mhs[i].alamat.namaJalan;
    cout<<"Nomor Rumah (angka) : ";
    cin>>mhs[i].alamat.nomorRumah;
    cout<<"Kota : ";
    cin>>mhs[i].alamat.kota;
    cout<<"Provinsi : ";
    cin>>mhs[i].alamat.provinsi;
    cout<<"TEMPAT TANGGAL LAHIR \n";
    cout<<"Tempat : ";
    cin>>mhs[i].tanggalLahir.tempatLahir;
    cout<<"Tanggal (angka): ";
    cin>>mhs[i].tanggalLahir.tanggal;
    cout<<"Bulan (angka) : ";
    cin>>mhs[i].tanggalLahir.bulan;
    cout<<"Tahun (angka) : ";
    cin>>mhs[i].tanggalLahir.tahun;
    cout<<"_______________________\n";
    cout<<endl;
}  
    return 0;
}