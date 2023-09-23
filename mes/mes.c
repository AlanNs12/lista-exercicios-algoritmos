#include <stdio.h>

int main(){

    int mes;

    scanf("%d", &mes);

    switch(mes){
        case 1:
        printf("January\n");
        break;
        case 2:
        printf("February\n");
        break;
        case 3:
        printf("March\n");
        break;
        case 4:
        printf("April\n");
        break;
        case 5:
        printf("May\n");
        break;
        case 6:
        printf("June\n");
        break;
        case 7:
        printf("July\n");
        break;
        case 8:
        printf("August\n");
        break;
        case 9:
        printf("Setember\n");
        break;
        case 10:
        printf("October\n");
        break;
        case 11:
        printf("November\n");
        break;
        case 12:
        printf("December\n");
        break;
        default:
        printf("Valor de mes invalido\n");
    }

    if(mes == 1){
        printf("January\n");
    }else if (mes == 2){
        printf("February\n");
    }else if (mes == 3){
        printf("March\n");
    }else if (mes == 4){
        printf("April\n");
    }else if (mes == 5){
        printf("May\n");
    }else if (mes == 6){
        printf("June\n");
    }else if (mes == 7){
        printf("July\n");
    }else if (mes == 8){
        printf("August\n");
    }else if (mes == 9){
        printf("September\n");
    }else if (mes == 10){
        printf("October\n");
    }else if (mes == 11){
        printf("November\n");
    }else if(mes == 12){
        printf("December\n");
    }
    
    return 0;
}