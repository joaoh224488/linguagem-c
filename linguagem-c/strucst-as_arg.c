#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    char nome[100];
    int idade;
}Pessoa;


typedef struct
{
    char disciplina[50];
    Pessoa prof;
    Pessoa alunos[50];
    int total;
}Turma;


void pessoa_exibir(Pessoa);

void turma_exibir(Turma);

int main(){
    char dc[50] = "Programacao Estruturada", prof_nome[50] = "Igor Malheiros";
    char *al[] = {"Joao", "Maria", "Jose"};

    Turma PE;

    strcpy(PE.disciplina, dc); // Atribuindo o nome da disciplina

    PE.prof.idade = 32;                             // Professor
    strcpy(PE.prof.nome, prof_nome);

    for (int i = 0; i < 3; i++){
        PE.alunos[i].idade = 20 + i;                   // Alunos
        strcpy(PE.alunos[i].nome, al[i]);
    }

    PE.total = 3;                   // Total de alunos

    turma_exibir(PE);

    return 0;
}

void pessoa_exibir(Pessoa p){
    printf("Nome: %s; Idade: %d\n", p.nome, p.idade);
}

void turma_exibir(Turma t){
    printf("Disciplina: %s\n", t.disciplina);
    printf("---------------------------------\n");
    printf("Professor:");
    pessoa_exibir(t.prof);
    printf("---------------------------------\n");
    printf("Alunos: \n");
    for (int i = 0; i < t.total; i++){
        pessoa_exibir(t.alunos[i]);
    }
    printf("---------------------------------\n");
    printf("Total de alunos: %d\n", t.total);
}