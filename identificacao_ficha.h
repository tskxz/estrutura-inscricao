#ifndef IDENTIFICACAO_FICHA_H
#define IDENTIFICACAO_FICHA_H

#include "datas.h"
#include "identificacao_aluno.h"
#include "identificacao_ee.h"
#include "classificacoes_disciplina.h"

typedef struct IDENTIFICACAO_FICHA {

    int num_inscricao;
    int ID = 0;
    identificacao_aluno aluno;
    identificacao_ee ee;
    char escola_origem[100];
    int ultimo_ano_frequentado;
    char repetente;
    char faltas_disciplinares;
    char razao_fdisciplinar[500];
    classificacoes_disciplina notas_disciplinas;
    char motivacao_cursoprofissional[500];
    char conhece_planocurricular;
    char exemplos_curricular[500];
    char conhece_cargo;
    char expetativa_horario[500];
    char estrutura_modular_sn;
    char significado_estruturamodular[500];
    char significado_avaliacaomodular[500];
    char tipo_trabalho_conhece;
    char descrever_trabalho[500];
    char expetativas[500];
    
    void preencher();
    void imprimir();
    void imprimir_ordem(struct IDENTIFICACAO_FICHA fichas[100], int len);
    void identificacao_criar_ficheiro(ostream& f, struct IDENTIFICACAO_FICHA ficha);
    void identificacao_imprimir_ficheiro(istream& f, struct IDENTIFICACAO_FICHA ficha);
    void pesquisa_inscricao_ficheiro(istream& f);

    IDENTIFICACAO_FICHA();

} identificacao_ficha;


#endif