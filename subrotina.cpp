//
// Created by Juliana Costa Silva on 3/26/24.
//
#include <iostream>
using std::cin;
using std::cout;
using  std::endl;

int quadrado(int);

int main() {
    int a = 10;
    cout << a << " ao quadrado " << quadrado(a) << endl;
    return 0;
}

int quadrado( int x){
    return x * x;
}