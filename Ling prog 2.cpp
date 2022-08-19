#include <iostream>
#include <stdlib.h>
#define numb 5

void mm(int vet[], int *max, int *min)
{   int y;
    *max=-99999,*min=99999;
    for(y=0;y<numb;y++)
    {
        if(vet[y]>*max){
        *max = vet[y];}
        if(vet[y]<*min){
            *min = vet[y];
        }
    }
}
int main(void)
{
    int vet[numb],x, min, max;
    for(x=0;x<numb;x++){
        printf("informe cinco numeros: ");
        scanf("%d", &vet[x]);
    }
    mm(vet,&max,&min);
        printf("O maior numero e %d \nO menor numero e %d", max, min);
    return 0;}
