#include <stdio.h>
int main(void)
{
    int giorno1, giorno2, mese1, mese2, anno1, anno2;
    printf("Inserisci la prima data (GG MM AA): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);
    printf("Inserisci la secona data (GG MM AA): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);
    if(anno1 < anno2){
        printf("La seconda data è la più recente");}
    else if(anno1 > anno2){
        printf("La prima data è la più recente");}
    else if(anno1 == anno2 && mese1 < mese2){
        printf("La seconda data è la più recente");}
    else if(anno1 == anno2 && mese1 > mese2){
        printf("La prima data è la più recente");}
    else if(anno1 == anno2 && mese1 == mese2 && giorno1 < giorno2){
        printf("La seconda data è la più recente");}
    else if(anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2){
        printf("La prima data è la più recente");}
    return 0;
}
