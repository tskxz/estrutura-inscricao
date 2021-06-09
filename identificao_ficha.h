#include "datas.h"
#include "indentificao_aluno.h"
#include "indentificao_ee.h"
#include "classificacoes_disciplina.h"

typedef struct IDENTIFICACAO_FICHA {

    int num_inscricao;
    int ID = 0;
    identificacao_aluno aluno;
    identificacao_ee ee;
    char escola_origem[100];
    int ultimo_ano_frequentado;
    int repetente;
    int faltas_disciplinares;
    char razao_fdisciplinar[500];
    classificacoes_disciplina notas_disciplinas;
    char motivacao_cursoprofissional[500];
    int conhece_planocurricular;
    char exemplos_curricular[500];
    int conhece_cargo;
    char expetativa_horario[500];
    int estrutura_modular_sn;
    char significado_estruturamodular[500];
    char significado_avaliacaomodular[500];
    int tipo_trabalho_conhece;
    char descrever_trabalho[500];
    char expetativas[500];
    
    void preencher();
    void imprimir();
    void identificacao_criar_ficheiro(fstream &f, struct IDENTIFICACAO_FICHA ficha);   

} identificacao_ficha;