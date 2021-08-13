#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char cal;
printf("Introdusca su calificacion:   ");
  cal = getchar();
  switch (cal)
    {
    case 'A':
    puts("Exelente ");
    break;
    case 'B':
    puts("Buena");
    break;
    case 'C':
    puts("Regular");
    break;
    case 'D':
    puts("Suficiente ");
    break;
    case 'F':
    puts("No suficiente ");
    break;
    default :
    puts("Error");
    
   
    }
 
        
}