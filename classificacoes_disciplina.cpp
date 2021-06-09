#include "classificacoes_disciplina.h"
#include <iostream>
using namespace std;

void classificacoes_disciplina::preencher(){
    cout << "Nota do 8 ano em tic: ";
    cin >> tic[0];
    cout << "Nota do 8 ano em matematica: ";
    cin >> matematica[0];
    cout << "Nota do 8 ano em portugues: ";
    cin >> portugues[0];
    cout << "Nota do 8 ano em ingles: ";
    cin >> ingles[0];
    cout << "Nota do 8 ano em fisica-quimica: ";
    cin >> fisica_quimica[0];

    cout << "Nota do 9 ano em tic: ";
    cin >> tic[1];
    cout << "Nota do 9 ano em matematica: ";
    cin >> matematica[1];
    cout << "Nota do 9 ano em portugues: ";
    cin >> portugues[1];
    cout << "Nota do 9 ano em ingles: ";
    cin >> ingles[1];
    cout << "Nota do 9 ano em fisica-quimica: ";
    cin >> fisica_quimica[1];
    

    cout << "Nota do 10 ano em tic: ";
    cin >> tic[2];
    cout << "Nota do 10 ano em matematica: ";
    cin >> matematica[2];
    cout << "Nota do 10 ano em portugues: ";
    cin >> portugues[2];
    cout << "Nota do 10 ano em ingles: ";
    cin >> ingles[2];
    cout << "Nota do 10 ano em fisica-quimica: ";
    cin >> fisica_quimica[2];
}
void classificacoes_disciplina::imprimir(){
    cout << "Notas de tic: [";
    for(int i = 0; i<=3; i++){
        cout << tic[i] << ", ";
    }
    cout << "]";

    cout << "Notas de matematica: [";
    for(int i = 0; i<=3; i++){
        cout << matematica[i] << ", ";
    }
    cout << "]";

    cout << "Notas de portugues: [";
    for(int i = 0; i<=3; i++){
        cout << portugues[i] << ", ";
    }
    cout << "]";

    cout << "Notas de ingles: [";
    for(int i = 0; i<=3; i++){
        cout << ingles[i] << ", ";
    }
    cout << "]";
    cout << "Notas de fisica-quimica: [";
    for(int i = 0; i<=3; i++){
        cout << fisica_quimica[i] << ", ";
    }
    cout << "]";
}