#include "datas.h"
#include "identificacao_aluno.h"
#include "identificacao_ficha.h"
#include "identificacao_ee.h"
#include "classificacoes_disciplina.h"
#include <fstream>
#include <string>

#include <iostream>

using namespace std;

void identificacao_ficha::preencher(){
    cout << "Numero da inscricao: ";
    cin >> num_inscricao;
    /*
    ID = ID+1;
    aluno.preencher();
    ee.preencher();

    cout << "Escola de origem: ";
    cin >> escola_origem;
    
    cout << "Ultimo ano frequentado: ";
    cin >> ultimo_ano_frequentado;

    cout << "Repetente [1/0]: ";
    cin >> repetente;

    cout << "Faltas Disciplinares [1/0]: ";
    cin >> faltas_disciplinares;
    
    if(faltas_disciplinares == 1){
        cout << "Razao da falta disciplinar: ";
        cin.ignore();
        cin.getline(razao_fdisciplinar, 500);
    }

    notas_disciplinas.preencher();

    cout << "Escreva a motivacao para a escolha deste curso profissional: ";
    cin.ignore();
    cin.getline(motivacao_cursoprofissional, 500);
    
    cout << "Conhece o plano curricular de um curso profissional? [1/0]: ";
    cin >> conhece_planocurricular;
    if(conhece_planocurricular == 1){
        cout << "Diga exemplos: ";
        cin.ignore();
        cin.getline(exemplos_curricular, 500);
        
    }

    cout << "Em termos de funcionamento, estes cursos estao sujeitos a uma carga letiva superior a das turmas de progressimentos de estudos, tem conhecimento dessa situacao? [1/0] : ";
    cin >> conhece_cargo;
    if(conhece_cargo == 1){
        cout << "Escreva as expetativas sobre o horario deste curso: ";
        cin.ignore();
        cin.getline(expetativa_horario, 500);
    }
    cout << "A formacao dos cursos profissionais esta organizada numa estrutura modular. Sabe o significado de Estrutura modular? [1/0]: ";
    cin >> estrutura_modular_sn;
    if(estrutura_modular_sn == 1){
        cout << "Indique o significado da estrutura modular: ";
        
        cin.getline(significado_estruturamodular, 500);
        cout << "Indique o significado da avaliacao modular: ";
        cin.ignore();
        cin.getline(descrever_trabalho, 500);
    
    }
    cout << "Ao longo de um curso profissional ocorrem tres momentos de formacao em contexto de trabalho. Sabe o tipo de trabalho realizado nessa area?: ";
    cin >> tipo_trabalho_conhece;
    if(tipo_trabalho_conhece == 1){
        cout << "Descreva o tipo de trabalho e em que instituicoes se pode realizar em formacao de contexto de trabalho: ";
        cin.ignore();
        cin.getline(descrever_trabalho, 500);
    }

    cout << "Expresse neste espaço as suas expetativas face ao Curso e a esta escola: ";
    cin.ignore();
    cin.getline(expetativas, 500);*/


}

void identificacao_ficha::identificacao_criar_ficheiro(ostream& f, identificacao_ficha ficha){
    f.seekp(0);
    f.write(
        (const char *)(&ficha),
        sizeof(ficha)
    );
}

void identificacao_ficha::identificacao_read_ficheiro(istream& f, identificacao_ficha ficha){
    f.seekg(0);
    f.read(
        (char *)(&ficha),
        sizeof(ficha)
    );
}

void IDENTIFICACAO_FICHA::identificacao_criartudo_ficheiro(ostream& f, identificacao_ficha ficha[100]){
    f.seekp(0);
    for(int i = 0; i<len(ficha); i++)
    f.write(
        (const char *)(&ficha[i]),
        sizeof(ficha)
    );
}

void identificacao_ficha::imprimir(){
    
    cout << "Numero da inscricao: " << num_inscricao << endl;
    /*
    cout << "ID: " << ID << endl;
    aluno.imprimir();
    ee.imprimir();
    cout << "Escola de origem: ";
    cout << escola_origem << endl;
    cout << "Ultimo ano frequentado: ";
    cout << ultimo_ano_frequentado;

    cout << "Repetente: ";
    cout << repetente << endl;

    cout << "Faltas Disciplinares [1/0]: ";
    cout << faltas_disciplinares << endl;

    cout << "Razao da falta disciplinar: ";
    cout << razao_fdisciplinar << endl;

    notas_disciplinas.imprimir();
    cout << motivacao_cursoprofissional << endl;

    cout << exemplos_curricular << endl;
    cout << expetativa_horario << endl;
    cout << estrutura_modular_sn << endl;
    cout << significado_estruturamodular << endl;
    cout << significado_avaliacaomodular << endl;
    cout << descrever_trabalho << endl;
    cout << expetativas << endl;
    */

}