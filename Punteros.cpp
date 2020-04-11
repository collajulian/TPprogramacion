#include<iostream>

using namespace std;

int main (){
int x, y, *p;
cout<<"ingrese un numero ";
cin>>x;
p = &x;
cout<<"direccion "<<p <<" contenido "<< x << endl;
cout<<"direccion "<<&x <<" contenido "<< *p << endl;
cout<<"ingrese un numero ";
cin>>y;
p = &y;
cout<<"direccion "<<p <<" contenido "<< x << endl;
cout<<"direccion "<<&y <<" contenido "<< *p << endl;

}
