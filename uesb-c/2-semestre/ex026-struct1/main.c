// #include <stdio.h>

// typedef struct {
//    int matricula;
//    float *notas;
//    int qtdNotas;
// }Aluno;

// void LeAluno(Aluno *aluno) {
//     printf("Digite a matrícula: ");
//     scanf("%d", &aluno->matricula);
//     printf("Digite a nota 01: ");
//     scanf("%f", (aluno->nota+0));
//     printf("Digite a nota 02: ");
//     scanf("%f", (aluno->nota+1));
//     printf("Digite a nota 03: ");
//     scanf("%f", (aluno->nota+2));
// }

// void imprimeTurma(Aluno *turma, int qtd) {
//     printf("\n***************************\n")
//     printf("\n** DADOS DA TURMA *********\n")
//     printf("\n***************************\n")
//     for(int i = 0; i<qtd; i++) {
//         printf("\nAluno %d - matricula: %d\n", (i+1), *(turma+i)->matricula);
//         printf("Aluno %d - Nota 01: %f\n", (i+1), *((turma+i)->notas+0));
//         printf("Aluno %d - Nota 02: %f\n", (i+1), *((turma+i)->notas+1));
//         printf("Aluno %d - Nota 03: %f\n", (i+1), *((turma+i)->notas+2));
//     }
// }

// float CalculaMediaAluno(Aluno *aluno) {
//     float media = 0;


//     for(int i=0; i<(aluno->qtdNotas); i++) { // repete qtdNotas  vezes 
//         media += *(aluno->notas+i);
//     }
//     media = media/Aluno->qtdNotas;

//     return media;
// }

// int main() {
//     // Inicialização do array de objetos
//     Aluno *turma = malloc(sizeof(Aluno)*5); // mude para usar alocação dinamica (malloc)
//     for(int i = 0; i<5; i++) {
//         (turma+i)->notas = malloc(sizeof(float)*3);
//         (turma+i)->qtdNotas=3;
//     }

//     // Leitura dos dados
//     for(int i=0; i< 5; i++)
//     {
//         printf("\nInserção do aluno %d", (aluno+i));
//         LeAluno((turma+i));  // função que lê de teclado e inicializa os dados de cada aluno
//     }
//     imprimeTurma(turma, 5); //Função que imprime os dados de todos os alunos

//     for(int i=0; i< 5; i++)
//     {
//         float media = CalculaMediaAluno((turma+i));// função que calcula a média das notas de um aluno                                     
//         printf("Aluno %d - Media = %.2f\n", (i+1), media);
//     }
//     return 0;
// }