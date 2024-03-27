//
// Created by Juliana Costa Silva on 3/26/24.
//
// C08EX02.CPP
#include <iostream>
using namespace std;

void fatorial(int N){
    int I;
    long int FAT = 1;
    for (I = 1; I <= N; I++)
    {
        FAT *= I;
    }
    cout << "\nFatorial de " << N << " = a: " << FAT << endl;
}

int main(){
    int X, Y;
    cout << "Calculo de fatorial\n";
    cout << "\nEntre um valor inteiro: ";
    cin >> X; cin.ignore(80, '\n');
    fatorial(X);
    return 0;
}

