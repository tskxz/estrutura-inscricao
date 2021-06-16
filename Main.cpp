#include <iostream>
#include <fstream>
#include "identificacao_ficha.h"

using namespace std;
int main(void){
    int escolha;
    identificacao_ficha fichas[100];
    int num_fichas = 0;
    do {
        cout << "1. Criar e armazenar Ficha" << endl;
        cout << "2. Imprimir conteudo da Ficha" << endl;
        cout << "3. Fechar o Programa" << endl;
        cout << "4. Mostrar o MENU" << endl;
        cout << "5. Armazenar Ficha em todos registos" << endl;
        cout << "6. Mostrar os registos de forma ordenada pela idade" << endl;
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
                identificacao_ficha ficha;

                char nomereadfich[100];
                cout << "Nome do ficheiro: ";
                cin.ignore();
                cin.getline(nomereadfich, 100);
                ifstream fichabinario_read(nomereadfich, ios::in | ios::binary);
                ficha.identificacao_imprimir_ficheiro(fichabinario_read, ficha);
                break;
            }
            case 3: {
                cout << "Fechando o programa" << endl;
                return -1;
            }
            case 5: {
                ofstream fichabinario_write("TODOSREGISTOS.dat", ios::out | ios::binary);
                
                fichas[0].identificacao_criartudo_ficheiro(fichabinario_write, fichas);
                fichabinario_write.close();
                break;
            }
            case 6: {
                ofstream fichabinario_ordenado_o("ordenado.dat", ios::out | ios::binary);


                ifstream fichabinario_ordenado("ordenado.dat", ios::in | ios::binary);
                fichas[0].imprimir_ordenado(fichabinario_ordenado_o, fichabinario_ordenado, fichas);
                

                break;
            }
            default:
                break;
        }
    
    } while(escolha != 3);
    
    
    
    
    
}   
