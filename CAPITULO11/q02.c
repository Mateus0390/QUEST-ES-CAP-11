#include <stdio.h>
#include <string.h>


struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

int main() {
    
    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(struct Aluno));
    return 0;
}
