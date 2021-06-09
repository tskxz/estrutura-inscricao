#include "datas.h"
#include <iostream>

using namespace std;

void datas::preencher(){
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
}

void datas::imprimir(){
    cout << dia << "/" << mes << "/" << ano << endl;
}