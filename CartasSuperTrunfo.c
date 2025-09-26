#include <stdio.h>
#include <stdlib.h> // Para a função exit(), se necessário.

// --- FUNÇÃO PARA LIMPAR O BUFFER ---
// Uma função simples para descartar o restante da linha do buffer.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Lixo coletado
    }
}
// ------------------------------------

int main() {
// declaração variáveis carta 1
char estado1;
char nome_cidade1[50];
char cod_carta1[5];

float area1, pib1;
int populacao1, pontos_turisticos1;

// declaração variáveis carta 2
char estado2;
char nome_cidade2[50];
char cod_carta2[5];
float area2, pib2;
int populacao2, pontos_turisticos2;

// leitura carta 1
printf("\n");
printf("Leitura dos dados da carta 1 \n");
printf("\n");

printf("Digite o estado 1: ");
scanf(" %c", &estado1);
limpar_buffer(); // Limpa a tecla ENTER após ler o estado

printf("Digite o codigo da carta 1: ");
// Usando %s, mas garantindo que o buffer está limpo
scanf("%4s", cod_carta1); // Limita a 4 caracteres + \0
limpar_buffer(); // Limpa o ENTER após ler o código

printf("Digite o nome da cidade 1: ");
// *** CORREÇÃO APLICADA AQUI: Usando fgets para ler nomes compostos com segurança ***
fgets(nome_cidade1, 50, stdin);
// A função fgets inclui o '\n'. Se quiser removê-lo:
int i = 0;
while (nome_cidade1[i] != '\0') {
    if (nome_cidade1[i] == '\n') {
        nome_cidade1[i] = '\0';
        break;
    }
    i++;
}

printf("Digite a populacao 1: ");
scanf("%d", &populacao1);
limpar_buffer();

printf("Digite a area (KM) 1: ");
scanf("%f", &area1);
limpar_buffer();

printf("Digite o PIB (em milhoes) 1: ");
scanf("%f", &pib1);
limpar_buffer();

printf("Digite os pontos turisticos 1: ");
scanf("%d", &pontos_turisticos1);
limpar_buffer();

// leitura carta 2
printf("\n");
printf("Leitura dos dados da carta 2 \n");
printf("\n");

printf("Digite o estado 2: ");
scanf(" %c", &estado2);
limpar_buffer();

printf("Digite o codigo da carta 2: ");
scanf("%4s", cod_carta2);
limpar_buffer();

printf("Digite o nome da cidade 2: ");
// *** CORREÇÃO APLICADA AQUI ***
fgets(nome_cidade2, 50, stdin);
// Remove o '\n' (newline)
i = 0;
while (nome_cidade2[i] != '\0') {
    if (nome_cidade2[i] == '\n') {
        nome_cidade2[i] = '\0';
        break;
    }
    i++;
}

printf("Digite a populacao 2: ");
scanf("%d", &populacao2);
limpar_buffer();

printf("Digite a area (KM) 2: ");
scanf("%f", &area2);
limpar_buffer();

printf("Digite o PIB (em milhoes) 2: ");
scanf("%f", &pib2);
limpar_buffer();

printf("Digite os pontos turisticos 2: ");
scanf("%d", &pontos_turisticos2);
// Não precisa limpar o buffer no final do programa

// Para verificar se a leitura funcionou
printf("\n--- Dados Carta 1 ---\n");
printf("Estado: %c, Cidade: %s, Codigo: %s\n", estado1, nome_cidade1, cod_carta1);

printf("\n--- Dados Carta 2 ---\n");
printf("Estado: %c, Cidade: %s, Codigo: %s\n", estado2, nome_cidade2, cod_carta2);

//foi necessário fazer essa correção, pois o meu vscode estava com um problema de rconhecer o "enter" como um caractere/váriavel se não engano, então após fazer algumas instalações para não apresentar mais o erro, deu certo a leitura no terminal.

return 0;
}
