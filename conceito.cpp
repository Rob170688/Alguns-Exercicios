#include <stdio.h>
 
int main() {
 int nota;
 //Insira a nota do Aluno.
 printf ("Digite a nota do aluno: ");
 scanf ("%i", &nota);
 //Dependendo da Nota do Aluno será mostrado seu Conceito.
 if (nota == 0)
  printf ("\nSeu Conceito foi E.");
 if (nota >= 1  && nota <= 35)
  printf ("\nSeu Conceito foi D.");
 if (nota >= 36 && nota <= 60)
  printf ("\nSeu Conceito foi C.");
 if (nota >= 61 && nota <=85)
  printf ("\nSeu Conceito foi B.");
 if (nota >= 86 && nota == 100)
  printf ("\nSeu Conceito foi A.");
  
}
