//
// Created by Juliana Costa Silva on 3/26/24.
//

#include <iostream>
using std::cout;
using  std::endl;

int quadrado(int num);
double quadrado(double num);

int main() {
    cout << quadrado(2) <<endl;
    cout << quadrado(1.5) << endl;
    return 0;
}

int quadrado(int num){
    return num *= num;
}

double quadrado(double num){
    return num *= num;
}
