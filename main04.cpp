/* 
 * File:   main.cpp
 * Author: Fabricio Tiago Arantes BSI1 - IFSP Votuporanga
 * - Ex: 4/5
 * Created on 13 de abril de 2022, 19:23
 * 4) Faça um programa em C++ para calcular a área total de uma 
 * casa com (quarto, sala, cozinha e banheiro).
 */
#include <cstdlib>
#include <ostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    float casa, quarto, lado_quarto, cozinha, lado_cozinha, banheiro, lado_banheiro;
    cout << "Sistema para calcular a área total de uma casa \n";
    cout << "Digite o lado do quarto :" << endl;
    cin >> lado_quarto;
    cout << "Digite o lado do banheiro :" << endl;
    cin >> lado_banheiro;
    cout << "Digite o lado do cozinha :" << endl;
    cin >> lado_cozinha;
    //OR x = pow(lado_x, 2);
    //OR x = lado_x ^2;
    //OR x = (lado_x * lado_x);
    quarto = pow(lado_quarto, 2);
    cozinha = lado_cozinha * lado_cozinha;
    banheiro = (lado_banheiro * lado_banheiro);
    casa = (quarto + cozinha + banheiro);
    cout << "A Área total dessa casa é : " << casa << endl;
    return 0;
}

