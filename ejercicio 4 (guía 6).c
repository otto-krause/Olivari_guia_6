#include <stdio.h>
#include <stdlib.h>
int main ()
{
     int sem ;
    
printf("Introduca el número de la semana : ");
scanf("%d",&sem);

  switch (sem)
 {
    case 1:
    puts("Lunes");
    break;
    case 2:
    puts("Martes");
    break;
    case 3:
    puts("Miercoles ");
    break;
    case 4:
    puts("Jueves");
    break;
    case 5:
    puts(" Viernes ");
    break;
    case 6:
    puts(" Sabado ");
    break;
    case 7:
    puts(" Domingo  ");
    break;
    default:
    puts ("Error");
   
 
}       
}