/*
Nama            : David FIM
NPM             : 140810170039
*/


#include <iostream>

using namespace std;

typedef int angka[100];

int main(){
    int n, maks;
    angka x;
    cout<<"Masukkan banyaknya angka: ";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Masukkan angka ke-"<<i+1<<": ";cin>>x[i];
    }

    maks=0;
    for(int i=0;i<n;i++){
        if(x[i]>maks)
            maks=x[i];
    }

    cout<<"\nNilai maksimal adalah: "<<maks<<endl;
}
