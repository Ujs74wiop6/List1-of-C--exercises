/*
 * File:   main.cpp
 * Author: Fabricio Tiago Arantes BSI1 - IFSP Votuporanga
 * - Ex: 1/5
 * Created on 12 de Abril de 2022, 10:16
 * 1) Faça um programa em C++ que peça o nome de uma pessoa, 
 * a quantidade de quilômetros que ela andou de bicicleta e 
 * o tempo gasto em minutos para percorrer essa distância.
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    char nome[30];
    float km, minutos, vmedia, temphora;
    cout << "Sistema para calcular velocidade media";
    cout << "Qual o seu nome : " << endl;
    cin >> nome;
    cout << "Informe qual a distancia foi percorrida (em KM) : " << endl;
    cin >> km;
    cout << "Informe qual o tempo gasto (em Minutos) : " << endl;
    cin >> minutos;
    temphora = (minutos / 60);
    vmedia = (km / temphora);
    cout << " Ola " << nome << " voce percorreu " << km << " KM em " << minutos << " minutos , sua velocidade media foi : " << vmedia << endl;
    return 0;
}

