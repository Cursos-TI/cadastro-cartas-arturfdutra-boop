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
  
 // emplementação do super poder que é a soma da população, área, PIB, pib per capita 
 //e densidade populacional invertida para comparação e número de pontos turisticos

 float superpoder1, superpoder2;
 float densidade_invertida = area1 / populacao;
 superpoder1=(float)populacao + area1 + pib1 + pib_per_capita + densidade_invertida + (float)pontosturisticos;
 superpoder2= (float) populacao2 + area2+ pib2+ pib_per_capita2 + densidade_invertida + (float) pontosturisticos2;

 printf(" o superpoder é: %.2f\n", superpoder1);
 printf (" o superpoder é: %.2f\n",superpoder2);
 
 // comparações 
   float comparacao; 
   comparacao= populacao > populacao2;
   comparacao= pib_per_capita > pib_per_capita2;
   comparacao= pontosturisticos > pontosturisticos2;
   comparacao= populacao2 < populacao;
  comparacao= pib_per_capita2 < pib_per_capita;
   comparacao= pontosturisticos2 < pontosturisticos;
   comparacao= densidade1 > densidade2;
   comparacao= densidade2 < densidade1;
   comparacao= densidade1 == densidade2;
   comparacao= populacao == populacao2;
   comparacao= pib_per_capita2 == pib_per_capita;
   comparacao= pontosturisticos == pontosturisticos2;
   comparacao= superpoder1 == superpoder2;
   comparacao= superpoder2 > superpoder1;
   comparacao= superpoder1 < superpoder2;

   // lendo os codigos

 printf("populacao > populacao2: %f\n", comparacao);
 printf("pib_per_capita > pib_per_capita2: %f\n", comparacao);
 printf("pontosturisticos > pontosturisticos2: %f\n", comparacao);
 printf("populacao2 < populacao: %f\n", comparacao);
 printf("pib_per_capita2 < pib_per_capita: %f\n", comparacao);
 printf("pontosturisticos2 < pontosturisticos: %f\n", comparacao);
 printf("densidade1 > densidade2: %f\n", comparacao);
 printf("densidade2 < densidade1: %f\n", comparacao);
 printf("densidade1 == densidade2: %f\n", comparacao);
 printf("populacao == populacao2: %f\n", comparacao);
 printf("pib_per_capita2 == pib_per_capita: %f\n", comparacao);
 printf("pontosturisticos == pontosturisticos2: %f\n", comparacao);
 printf("superpoder1 == superpoder2: %f\n", comparacao);
 printf("superpoder2 > superpoder1: %f\n", comparacao);
 printf("superpoder1 < superpoder2: %f\n", comparacao);

 return 0;

  }