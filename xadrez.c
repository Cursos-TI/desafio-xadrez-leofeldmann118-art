#include <stdio.h>


int main() { 

    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // Função para movimentar o Bispo 
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Diagonal Superior Direita\n");
        moverBispo(casas - 1);

    // Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("Movimentação do Bispo:\n");
    moverBispo(MOV_BISPO);
        

    Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
        

    // Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    int j = 0;
    while (j < MOV_RAINHA) {
        printf("Esquerda\n");
        j++;
    }
       

    // Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo (em L):\n");
    
    // Loop externo para o deslocamento vertical (2 casas)
    for (int vertical = 1; vertical <= 2; vertical++) {
        printf("Cima\n");
        
        // Loop interno que executa apenas uma vez após o movimento vertical
        if (vertical == 2) {
            for (int horizontal = 1; horizontal <= 1; horizontal++) {
                printf("Esquerda\n");
            }
        }
    }
    return 0;
}
