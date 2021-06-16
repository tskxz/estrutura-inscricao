#include <iostream>
#include <fstream>
#include "identificacao_ficha.h"

using namespace std;
int main(void){
    int escolha;
    identificacao_ficha fichas[100];
    int num_fichas = 0;
    do {
        cout << "1. Criar Ficha" << endl;
        cout << "2. Mostrar Ficha" << endl;
        cout << "3. Fechar o Programa" << endl;
        cout << "4. Mostrar o MENU" << endl;
        cout << "Escolha: ";
        cin >> escolha;
        
        switch(escolha){
            case 1: {
                num_fichas = num_fichas+1;
                
                fichas[num_fichas].preencher();
                
                char nome_ficheiro[100];
                
                cout << "Nome do ficheiro: ";
                cin.ignore();
                cin.getline(nome_ficheiro, 100);
                
                ofstream fichabinario(nome_ficheiro, ios::out | ios::binary);
            
                fichas[num_fichas].identificacao_criar_ficheiro(fichabinario, fichas[num_fichas]);
                fichabinario.close();
                
                break;
            }
            case 2: {
                /*
                char nomereadfich[100];
                cout << "Nome do ficheiro: ";
                cin.ignore();
                cin.getline(nomereadfich, 100);
                ifstream fichabinario_read(nomereadfich, ios::in | ios::binary);
                ficha01.identificacao_read_ficheiro(fichabinario_read, ficha01);
                fichabinario_read.close();
                
                
                */
                cout << "Indique o ID da ficha que gostaria de ver: ";
                int ID;
                cin >> ID;
                fichas[ID].imprimir();
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