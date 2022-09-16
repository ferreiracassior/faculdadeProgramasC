
#include <stdio.h>

#define clientNameSize 101 //ultimo caractere da string é inutil (indica que acabou a string)

struct client {
    int age;
    char name[clientNameSize];
    int movieAgeRating;
};

int main() {
    //const int clientNameSize = 101; usado define para constante
    struct client clienteLocadora;
    
    printf("\n Digite o nome completo do cliente: ");
    fflush(stdin);
    fgets(clienteLocadora.name, clientNameSize, stdin);

    printf("\n Digite a idade do cliente: ");
    scanf("%i", &clienteLocadora.age);

    printf("\n Digite a classificação indicativa do filme a ser alugado (0 = classificação livre): ");
    scanf("%i", &clienteLocadora.movieAgeRating);

    printf("\n Cliente: %s", clienteLocadora.name);
    printf("\n Idade: %i", clienteLocadora.age);
    printf("\n Classificação do filme: %i", clienteLocadora.movieAgeRating);
}
