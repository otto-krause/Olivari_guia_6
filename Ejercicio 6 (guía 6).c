#include <stdio.h>
#include <stdlib.h>
int main ()
{
     int dia;
    int mes;
printf("Introduca el numero del mes : ");
scanf("%d",&mes);
printf("Introduca el día :");
scanf("%d",&dia);
  switch (mes)
  
    {
    case 1:
    if(dia<=19)
    {
    printf("capricornio");
    }
    else
    {
    printf("Acuario");
    }
    break;
    case 2:
    if(dia<=18)
    {
    printf("Acuario");
    }
    else
    {
    printf("Picis");
    }
    break;
    case 3:
    if(dia<=20)
    {
    printf("Picis");
    }
    else
    {
    printf("Aries");
    }
    break;
    case 4:
    if(dia<=19)
    {
    printf("Aries");
    }
    else
    {
    printf("Tauro");
    }
    break;
    case 5:
    if(dia<=21)
    {
    printf("Tauro");
    }
    else
    {
    printf("Geminis");
    }
    break;
    case 6:
    if(dia<=20)
    {
    printf("Geminis");
    }
    else
    {
    printf("Cancer");
    }
    break;
    case 7:
    if(dia<=22)
    {
    printf("Cancer");
    }
    else
    {
    printf("Leo");
    }
    break;
    case 8:
    if(dia<=22)
    {
    printf("Leo");
    }
    else
    {
    printf("Virgo");
    }
    break;
    case 9:
   if(dia<=22)
   {
    printf("Virgo");

     }
    else
    {
    printf("Libra");
    }
    break;
    case 10:
    if(dia<=22)
    {
    printf("Libra");
    }
    else
    {
    printf("Escorpio");
    }
    
    break;
    case 11:
    if(dia<=21)
    {
    printf("Escorpio");
    }
    else
    {
    printf("Sagitario");
    }
    break;
    case 12:
    if(dia<=21)
    {
    printf("Sagitario ");
    }
    else
    {
    printf("Capricornio");
    }
    break;
    default :
    puts("Error");
    
   
    }
 
        
}