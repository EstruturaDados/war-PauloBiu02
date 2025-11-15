#define NUM_TERRITORIOS 5
#define TAM_NOME 50
#define TAM_COR 20

typedef struct {
    char nome[50];
    char corExercito[20];
    int numeroTropas;
} Territorio;

void cadastrarTerritorios(Territorio territorios[]) {
    for (int i = 0; i < NUM_TERRITORIOS; i++) {
        printf("\n--- Territorio %d ---\n", i + 1);
        
        printf("Nome do territorio: ");
        scanf("%49s", territorios[i].nome);
        
        printf("Cor do exercito: ");
        scanf("%19s", territorios[i].corExercito);
        
        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
    }
}

void exibirMapa(Territorio territorios[]) {
    printf("\n=== MAPA ATUAL ===\n");
    for (int i = 0; i < NUM_TERRITORIOS; i++) {
        printf("Territorio %d: %s | Cor: %s | Tropas: %d\n", 
               i + 1, 
               territorios[i].nome, 
               territorios[i].corExercito, 
               territorios[i].numeroTropas);
    }
}

int main() {
    Territorio territorios[NUM_TERRITORIOS];
    
    printf("=== CADASTRO DE TERRITORIOS ===\n");
    cadastrarTerritorios(territorios);
    exibirMapa(territorios);
    
    return 0;
}
