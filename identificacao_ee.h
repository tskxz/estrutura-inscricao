#ifndef IDENTIFICACAO_EE_H
#define IDENTIFICACAO_EE_H
#include <fstream>
using namespace std;

typedef struct IDENTIFICACAO_EE {

    char nome[100];
    long int num_telemovel;
    char email[100];
    
    void preencher();
    void imprimir();
    
    
} identificacao_ee;
#endif