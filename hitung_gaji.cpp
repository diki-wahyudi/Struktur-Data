#include <iostream>
using namespace std;

int main()
{
    cout<<"Program menghitung gaji harian \n";
    int jam_kerja,gaji_perjam,gaii_harian,gaji_lembur,gaji_diterima;
    gaji_perjam= 50000;
    cout<<"Informasi : \n";
    cout<<"Gaji perjam : "<<gaji_perjam<<endl;
    cout<<"Jam lembur : kerja diatas 7 jam\n";
    cout<<"Gaji lembur : (gaji perjam x 15) x jam lembur\n";
    cout<<endl;
    cout<<"Input jam kerja : ";
    cin>>jam_kerja;
    cout<<endl;
    gaji_diterima= jam_kerja*gaji_perjam;

    if(jam_kerja>7){
        jam_kerja=jam_kerja-7;
        cout<<"Anda Lembur "<< jam_kerja<<" jam\n";
        gaji_lembur= gaji_perjam*15;
        gaji_diterima= gaji_diterima - (jam_kerja*gaji_perjam) + gaji_lembur;
        cout<<endl;
        cout<<"Gaji lembur : "<<gaji_lembur<<endl;
    }else{
        cout<<"Anda tidak bekerja lembur\n";
        gaji_diterima = jam_kerja*gaji_perjam;
    };
    cout<<"Gaji yang diterima : Rp."<<gaji_diterima<<endl;
    return 0;
}