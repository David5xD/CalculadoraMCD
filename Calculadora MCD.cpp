#include <iostream>
#include <stdio.h>  
#include <conio.h>
using namespace std;

int main(){
	//Definición e Introducción
	system("color 70");
	cout<<"                 									"<<endl;
	cout<<"                 									"<<endl;
	cout<<"                 CALCULADORA DE MCD                  "<<endl;
	cout<<"                 									"<<endl;
	cout<<"        HECHO POR DAVID LEONARDO RINCON OVALLE		"<<endl;
	cout<<"                 									"<<endl;
	cout<<"            		20201020075						"<<endl;
	cout<<"                 									"<<endl;
	cout<<"                 									"<<endl;	
	cout<<"Por favor, seguir las intrucciones del programa."<<endl;
	int y;
	cout<<"======================================================="<<endl;
	cout<<"Introducir cantidad de números (minimo 2, y maximo 4)."<<endl;
	cin>>y;
	if(y<2){
		cout<<"======================================================="<<endl;
		cout<<"La cantidad de numeros no puede ser menor a 2."<<endl;
		getch();
		return 0;
	}
	if(y>4){
		cout<<"======================================================="<<endl;
		cout<<"La cantidad de numeros no puede ser mayor a 4."<<endl;
		getch();
		return 0;
	}
	int num[y];
	int i,j,aux;
	for(i=0;i<y;i++){
		cout<<"======================================================="<<endl;
		cout<<"Introducir el numero "<<i+1<<"."<<endl;
		cin>>num[i];
		if(num[i]==0){
			cout<<"======================================================="<<endl;
			cout<<"Los numeros no pueden contener 0."<<endl;
			getch();
			return 0;
		}
		if(num[i]<0){
			cout<<"======================================================="<<endl;
			cout<<"Los numeros no pueden ser menores a 0."<<endl;
			getch();
			return 0;
		}
	}
	//Organizar Números Mayor a Menor
	for(i=0;i<y;i++){
		for(j=0;j<y;j++){
			if(num[j]>num[j+1]){
				aux=num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	//Definición Por Orden
	if(y==2){
		float mayor=num[1];
		float menor=num[0];
		//Algoritmo MAY y MEN
		cout<<"======================================================="<<endl;
		cout<<"En primer lugar calcularemos el MCD entre los 2 numeros los cuales son: "<<mayor<<" y "<<menor<<"."<<endl;
		int a = mayor;
		int b = menor;
		int r, q;
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		int p1=a;
		int p2=b;
		q=a/b;
		r=a%b;
		cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;
		while(r!=0){
			a=b;
			b=r;
			if(a>b){
				q=a/b;
				r=a%b;	
			cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;	
			}
		}
		cout<<"======================================================="<<endl;
		cout<<"                 									"<<endl;
		cout<<"El MCD entre "<<mayor<<" y "<<menor<<" es: "<<b<<"."<<endl;
		cout<<"                 									"<<endl;
		getch();
		return 0;
	}
	if(y==3){
		float mayor=num[2];
		float may2=num[1];
		float menor=num[0];
		//Algoritmo MAY y MAY2
		cout<<"======================================================="<<endl;
		cout<<"En primer lugar calcularemos el MCD entre los 2 numeros mayores los cuales son: "<<mayor<<" y "<<may2<<"."<<endl;
		int a = mayor;
		int b = may2;
		int r, q;
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		int p1=a;
		int p2=b;
		q=a/b;
		r=a%b;
		cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;
		while(r!=0){
			a=b;
			b=r;
			if(a>b){
				q=a/b;
				r=a%b;	
			cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;	
			}
		}
		cout<<"El MCD entre "<<mayor<<" y "<<may2<<" es: "<<b<<"."<<endl;
		//Algoritmo MCD y MENOR
		cout<<"======================================================="<<endl;
		cout<<"Aplicamos MCD en: "<<may2<<"."<<endl;
		int c, d;
		if(may2>b){
			c = may2;
			d = b;
		}
		else{
			d = may2;
			c = b;
		}
		int r2, q2;
		if(c==0){
			return d;
		}
		if(d==0){
			return c;
		}
		int p3=c;
		int p4=d;
		q2=c/d;
		r2=c%d;
		cout<<c<<" = "<<q2<<" * "<<d<<" + "<<r2<<endl;
		while(r2!=0){
			c=d;
			d=r2;
			if(c>d){
				q2=c/d;
				r2=c%d;	
				cout<<c<<" = "<<q2<<" * "<<d<<" + "<<r2<<endl;	
			}
		}
		cout<<"El MCD entre "<<b<<" y "<<may2<<" es: "<<d<<"."<<endl;
		cout<<"======================================================="<<endl;
		cout<<"                 									"<<endl;
		cout<<"El MCD entre los numeros es "<<d<<"."<<endl;
		cout<<"                 									"<<endl;
		getch();
		return 0;
	}
	if(y==4){
		float mayor = num[3];
		float may2 = num[2];
		float may3 = num[1];
		float menor = num[0];
		//Algoritmo MAY y MAY2
		cout<<"======================================================="<<endl;
		cout<<"En primer lugar calcularemos el MCD entre los 2 numeros mayores los cuales son: "<<mayor<<" y "<<may2<<"."<<endl;
		int a = mayor;
		int b = may2;
		int r, q;
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		int p1=a;
		int p2=b;
		q=a/b;
		r=a%b;
		cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;
		while(r!=0){
			a=b;
			b=r;
			if(a>b){
				q=a/b;
				r=a%b;	
			cout<<a<<" = "<<q<<" * "<<b<<" + "<<r<<endl;	
			}
		}
		cout<<"El MCD entre "<<mayor<<" y "<<may2<<" es: "<<b<<"."<<endl;
		//Algoritmo MCD y MAY3
		cout<<"======================================================="<<endl;
		cout<<"Aplicamos MCD en: "<<may3<<"."<<endl;
		int c, d;
		if(may3>b){
			c = may3;
			d = b;
		}
		else{
			d = may3;
			c = b;
		}
		int r2, q2;
		if(c==0){
			return d;
		}
		if(d==0){
			return c;
		}
		int p3=c;
		int p4=d;
		q2=c/d;
		r2=c%d;
		cout<<c<<" = "<<q2<<" * "<<d<<" + "<<r2<<endl;
		while(r2!=0){
			c=d;
			d=r2;
			if(c>d){
				q2=c/d;
				r2=c%d;	
				cout<<c<<" = "<<q2<<" * "<<d<<" + "<<r2<<endl;	
			}
		}
		cout<<"El MCD entre "<<b<<" y "<<may3<<" es: "<<d<<"."<<endl;
		//Algoritmo MCD y MENOR
		cout<<"======================================================="<<endl;
		cout<<"Aplicamos MCD en: "<<menor<<"."<<endl;
		int e, f;
		if(menor>d){
			e = menor;
			f = d;
		}
		else{
			f = menor;
			e = d;
		}
		int r3, q3;
		if(e==0){
			return f;
		}
		if(f==0){
			return e;
		}
		int p5=e;
		int p6=f;
		q3=e/f;
		r3=e%f;
		cout<<e<<" = "<<q3<<" * "<<f<<" + "<<r3<<endl;
		while(r3!=0){
			e=f;
			f=r3;
			if(e>f){
				q3=e/f;
				r3=e%f;	
				cout<<e<<" = "<<q3<<" * "<<f<<" + "<<r3<<endl;	
			}
		}
		cout<<"El MCD entre "<<d<<" y "<<menor<<" es: "<<f<<"."<<endl;
		cout<<"======================================================="<<endl;
		cout<<"                 									"<<endl;
		cout<<"El MCD entre los numeros es "<<f<<"."<<endl;
		cout<<"                 									"<<endl;
		getch();
		return 0;
	}
}
