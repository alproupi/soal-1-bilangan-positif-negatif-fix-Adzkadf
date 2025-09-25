#include <stdio.h>
#include <stdlib.h>

int main (){

int angka ;

printf( " Masukan angka : ");
scanf ("%d",&angka );

if ( angka < 0){
    printf( "bilangan negatif \n");
}else if (angka > 0 ){
    printf(" bilangan positif\n");
}else{
    printf("biangan adalah Nol\n");
}



    return 0;
}