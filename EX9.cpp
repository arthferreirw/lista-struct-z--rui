// 9. Crie uma struct chamada "Triângulo" que armazene as coordenadas de três pontos: A, B e C. Adicione um método para calcular a área do triângulo. Adicionar um método significa colocar a função dentro da struct
#include <iostream>
using namespace std;
struct Triangulo{

    int A1;
    int A2;
    int B1;
    int B2;
    int C1;
    int C2;


};

void PreencherVerticesTriangulo (Triangulo &T){

    cout<<" A1: ";
    cin>> T. A1;

    cout<<" A2: ";
    cin>> T.A2;

    cout<<" B1: ";
    cin>>T. B1;

    cout<<" B2: ";
    cin>>T.B2;

    cout<<" C1: ";
    cin>> T.C1;

    cout<<" C2: ";
    cin>>T.C2;




}

void CoodernadasDentroMatriz (Triangulo &T , int **m, int linhas, int colunas){

    for (int l = 0; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c++){

            m[0][0] = T. A1;
            m[0][1] = T.A2;
            m[0][2] = 1;
            m [1][0] = T.B1;
            m[1][1] = T.B2;
            m[1][2] = 1;
            m[2][0] = T.C1;
            m[2][1] = T.C2;
            m[2][2] = 1;

        }


    }






}

void ImprimirMatriz(int **m, int linhas, int colunas){
	for( int l = 0; l < linhas ; l++){
		for( int c = 0; c < colunas ; c++ ){
			cout<<m[l][c]<<"\t";
			
		}
		cout<<endl;

	}
	
	
	
}

int CalcularDet3x3(int **m, int linhas, int colunas){
	float determinante=0;
	float linha1=0;
	float linha2=0;
	float linha3=0;
	float linha4=0;
	float linha5=0;
	float linha6=0;
	
	for( int l = 0; l < linhas ; l++){
		for( int c=0; c < colunas ; c++){
			linha1= m[0][0]*m[1][1]*m[2][2]; //ok 
			linha2= m[0][1]*m[1][2]*m[2][0]; //ok 
			linha3= m[0][2]*m[1][0]*m[2][1]; //ok
			linha4= m[2][0]*m[1][1]*m[0][2]; // ok
			linha5= m[2][1]*m[1][2]*m[0][0]; // ok
			linha6= m[2][2]*m[1][0]*m[0][1]; // ok
			
			determinante= (linha1 + linha2 + linha3) - ( linha4 + linha5 + linha6);
		}
		
		
	}
		cout<<" -------------------------------------------------------------------------- "<<endl<<endl;
		cout<<" O determinante da matriz 3x3 eh: "<<determinante<<endl;
		cout<<" -------------------------------------------------------------------------- "<<endl<<endl;
	
    return determinante;
}



void CalcularAreaTriangulo (Triangulo &T, int **m , int linhas , int colunas){
    
    int det = CalcularDet3x3 (m, linhas,colunas);
     

    float AreaTriangulo = 0.5 * det;

    cout<< " A area do triangulo eh: "<<AreaTriangulo<<endl;






}

int main (){
    Triangulo T1;

    int **matriz;
    int linhas = 3;
    int colunas = 3;

     matriz = new int *[linhas];

    for (int i = 0 ; i < linhas ; i ++ ){
        matriz[i] = new int [colunas];
    }

    PreencherVerticesTriangulo (T1);
    CoodernadasDentroMatriz (T1 , matriz, linhas,colunas);
    ImprimirMatriz(matriz, linhas,  colunas);
    CalcularDet3x3(matriz, linhas, colunas);
   CalcularAreaTriangulo (T1,matriz, linhas , colunas);






    return 0;
}