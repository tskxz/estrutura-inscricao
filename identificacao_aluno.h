#ifndef IDENTIFICACAO_ALUNO_H
#define IDENTIFICACAO_ALUNO_H

#include "datas.h"

using namespace std;

typedef struct IDENTIFICACAO_ALUNO {

    char nome[100];
    int idade;
    datas data_nascimento;
    char naturalidade[100];
    char nacionalidade[100];
    long int num_telemovel;
    char email[100];
    
    void preencher();
    void imprimir();


} identificacao_aluno;

#endif