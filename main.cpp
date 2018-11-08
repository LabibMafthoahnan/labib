#include <iostream>
#include <conio.h>


using namespace std;
int main(){

int a,b,n;
int M[10][10];
cout<<"masukan panjang matrix:";
cin>>n;
for (int a=0; a<n; a++){
    for (int b=0; b<n; b++){
            cout<<"{"<<a<<","<<b<<"}"<<"=";
            cin>>M[a][b];
    }
}
cout<<endl;
for (int a=0; a<n; a++){
    for (int b=0; b<n; b++){
            if(a==b){
                    cout<<"0 ";
            }else
                 cout<<M[a][b]<< " ";

        }cout<<endl;
    }


}

