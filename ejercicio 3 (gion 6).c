#include <stdio.h>
#include <stdlib.h>
int main ()
{
     int mes ;
     int a;
printf("Introduca el número del mes : ");
scanf("%d",&mes);
printf("Introdusca el año ");
scanf("%d",&a);

  switch (mes)
 
    {
    case 1:
    puts(" 30 días");
    break;
    case 2:
    if(a%4==0 and a%100!=0 or a%400==0)
    {
    printf("29 días ");
    }
    else
    {
    printf("28 días ");
    }

    break;
    case 3:
    puts("31 días ");
    break;
    case 4:
    puts("30 días ");
    break;
    case 5:
    puts(" 31 días ");
    break;
    case 6:
    puts(" 30 días ");
    break;
    case 7:
    puts("31 días ");
    break;
    case 8:
    puts("30 días ");
    break;
    case 9:
    puts("31 dias");
    break;
    case 10:
    puts("30 días ");
    break;
    case 11:
    puts(" 31 días ");
    break;
    case 12:
    puts(" 30 días ");
    break;
    default :
    puts("Error");
    
   
    }
 
        
}