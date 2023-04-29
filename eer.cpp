#include <iostream>
#include <Areas.h>
/* se agrega la libreria de areas */

int main(int) {
int opcion;
float Base,Area,Radio,Altura,Lado,L,L2;
cout<<"1:Area de circulo"<<endl;
cout<<"2:Area de cuadrado"<<endl;
cout<<"3:Area de Rectangulo "<<endl;
cout<<"4:Area de triangulo"<<endl;
cout<<"5:Area de rombo"<<endl;
cin>>opcion;
switch (opcion)
{
case 1: 
cout<<"ingresar radio"<<endl;
cin>>Radio;
cout<<"el areade un circulo es: "<<area_circulo(Radio)<<endl;

break;
case 2: 
cout<<"ingresar lado"<<endl;
cin>>Lado;
cout<<"el area de un cuadrado: "<<area_cuadrado(Lado)<<endl;

break;
case 3: 
cout<<"ingresar Lado 1 "<<endl;
cin>>L;
cout<<"ingresar Lado 2 "<<endl;
cin>>L2;
cout<<"ingresar radio: "<<area_rectangulo(Area))<<endl;

break;
case 4: 
cout<<"ingresar Altura"<<endl;
cin>>Altura;
cout<<"ingresar Base"<<endl;
cin>>Base;
cout<<"ingresar radio: "<<area_triangulo(Area)<<endl;

break;
case 5: 
cout<<"ingresar L"<<endl;
cin>>L;
cout<<"ingresar L2"<<endl;
cin>>L2;
cout<<"ingresar radio: "<<area_rombo(Area)<<endl;

break;


default: cout<<"no tengo mas funciones";

}	
	
	
	return 0;
}
