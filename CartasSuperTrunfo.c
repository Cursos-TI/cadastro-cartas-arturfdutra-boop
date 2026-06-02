#include <stdio.h>
int main () {
char estado;
char codigo [3]; 
char  cidade1 [20];
int populacao;
float area1;
int pontosturisticos; 
// ler os codigos 
printf ("digite o estado: \n");
scanf ( "%c", &estado);

printf("digite o codigo: \n");
scanf("%s", codigo);

printf("digite a cidade: \n");
scanf ("%s", cidade1);

printf ("digite a populacao: \n");
scanf ("%d", &populacao);

printf ( "digite a area em km²: \n");
scanf ("%f", &area1);

printf ("digite os pontos turisticos: \n");
scanf ("%d", &pontosturisticos);
// imprimir os dados
printf (" o estado e: %c", estado);
printf (" o codigo e: %s", codigo);
printf (" a cidade e: %s", cidade1);
printf (" a populacao e:%d", populacao);
printf (" a area e: %f km²", area1);
printf (" os pontos turisticos e: %d", pontosturisticos);

return 0;

char estado2;
char codigo2 [3];
char cidade2 [20];
int populacao2;
float area2;
int pontosturisticos2;
//ler os codigos

printf ("digite o estado: \n");
scanf ( "%c", &estado);

printf ( " digite o codigo: \n");
scanf ( "%s", codigo2);

printf ( "digite a cidade: \n");
scanf ( "%s", cidade2);

printf ("digite a populacao: \n");
scanf ( "%d", &populacao2);

printf ( "digite a area em km²: \n");
scanf ( "%f", &area2);

printf("digite os pontos turisticos: \n");
scanf ( "%d", &pontosturisticos2);
// imprimir os dados
printf (" o estado e: %c", estado2);
printf (" o codigo e: %s", codigo2);
printf (" a cidade e: %s", cidade2);
printf (" a populacao e: %d", populacao2);
printf (" a area e: %f km²", area2);
printf (" os pontos turisticos e: %d", pontosturisticos2);

return 0;
}