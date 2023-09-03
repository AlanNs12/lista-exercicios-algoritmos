#include <stdio.h>

int main(){
    int total_dias, mes, ano, dia;

    scanf("%d", &total_dias);

    ano = total_dias / 365;
    total_dias %= 365;
    mes = (total_dias % 365) / 30;
    dia = total_dias % 30;

    

    printf("%d ano(s)\n%d mes(es)\n%d dias(s)", ano, mes, dia);
    return 0;
}