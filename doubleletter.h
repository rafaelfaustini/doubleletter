#include <stdio.h>
#include <string.h>

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