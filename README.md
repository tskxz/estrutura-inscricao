# estrutura-inscricao
Projeto da estrutura de inscrições para o curso profissional

#### Para compilar  

```
g++ -c Main.cpp
g++ -c identificacao_ficha.cpp
```

#### Para Linkar os ficheiros  


```
g++ -o estrutura Main.o identificacao_ficha.o identificacao_aluno.o identificacao_ee.o datas.o classificacoes_disciplina.o
```

#### Para rodar  

```
g++ Main.cpp
```