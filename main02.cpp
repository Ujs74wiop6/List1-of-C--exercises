/* 
 * File:   main.cpp
 * Author: Fabricio Tiago Arantes BSI1 - IFSP Votuporanga
 * - Ex: 2/5
 * Created on 13 de abril de 2022, 17:49
 * 2) Faça um programa em C++ que leia o nome e três 
 * notas do aluno. Calcule a média. Após o cálculo, 
 * imprima uma mensagem da forma “Aluno Fulano possui média 7.0”.
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    char nome[30];
    float nota1, nota2, nota3, media;
    cout << "Sistema para calcular média escolar \n";
    cout << "Digite o nome do aluno: " << endl;
    cin >> nome;
    cout << "Digite a 1° nota: " << endl;
    cin >> nota1;
    cout << "Digite a 2° nota: " << endl;
    cin >> nota2;
    cout << "Digite a 3° nota: " << endl;
    cin >> nota3;
    media = (nota1 + nota2 + nota3) / 3;
    cout << "O aluno " << nome << " tem " << media << " de média" << endl;
    return 0;
}

