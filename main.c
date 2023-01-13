#include <stdio.h>
#include <locale.h>

  float entradadedados()
 {
  float nota;
  do {
    printf("Digite a nota do aluno(a):\n");
    scanf("%f",&nota); 
    if (nota<0 || nota>10)
    {
      printf("Digite somente notas maiores ou iguais a zero e menores que 10!\n");
    }
  }
  while (nota<0 || nota>10);
  return (nota);
}
int main(){
 float n1, n2, n3, n4, media;
 n1= entradadedados();
 n2= entradadedados();
 n3= entradadedados();
 n4= entradadedados();
 media=(n1+n2+n3+n4)/4;
 if (media>=6)
 {
   printf("O aluno foi aprovado com média %2.f!\n", media);
 } 
 else 
 {
   printf("O aluno foi reprovado com média %2.f!\n", media);
 }
}