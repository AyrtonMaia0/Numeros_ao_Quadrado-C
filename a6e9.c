#include <stdio.h>
#define A 10

int main(){
  int n[A];
  int i, soma[10];

//laço para add n° o vetor
  printf("Digite dez números:\n");
  for(i=0; i<10; i++){
    scanf("%i",&n[i]);
    soma[i] = (n[i]*n[i]);
  }
    printf("A soma dos quadrados implementados são:\n");
  for(i=0; i<10; i++){
    printf("%i°: %i\n",i+1 ,soma[i]);
  }
  return 0;
}