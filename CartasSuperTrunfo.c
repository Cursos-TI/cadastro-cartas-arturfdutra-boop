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

printf (" o estado e: %c\n", estado);
printf (" o codigo e: %s\n", codigo);
printf (" a cidade e: %s\n", cidade1);
printf (" a populacao e:%d\n", populacao);
printf (" a area e: %f km²\n", area1);
printf (" os pontos turisticos e: %d\n", pontosturisticos);
printf (" o pib e: %f bilhões\n", pib1);

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

printf (" o estado e: %c\n", estado2);
printf (" o codigo e: %s\n", codigo2);
printf (" a cidade e: %s\n", cidade2);
printf (" a populacao e: %d\n", populacao2);
printf (" a area e: %f km²\n", area2);
printf (" os pontos turisticos e: %d\n", pontosturisticos2);
printf (" o pib e: %f bilhões\n", pib2);

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
  
 int comp_populacao;
 int comp_pib;
 int comp_pontos;
 int comp_densidade;
 int comp_superpoder; 

comp_populacao = populacao > populacao2;
comp_pib = pib_per_capita > pib_per_capita2;
comp_pontos = pontosturisticos > pontosturisticos2;
comp_densidade = densidade1 > densidade2;
comp_superpoder = superpoder2 > superpoder1;


   // lendo os codigos

 printf ("populacao > populacao2: %d\n", comp_populacao);
 printf ( "pib_per_capita > pib_per_capita2: %d\n", comp_pib);
 printf("pontosturisticos > pontosturisticos2: %d\n", comp_pontos);
 printf("densidade1 > densidade2: %d\n", comp_densidade);
 printf("superpoder2 > superpoder1: %d\n", comp_superpoder);
 
 if (populacao > populacao2) {
  printf("populacao venceu!.\n");

 }else{
  printf("populacao2 venceu!.\n");
 
}
 // menu interativo
int opcao, regras;



printf ("menu principal\n");
printf ("1. inciar o jogo\n");
printf (" 2. ver regras\n");
printf (" 3.fechar o jogo\n");
scanf ("%d", &opcao);
switch (opcao) {
  case 1:
  printf ("digite a populacao:\n");
  scanf ("%d", &populacao);
  printf ("digite a populacao2:\n");
  scanf ("%d", &populacao2);

  if ( populacao > populacao2) {
 printf (" populacao ganhou!\n");
  } else if (populacao2 > populacao) {
    printf ("populacao2 ganhou!\n");
  } else {
    printf (" empatou!\n");
  }
 printf ("digite os pontosturisticos:\n");
 scanf ("%d", &pontosturisticos);
 printf (" digite os pontosturisticos2:\n");
 scanf ("%d", &pontosturisticos2);
 if ( pontosturisticos > pontosturisticos2) {
  printf ("pontosturisticos ganhou!\n");
 } else if (pontosturisticos2 > pontosturisticos) {
  printf ("pontosturisticos2 ganhou!\n");
 } else {
  printf ("empatou!\n");
 }
 
  break;
 
 case 2:
printf ("explicando as regras\n");
printf (" digite a regra que você quer saber\n");
scanf ("%d", &regras);
switch (regras) {
  case 1:
  printf (" regra 1: vence o maior numero\n");
  break;
  case 2:
  printf ("regra 2: se  o numero for igual então é considerado empate\n");
  break;
default:
printf ("regra inexistente\n");
}
break;

  case 3: 
 printf (" fechar o jogo\n");
 break;

default:
printf ("Opção inválida, tente mais tarde\n");
}

 int resultado1, resultado2;
char primeiroatributo, segundoatributo;
 int ataque1,ataque2, defesa1, defesa2, recuo1, recuo2;
 ataque1= populacao;
 ataque2= populacao2;
 defesa1= area1;
 defesa2= area2;
 recuo1= pib1;
 recuo2= pib2;
 

 //inicio do jogo

 printf ("seja bem-vindo ao jogo!\n");
 printf ("escolha o primeiro atributo\n");
 printf ("A.ataque\n");
 printf ("D.defesa\n");
 printf ("R.recuo\n");

 printf ("escolha a comparação: ");
 scanf ("%c",&primeiroatributo);

 switch (primeiroatributo) 
 {
case 'A':
case 'a':
printf ("você escolheu a opção ataque!\n");
resultado1= populacao > populacao2 ? 1 : 0;
break;

case 'D':
case 'd':
printf ("você escolheu a opção defesa!\n");
resultado1= area1 > area2 ? 1 : 0;
break;

case 'R':
case 'r':
printf ("você escolheu a opção recuo!\n");
resultado1= pib1 > pib2 ? 1 : 0;
 break;
  
 default:
 printf ("opção inválida!\n");
 break;

}

printf ("escolha o segundo atributo\n");
printf ("atenção: você deve escolher um  atributo diferente do primeiro!\n");
printf ("A.ataque\n");
printf ("D.defesa\n");
printf ("R.recuo\n");

printf ("escolha a comparação:");
scanf ("%c", &segundoatributo);

if (primeiroatributo==segundoatributo) {
  printf ("você escolheu o mesmo atributo\n");
} else {
  switch (segundoatributo) {
  case 'A':
  case 'a':
  printf ("você escolheu a opção ataque!\n");
  resultado2= populacao > populacao2 ? 1 : 0;
  break;

  case 'D':
  case 'd':
  printf ("você escolheu a opção defesa!\n");
  resultado2= area1 > area2 ? 1 : 0;
  break;

  case 'R':
  case 'r':
  printf ("você escolheu a opção recuo!\n");
  resultado2= pib1 > pib2 ? 1 : 0;
  break;
 
  default:
 printf ("opção inválida!\n");
 break;
}
if (resultado1 && resultado2) {
  printf ("parabens, você ganhou!\n");
} else if (resultado1 != resultado2 ) {
printf ("empatou!\n");
} else {
  printf ("infelizmente, você perdeu!\n");
}

printf ("as duas cidades são: %s e %s\n", cidade1, cidade2);

return 0;
}
}


