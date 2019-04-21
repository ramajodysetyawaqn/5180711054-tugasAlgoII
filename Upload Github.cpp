#include <iostream>
#include <math.h>
using namespace::std;

int pangkat(double x,double y,int n){
y=exp(n*log(x));
}

 main(){
double y,x;
int n;
cout<<"Masukkan nilai x                 : "; cin>>x;
cout<<"Masukkan nilai n (nilai pangkat) : "; cin>>n;
cout<<"Hasil    : "<<pangkat(y,x,n);
}
