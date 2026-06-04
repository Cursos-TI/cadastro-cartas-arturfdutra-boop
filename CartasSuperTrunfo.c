#include <stdio.h>
int main () {
char estado;
char codigo [4]; 
char  cidade1 [20];
int populacao;
float area1;
int pontosturisticos; 
float pib1;

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
printf ("digite o pib em bilhões: \n");
scanf ("%f", &pib1);

// imprimir os dados

printf (" o estado e: %c", estado);
printf (" o codigo e: %s", codigo);
printf (" a cidade e: %s", cidade1);
printf (" a populacao e:%d", populacao);
printf (" a area e: %f km²", area1);
printf (" os pontos turisticos e: %d", pontosturisticos);
printf (" o pib e: %f bilhões", pib1);

char estado2;
char codigo2 [4];
char cidade2 [20];
int populacao2;
float area2;
int pontosturisticos2;
float pib2;

//ler os codigos

printf ("digite o estado: \n");
scanf ( "%c", &estado2);

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
printf ( "digite o pib em bilhões: \n");
scanf ( "%f", &pib2);

// imprimir os dados

printf (" o estado e: %c", estado2);
printf (" o codigo e: %s", codigo2);
printf (" a cidade e: %s", cidade2);
printf (" a populacao e: %d", populacao2);
printf (" a area e: %f km²", area2);
printf (" os pontos turisticos e: %d", pontosturisticos2);
printf (" o pib e: %f bilhões", pib2);

// calculo de densidade populacional e pib per capita

float densidade1, densidade2;

 densidade1 = populacao / area1;
 densidade2 = populacao2 / area2;

printf (" a densidade populacional cidade1 é: %.2f hab/km²\n", densidade1);
printf ( " a densidade populacional cidade2 é: %.2f hab/km²\n", densidade2);
 
 float pib_per_capita, pib_per_capita2;
 
 pib_per_capita =pib1 * 1000000000 / populacao;
 pib_per_capita2 =pib2 * 1000000000 / populacao2;

 printf (" o pib per capita cidade1 é: %.2f\n", pib_per_capita);
 printf (" o pib per capita cidade2 é: %.2f\n", pib_per_capita2);
  
  return 0;

  }