#include <iostream>
using namespace std;

int tambah (int w, int x, int y, int z) {
    int Total_gaji;

    Total_gaji = w * x * y + z ;
    cout<<"Total gaji karyawan perbulan adalah sebesar :"<<" Rp. "<<Total_gaji<<endl;
    return Total_gaji;
}


int main ()
{
    string nama_karyawan;
    int gaji_perjam,gaji_perhari,gaji_perbulan,gaji_insentif,Total_gaji;

    cout<<"Masukkan nama karyawan : ";
    cin>>nama_karyawan;
    cout<<"--------------------------------------------------------------------------------"<<endl;

    cout<<"Rincian gaji karyawan atas nama "<<nama_karyawan<<" adalah sebagai berikut : "<<endl;

    cout<<"Masukkan gaji karyawan borongan per jam : Rp. ";
    cin>>gaji_perjam;
    cout<<"Masukkan berapa jam kerja karyawan per hari : ";
    cin>>gaji_perhari;
    cout<<"Masukkan berapa hari kerja karyawan dalam sebulan : ";
    cin>>gaji_perbulan;
    cout<<"Masukkan gaji insentif karyawan : Rp. ";
    cin>>gaji_insentif;

    cout<<"--------------------------------------------------------------------------------"<<endl;
    Total_gaji = tambah (gaji_perjam,gaji_perhari,gaji_perbulan,gaji_insentif);
    cout<<"Total gaji karyawan perbulan adalah sebesar : Rp. "<<Total_gaji<<endl;


    return 0;
}
