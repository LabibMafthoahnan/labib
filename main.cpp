/*#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define MAX 5

using namespace std;

typedef struct{
    int data[MAX];
    string nama;
    string posisi;
    string nomor;
    int head;
    int tail;
    }queue;
    queue antrian;

    void create(){
    antrian.head=antrian.tail=-1;
    }

int IsEmpety(){
if(antrian.tail==-1)
   return 1;
   else
    return 0;
}
int IsFull(){
if(antrian.tail==MAX-1)
   return 1;
   else
    return 0;
}
Enqueue(int data)
{
    if(IsEmpety()==1)
    {
        cout<<"Memasukan No. Punggung :";cin>>antrian.nomor;
        cout<<"Memasukan Nama :";cin>>antrian.nama;
        cout<<"Masukan Posisi Pemain :";cin>>antrian.posisi;
        cout<<"Pemain berhasil ditambahkan ke Daftar"<<endl;
        //antrian.head=antrian.tail=0;
        //antrian.data[antrian.tail]=data;
        //printf("%d Sudah dimasukan",antrian.data[antrian.tail]);
    }else
    if(IsFull()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        printf("%d Sudah dimasukan",antrian.data[antrian.tail]);
    }
}
int deque(){
int i;
int e=antrian.data[antrian.head];
for(i=antrian.head;i<=antrian.tail-1;i++)
    {
        antrian.data[i]=antrian.data[i+1];
    }
    antrian.tail--;
    return e;

}
void clear()
{
    antrian.head=antrian.tail=-1;
    cout<<"Clear"<<endl;
}
void tampil()
{
    if(IsEmpety()==0)
    {
        for(int i = antrian.head; i<antrian.tail;i++)
        {
            cout<<antrian.data[i];
        }
    }else cout <<"kosong"<<endl;
}
int main()
{
    int pil;
    do{
    int data;
    create();
    cout<<"\t\t\t QUEUE MENGGUNAKAN LINKED LIST"<<endl;
    cout<<"1:Enqueue"<<endl;
    cout<<"2:Dequeque"<<endl;
    cout<<"3:TAMPIL"<<endl;
    cout<<"4:CLEAR"<<endl;
    cout<<"5:EXIT"<<endl;
    cout<<"PILIH(1-5):";
    cin>>pil;
    cout<<"------------------------------------------"<<endl;
    switch(pil)
    {
    case 1:{
        //if (IsFull(data)){
          //      cout<<"Daftar pemain penuh";
            //}else{
            IsEmpety(data);}
            break;
    }
        //cout<<"Masukan data:";
        //cin>>data;
        //Enqueue(data);
        //break;}
    case 2:{
        deque();
        break;}
    case 3:{
        tampil();
        break;
    }
    case 4:{
        clear();
        break;}
    case 5:{
        break;
    }
    default:
        cout<<"salah Masukan"<<endl;
    }
    system("pause");
    }
        while(pil!=5);
}
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;
struct node {
char nomor[5];
char nama[50];
char posisi[20];
struct node*next;
}
*front=NULL,*rear,*temp;

void Enqueue(){
temp = new node;
cout<<"No.Punggung:";fflush(stdin);gets(temp->nomor);
cout<<"Nama:";gets(temp->nama);
cout<<"Posisi:";gets(temp->posisi);
temp->next=NULL;
if(front==NULL){
    front=rear=temp;
}
else{
    rear->next=temp;
    rear=temp;
}

system("cls");
}
void dequeue(){
if (front==NULL)
{
    cout<<"Antrian Kosong";
    system("pause");
    system("cls");
}
else{
    temp=front;
    front=front->next;
    delete(temp);
    cout<<"Dequeue berhasil"<<endl;
    system("pause");
    system("cls");
}
}
void tampil(){
if(front==NULL)
    {
        cout<<"Tidak ada antrian";
        system("pause");
        system("cls");

    }
    else{
        temp==front;
        cout<<"isi antrian"<<endl;
        while(temp!=NULL){
            cout<<temp->nomor<<"->"<<temp->nama<<"->"<<temp->posisi<<endl;
            temp=temp->next;
        }
        cout<<endl;
        system("pause");
        system("cls");
    }
}
int main(){
int pilih;
do{
    cout<<"\t\t\t QUEUE DENGAN LINKED LIST"<<endl;
    cout<<"1:Enqueue"<<endl;
    cout<<"2:Dequeque"<<endl;
    cout<<"3:TAMPIL"<<endl;
    cout<<"4:EXIT"<<endl;
    cout<<"PILIH(1-4):";
    cin>>pilih;
    cout<<"------------------------------------------"<<endl;
    switch(pilih)
    {
    case 1:
        Enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        tampil();
        break;
    //case 4:
      //  exit();
        //break;
    default:
        cout<<"salah Masukan"<<endl;
    system("pause");
    system("cls");
    break;
    }
}

        while(pilih!=4);
        return 0;

}
