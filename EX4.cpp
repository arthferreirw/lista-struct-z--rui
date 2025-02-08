//Crie uma struct chamada "Data" que armazene os seguintes dados: dia (int), mês (int) e ano (int). Crie uma função para verificar se uma data é válida.



#include <iostream>

using namespace std;

struct Data{

    int dia; 
    int mes;
    int ano;


};

void PreencherData( Data &D){

    cout<< "Informe o dia: ";
    cin>>D. dia;

    cout<< "Informe o mes: ";
    cin>>D.mes;

    cout<<" Informe o ano: ";
    cin>>D.ano;



}

void Verificador( Data  &D){

    if (D. dia > 365 || D. dia <= 0){
        cout<<" Data invalida "<<endl;

    }

    if (D. ano > 2024 || D. ano <= 0){
        cout<<" Ano invalido  "<<endl;

    }

    if (D. mes > 12 || D. mes <= 0){
        cout<<" mes invalido "<<endl;

    }


}

int main (){
    Data D1;

    PreencherData(D1);
    Verificador(D1);












    return 0;
}