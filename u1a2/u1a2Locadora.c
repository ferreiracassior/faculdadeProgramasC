/*  
    Até então, você já construiu um algoritmo capaz de receber como entradas a idade do cliente 
e a classificação indicativa do filme que ele pretende locar e, logo após, mostrar na tela um dos 
possíveis resultados: “Este filme não é indicado para sua faixa etária” ou “Este filme é indicado para sua faixa etária”. 
    Agora é hora de tirar essa ideia do papel e colocar para funcionar em um computador. Contudo, você ainda não dispõe de 
todos os conhecimentos necessários para implementar essa solução na linguagem C.
Por isso, seu chefe lhe passou outra tarefa. Ele quer que seu programa seja capaz de ler a idade e o nome do cliente, 
bem como a classificação do filme que ele deseja locar. Posteriormente, seu programa deve imprimir todas essas informações na tela, 
conforme o padrão a seguir:

    Cliente: José das Couves
    Idade: 18 anos
    Classificação do filme: 12 anos

    Seu chefe, que também é analista de sistemas, informou que você deve utilizar os conceitos de struct, variáveis e 
constantes para resolver esse problema.
*/

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
