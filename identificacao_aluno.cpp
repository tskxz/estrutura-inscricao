#include "identificacao_aluno.h"
#include "datas.h"

#include <iostream>

using namespace std;

void identificacao_aluno::preencher(){
    cout << "Nome do aluno: ";
    cin >> nome;

    cout << "Idade do aluno: ";
    cin >> idade;
    
    data_nascimento.preencher();

    cout << "Naturalidade do aluno: ";
    cin >> naturalidade;

    cout << "Nacionalidade do aluno: ";
    cin >> nacionalidade;

    cout << "Numero do telemovel do aluno: ";
    cin >> num_telemovel;

    cout << "Email do aluno: ";
    cin >> email;
}

void identificacao_aluno::imprimir(){
    cout << "Nome do aluno: ";
    cout << nome << endl;

    cout << "Idade do aluno: ";
    cout << idade << endl;

    cout << "Naturalidade do aluno: ";
    cout << naturalidade << endl;

    cout << "Nacionalidade do aluno: ";
    cout << nacionalidade << endl;

    cout << "Numero do telemovel do aluno: ";
    cout << num_telemovel << endl;

    cout << "Email do aluno: ";
    cout << email << endl;
}