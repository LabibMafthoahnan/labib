#include <iostream>
#include<stdlib.h>
using namespace std;
typedef struct{
string nama[100];
string posisi[10];
string nomor [10];
int bos=1; int tos=0;
}stack_pemain;
stack_pemain pemain;

bool emptyStack(stack_pemain X)
{
    if (X.tos==0){
        return true;
    }else {return false;
    }
}
bool fullStack(stack_pemain X)
{
    if (X.tos==100){
        return true;
    }else {return false;
    }
}
void Push_stack(stack_pemain &X)
{
    cout<<"Menambahkan Pemain kedalam Daftar"<<endl;
    X.tos++;
    cout<<"_________________________________"<<endl;
    cout<<"Memasukan No. Punggung :";cin>>X.nomor[X.tos];
    cout<<"Memasukan Nama :";cin>>X.nama[X.tos];
    cout<<"Masukan Posisi Pemain :";cin>>X.posisi[X.tos];
    cout<<"Pemain berhasil ditambahkan ke Daftar"<<endl;
}
void Pop_Stack(stack_pemain &X)
{
    cout<<"Mengambil Pemain dari daftar"<<endl;
    cout<<"pemain yang akan diambil:"<<endl;
    cout<<"nomor    :"<<X.nomor[X.tos]<<endl;
    cout<<"nama    :"<<X.nama[X.tos]<<endl;
    cout<<"posisi    :"<<X.posisi[X.tos]<<endl;
    X.tos--;
    cout<<"Pemain berhasil dikeluarkan dari tumpukan"<<endl;
}
void Print_Stack(stack_pemain X)
{
 cout<<"Ini adalah daftar Pemain didaftar saat ini"<<endl;
 cout<<"__________________________________________"<<endl;
 cout<<"nomor  nama   posisi"<<endl;
 cout<<"_________________________________________"<<endl;
 for(int i=X.tos; i>=X.bos;i--){
 cout<<"     "<<X.nomor[i]<<"     "<<X.nama[i]<<"    "<<X.posisi[i]<<endl;
 cout<<"__________________________________________"<<endl;}
 cout<<"Saat ini terdapat"<<X.tos<<"Pemain ditumpukan"<<endl;
}
void Find_Stack(stack_pemain &X){
string carinomor,carinama,cariposisi; bool ada=false;
cout<<"Masukan nomor yang dicari:";cin>>carinomor;
cout<<"Masukan nama :";cin>>carinama;
cout<<"Masukan posisi :";cin>>cariposisi;
for (int i=X.bos; i<=X.tos; i++)
{if ((X.nama[i]==carinama)&&(X.posisi[i]==cariposisi))
    {
        ada==true;
        cout<<"pemain"<<carinama<<"dengan posisi"<<cariposisi<<"ada dipossisi"<<i<<endl;
    }
}if (not ada){
cout<<"Pemain bernama"<<carinama<<"posisi"<<cariposisi<<"tidak ditemukan"<<endl;}
}
int main()

{
    int pilih=0;
    do{
        system("cls");
        cout<<"\t\t\t STACK MENGGUNAKAN LINKED LIST"<<endl;
        cout<<"\t\t\t______________________________"<<endl;
        cout<<"\n1. PUSH";
        cout<<"\n2. POP";
        cout<<"\n3. TAMPIL";
        cout<<"\n4. CARI";
        cout<<"\n0. EXIT";
        cout<<endl;
        cout<<"PILIH(1-4): ";cin>>pilih;
        switch(pilih)
        {
    case 1:
        {
            if (fullStack(pemain)){
                cout<<"Daftar pemain penuh";
            }else{
            Push_stack(pemain);}
            break;
        }

        case 2:
        {
            if (emptyStack(pemain)){
                cout<<"daftar pemain kosong";
            }else{
            Pop_Stack(pemain);
            }
            break;
    }
    case 3:
        {
            if (emptyStack(pemain)){
                cout<<"daftar pemain kosong";
            }else{
            Print_Stack(pemain);
            }
            break;
        }
    case 4:
        {
            if (emptyStack(pemain)){
                cout<<"Daftar Pemain kosong";
            }else{
            Find_Stack(pemain);
            }
            break;
    }
    case 0:
        {
        cout<<"Thank You lur !!!!"<<endl;
            break;
        }
    default:
        cout<<"Salah pilih Lur !!"<<endl;}
        system("pause");
        }
        while(pilih!=0);
    }



