/* 
 * File:   main.cpp
 * Author: Fabricio Tiago Arantes BSI1 - IFSP Votuporanga
 * - Ex: 3/5
 * Created on 13 de abril de 2022, 18:31
 * 3)Faça um programa em C++ que pergunte um valor em 
 * graus Fahrenheit e imprime na tela o correspondente em Celsius 
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    float gf, gc;
    cout << "Digite a temperatura em graus Fahrenheit's \n" << endl;
    cin >> gf;
    gc = (gf - 32)*(5.0 / 9.0);
    //OR gc = (gf - 32) / 1.8;
    cout << "Essa temperatura em graus Celsius ficaria: " << gc << endl;
    return 0;
}

