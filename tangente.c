#include<stdio.h>
int ftangente (){
float tangente,angulo,radianes;
printf("/n Inserta el valor del aungulo != 90  en grados " );
scanf( "%f ",&angulo );
if (angulo!=90){
radiantes=angulo*PI/180;
tangente=tan(radianes );
printf("El valor de la tangente es  %f rad ",radianes );


}else {

printf("/n No existe la tangente de 90 " );
}






return 0;
}
