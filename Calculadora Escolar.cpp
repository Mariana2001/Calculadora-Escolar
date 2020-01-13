#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
   float p2,p1,tra,media;

   
   printf("trabalho de laboratorio: \n");
   scanf("%f",&tra);  
   printf("Avaliacao 1: \n");
   scanf("%f",&p1);  
   printf("Avaliacao 2: \n");
   scanf("%f",&p2);  
  
  media= (tra*2+p1*3+p2*5)/10;
  
   if (media >=3 && media<=4.9)
    {
   	 
	 printf("aluno esta de exame %.2f \n",media);
    }
	 
     if( media <= 2.9)
    {

   	printf("aluno está reprovado: %.2f \n",media);
   
    }
     else if (media>=5)
    {
     printf("aluno está aprovado: %.2f \n",media);	
    }
   
   
   
   	return 0;
   
}
	
	
	
	
	

