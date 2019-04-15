#include "doubleletter.h" 

int check(char texto[],char letter)
{
  int quant=0,i,l;
  
  l= strlen(texto);
    for(i=0;i<=l;i++)
  {
    if (((texto[i]==letter)&&(texto[i+1]==letter)))
       {
         
         quant++; 
       }
  }
  
  return quant;
  
}

int main()
{
char nome[100],l;
int numero; 
fflush(stdin);
printf("Qual a letra ? ");
scanf("%c",&l);
  
printf("Qual o texto ? ");
scanf("%s",nome);
  
numero = check(nome,l);
  
printf("O numero de caracteres dobrados %c eh %d\n ",l,numero);
}
