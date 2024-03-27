//
// Created by Juliana Costa Silva on 3/26/24.
//
#include <iostream>
using std::cout;
using  std::endl;

void quadradoPorReferencia( int & );

int quadradoPorValor(int num = 1);

int main() {
    int x = 2;
    int z = 4;
    cout << x << " antes da função quadradoPorValor " << endl;
    cout << "Retorno da função quadradoPorValor " << quadradoPorValor() << endl;
    cout << x << " depois da função quadradoPorValor " << endl;

    cout << z << " antes da função quadradoPorReferencia " << endl;
    cout << z << " depois da função quadradoPorReferencia " << endl;
    return 0;
}

int quadradoPorValor(int num){
    return num *= num;
}

void quadradoPorValorReferencia(int &numRef){
    numRef *= numRef;
}