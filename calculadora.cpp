#include <iostream>
using namespace std;
int main(){
	int opcion, n1, n2, suma, resta, multi, division;
	
	cout<<"*****************************"<<endl;
	cout<<"*BIENVENIDO A MI CALCULADORA*"<<endl;
	cout<<"*****************************"<<endl;
	cout<<"*SUMA                      1*"<<endl;
	cout<<"*RESTA                     2*"<<endl;
	cout<<"*MULTIPLICAR               3*"<<endl;
	cout<<"*DIVIDIR                   4*"<<endl;
	cout<<"*****************************"<<endl;
	cout<<"opcion: ";
	cin>>opcion;
	while (opcion < 1 or opcion > 4){
		cout<<"Opcion invalida ";
		cin>>opcion;
	}
	switch (opcion){
		case 1:
			cout<<"SUMA"<<endl;
			cout<<"numero 1: ";
			cin>>n1;
			cout<<"numero 2: ";
			cin>>n2;
			suma = n1 + n2;
			cout<<"El resultado es: "<<suma;
			break;
		case 2:
			cout<<"RESTA"<<endl;
			cout<<"numero 1: ";
			cin>>n1;
			cout<<"numero 2: ";
			cin>>n2;
			resta = n1 - n2;
			cout<<"El resultado es: "<<resta;
			break;
		case 3:
			cout<<"MULTIPLICAR"<<endl;
			cout<<"numero 1: ";
			cin>>n1;
			cout<<"numero 2: ";
			cin>>n2;
			multi = n1 * n2;
			cout<<"El resultado es: "<<multi;
			break;
		case 4:
			cout<<"DIVIDIR"<<endl;
			cout<<"numero 1: ";
			cin>>n1;
			cout<<"numero 2: ";
			cin>>n2;
			while (n2 == 0){
				cout<<"No se puede divir entre 0 "<<endl;
				cout<<"reingrese numero2: ";
				cin>>n2;
			}
			division = n1 / n2;
			cout<<"El resultado es: "<<division;
			break;
		}
	}
	
	
	
