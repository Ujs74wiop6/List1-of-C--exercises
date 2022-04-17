/* 
 * File:   main.cpp
 * Author: Fabricio Tiago Arantes BSI1 - IFSP Votuporanga
 * - Ex: 5/5
 * Created on 13 de abril de 2022, 20:39
 * 5) Faça um programa em C++ que utilize a estrutura IF/ELSE.
 */
#include <cstdlib>
#include <ostream>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    char nome[30];
    int idade;

    cout << "Qual seu nome? \n";
    cin >> nome;
    cout << "Quantos você tem? \n";
    cin >> idade;

    if (idade >= 18) {
        cout << "O Sr(a)" << nome << " é maior de idade\n";
    } else {
        cout << "O Sr(a)" << nome << " não é maior de idade\n";
    }
    return 0;
}

