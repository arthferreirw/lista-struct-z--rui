#include <iostream>
#include <string>

using namespace std;

//3. Crie uma struct chamada "Aluno" que armazene os seguintes dados: matrícula (int), nome (string) e notas (array de floats). Crie uma função para preencher as notas de um aluno e outra função para calcular a média das notas.

struct Aluno {
    string nome;
    string matricula;
    int tam;
    float* notas = nullptr; // Inicializa o ponteiro como nulo para alocar depois
};

void PreencherDadosAluno(Aluno &A) {
    cout << "Informe a matricula do aluno: ";
    cin >> A.matricula;

    cout << "Informe o nome do Aluno: ";
    cin >> A.nome;
}

void PreencherNotas(Aluno &A, float &contador) {
    cout << "Qual eh a quantidade de notas: ";
    cin >> A.tam;

    // Aloca o array de notas agora que A.tam foi definido
    A.notas = new float[A.tam];

    for (int i = 0; i < A.tam; i++) {
        cout << "Informe o valor da nota " << i + 1 << ": ";
        cin >> A.notas[i];
        contador += A.notas[i]; // Soma as notas ao contador
    }
}

void CalcularMediaAluno(Aluno &A, float &contador) {
    float media = contador / A.tam; // Calcula a média dividindo o contador pelo número de notas
    cout << "A media do aluno " << A.nome << " eh: " << media << endl;
}

int main() {
    Aluno A1;
    float contador = 0;

    PreencherDadosAluno(A1);
    PreencherNotas(A1, contador);
    CalcularMediaAluno(A1, contador);

    // Aqui você pode opcionalmente desalocar a memória com delete[] A1.notas se precisar
    return 0;
}
