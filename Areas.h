//libreria para calcular ares de figuras geometrias


#linclude <iostream>
//decaramos una constante

#define PI3.1416
//definimos espacio de nombres

using namespace std;
//parametro de radio lo nombraremos R
float area_circulo(float R){
// definiicion de la forula 
return PI*R*R;
}

//declararemos una funcion para cacular el cuadrado y usaremos como
//parametro lado L
float area_cuadrado(float L){
// definiicion de la forula para calcular Cuadrado A=L*L

return L*L;
}
float area_Triangulo(float H,float B){
// definiicion de la forula para calcular Cuadrado A=B*C/2

return Area=(B*H)/2;
}
float area_rombo(float L,float L2){
// definiicion de la forula para calcular trapecio (B*b/2)*H

return Area=(L*L2/2)*H;
}
float area_rectangulo(float L,float L2){
// definiicion de la forula 
return Area=L*L2;
}
