//
// Created by Juliana Costa Silva on 3/26/24.
//
#include <iostream>
using std::cin;
using std::cout;
using  std::endl;

int varivavelGlobal = 1;

int quadrado( int x){
    return x * x;
}

void procedimento(){
    cout << "Executando procedimento" << endl;
}


int subrotinaSomar(int valor1, int valor2){
    int soma = valor1 + valor2;
    return soma;
}

int main() {
    int varivavelLocal = 3;
    cout  << " Utilizando variável global" << varivavelGlobal << endl;

    cout  << " Utilizando variável local " << varivavelLocal << endl;
    cout  << " Executa procedimento" <<  endl;
    procedimento();
    cout  << " Executa função" << subrotinaSomar(1, 3) << endl;
    return 0;
}