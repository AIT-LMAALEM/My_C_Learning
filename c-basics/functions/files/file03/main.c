#include <stdio.h>
#include <stdbool.h>


bool isEven(int n) {
    return n % 2 == 0;
}


void showMenu() {
    printf("\n=== Menu ===\n");
    printf("1. Verifier un nombre (pair/impair)\n");
    printf("2. Afficher les nombres de 1 a N\n");
    printf("3. Quitter\n");
    printf("Votre choix: ");
}

int main() {
    int choix, n;

    while (1) {
        showMenu();
        scanf("%d", &choix);

        if (choix == 1) {  // condition
            printf("Entrez un nombre: ");
            scanf("%d", &n);
            if (isEven(n)) {
                printf("%d est pair.\n", n);
            } else {
                printf("%d est impair.\n", n);
            }
        }
        else if (choix == 2) {  // condition
            printf("Entrez N: ");
            scanf("%d", &n);
            printf("Les nombres de 1 à %d:\n", n);
            for (int i = 1; i <= n; i++) { // loop
                printf("%d ", i);
            }
            printf("\n");
        }
        else if (choix == 3) {  // condition
            printf("Au revoir!\n");
            break;
        }
        else {
            printf("Choix invalide, essayez encore.\n");
        }
    }

    return 0;
}
