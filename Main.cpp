#include <iostream>
#include <fstream>
#include "identificacao_ficha.h"

using namespace std;
int main(void){
    int escolha;
    identificacao_ficha ficha01;
    do {
        cout << "1. Preencher Ficha" << endl;
        cout << "2. Imprimir Ficha" << endl;
        cout << "3. Fechar o Programa" << endl;
        cout << "4. Mostrar o MENU" << endl;
        cout << "Escolha: ";
        cin >> escolha;
        
        switch(escolha){
            case 1: {
                ficha01.preencher();
                ofstream fichabinario("registo_binario.dat", ios::out | ios::binary);
                    
                if(!fichabinario){
                    cerr << "Nao pode ser aberto!" << endl;
                    exit(1);
                }
            
                ficha01.identificacao_criar_ficheiro(fichabinario, ficha01);
                fichabinario.close();
                break;
            }
            case 2: {
                cout << "teste" << endl;
                break;
            }
            case 3: {
                cout << "Fechando o programa" << endl;
                return -1;
            }
            default:
                break;
        }
    
    } while(escolha != 3);
    
    
    
    
    
}