#include <iostream>

using namespace std;

void merge (int array[],int l , int m , int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	int i,j,k;
	for (i = 0; i < n1; i++) 
        L[i] = array[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = array[m + 1+ j]; 
    
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            array[k] = L[i]; 
            i++; 
        } 
        else
        { 
            array[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        array[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        array[k] = R[j]; 
        j++; 
        k++; 
    } 
} 



void mergesort(int array[],int l, int r){
	if(l<r){
	int m = (r+l)/2;
	mergesort(array,l,m);
	mergesort(array,m+1,r);
	
	merge(array,l,m,r);
	}
}

void cetak(int array[],int size){
	int i;
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	
}
int main (){
	int panjang;
	int array[panjang];
	cout<<"masukan panjang array :";cin>>panjang;
	for(int i=0 ; i<panjang ; i++){
		cout<<"Masukan elemen ke-"<<i+1<<" :";		
		cin>>array[i];
	}	
	
	cetak(array,panjang);
	
	mergesort(array,0,panjang-1);
	cout<<"\n hasil merge sort : \n";
	cetak(array,panjang);
}
