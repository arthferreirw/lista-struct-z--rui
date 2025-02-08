#include <iostream>
#include <string>



using namespace std;



struct Retangulo {
    
    float altura;
    float largura;
    
    
    
    
    
    
    
    
    
};

void PreencherAlturaLargura(Retangulo &L, Retangulo &A){
    
    cout<<" Informe a altura do retangulo (m): ";
    cin>> A. altura;
    
    cout<<" Informe a largura do triangulo (m): ";
    cin>> L. largura;
    
    
    
    
    
    
    
}

void CalcularAreaRetangulo(Retangulo &L, Retangulo &A){
    
    float area = 0;
    
    float largura = L. largura;
    float altura = A. altura;
    
    area = largura * altura;
    
    cout<<" A area do rentangulo eh: "<<area<<" m^2 "<<endl;
    
    
    
    
    
}

void CalcularPerimetroRetangulo(Retangulo &L, Retangulo &A){
    
    float perimetro = 0; 
    float largura = L. largura;
    float altura = A. altura;
    
    perimetro = 2* (altura) + 2* (largura);
    
    cout<<" O perimetro do retangulo eh: "<<perimetro<<" m "<<endl;
    
    
    
    
}


int main (){
  Retangulo L1,A1;
  
  PreencherAlturaLargura(L1,A1);
  CalcularAreaRetangulo(L1, A1);
  CalcularPerimetroRetangulo(L1,A1);
    
    
    
    
    
    
    return 0;
}