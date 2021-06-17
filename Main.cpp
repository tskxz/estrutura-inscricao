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
        cout << "2. Mostrar todos os registos que estao armazenados num ficheiro" << endl;
        cout << "3. Fechar o Programa" << endl;
        cout << "4. Mostrar o MENU" << endl;
        cout << "5. Pesquisar atraves do numero da inscricao" << endl;
        cout << "6. Mostrar os registos por ordem da idade" << endl;

        cout << "Escolha: ";
        cin >> escolha;
        
        switch(escolha){
            case 1: {
                
                ofstream fichabinario;
                fichabinario.open("REGISTOS.dat", ios::binary | ios::app);
                fichas[num_fichas].preencher();
                fichas[num_fichas].identificacao_criar_ficheiro(fichabinario, fichas[num_fichas]);
                fichabinario.close();
                num_fichas++;
                break;
            }
            case 2: {
                identificacao_ficha ficha;

                ifstream fichabinario_read;
                fichabinario_read.open("REGISTOS.dat", ios::in | ios::binary);
                ficha.identificacao_imprimir_ficheiro(fichabinario_read, ficha);
                fichabinario_read.close();
                break;
            }
            case 3: {
                cout << "Fechando o programa" << endl;
                return -1;
            }
            case 5: {
                int numero_inscricao;
                ifstream ficheirobinario_read_numeroinscricao;
                ficheirobinario_read_numeroinscricao.open("REGISTOS.dat", ios::in | ios::binary);
                cout << "Introduze o numero da inscricao: ";
                cin >> numero_inscricao;
                while(!ficheirobinario_read_numeroinscricao.eof()){
                    for(int i = 0; i <= num_fichas; i++){
                        ficheirobinario_read_numeroinscricao.read((char*)(&fichas[i]), sizeof(&fichas[i]));
                        if(!ficheirobinario_read_numeroinscricao.fail() && (numero_inscricao == fichas[i].num_inscricao)){
                            fichas[i].imprimir();
                        }
                    }

                }
                break;
            }
            default:
                break;

        }
    
    } while(escolha != 3);
    
    
    
    
    
}   