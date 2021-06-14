#ifndef IDENTIFICACAO_ALUNO_H
#define IDENTIFICACAO_ALUNO_H

#include "datas.h"
#include <fstream>

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
    void identificacao_aluno_criar_ficheiro(fstream &f, struct IDENTIFICACAO_ALUNO aluno);

} identificacao_aluno;

#endif