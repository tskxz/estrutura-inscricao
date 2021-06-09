typedef struct IDENTIFICACAO_EE {

    char nome[100];
    long int num_telemovel;
    char email[100];
    
    void preencher();
    void imprimir();
    void identificacao_ee_criar_ficheiro(fstream &f, struct IDENTIFICACAO_EE ee);
    
    
} identificacao_ee;