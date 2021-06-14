#include <iostream>
#include <fstream>
#include "identificacao_ficha.h"

using namespace std;
int main(void){

    identificacao_ficha ficha01;
    ficha01.preencher();
    
    ofstream fichabinario("registobinario.dat", ios::out | ios::binary);
    if(!fichabinario){
        cerr << "Nao pode ser aberto!" << endl;
        exit(1);
    }
    
    ficha01.identificacao_criar_ficheiro(fichabinario, ficha01);
   
    cout << "Ficheiro criado" << endl;

    fichabinario.close();
    
}
