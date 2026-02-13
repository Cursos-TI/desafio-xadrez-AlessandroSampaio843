#include <stdio.h>

// --- Funções Recursivas (Nível Mestre) ---

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo agora usa recursividade para o controle principal (conforme requisito)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // Implementação solicitada: Loops aninhados para o movimento diagonal
        for (int i = 0; i < 1; i++) { // Loop vertical
            printf("Cima\n");
            for (int j = 0; j < 1; j++) { // Loop horizontal
                printf("Direita\n");
            }
        }
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // Constantes de movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("### Desafio de Xadrez - Nivel Mestre ###\n\n");

    // 1. Movimentação da Torre (Recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // 2. Movimentação do Bispo (Recursiva + Loops Aninhados)
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);

    // 3. Movimentação da Rainha (Recursiva)
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // 4. Movimentação do Cavalo (Loops Complexos: 2 Cima, 1 Direita)
    printf("\nMovimento do Cavalo:\n");
    
    // Loop aninhado com múltiplas variáveis e controle de fluxo
    for (int i = 1, j = 1; i <= 3; i++) { 
        if (i <= 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop vertical
        }
        
        // Loop interno para o movimento horizontal
        while (j <= 1) {
            printf("Direita\n");
            j++;
            break; // Garante que a lógica de "L" termine aqui
        }
    }

    return 0;
}
