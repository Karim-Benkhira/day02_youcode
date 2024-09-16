#include <stdio.h>

float CalculBounus(int recompense,float score)
{
    if(recompense == 1)
        score = score * 0.10;
    else if(recompense >= 2)
        score = score * 0.20;
    
    return score;
}

void __Performance(float score ,int anciennete)
{
    if(score >= 90 && anciennete >= 5)
        printf("Excellente\n");
    else if(score >= 75 && anciennete >= 3)
        printf("Bonne\n");
    else if(score >= 50 && anciennete < 3)
        printf("Satisfaisante\n");
    else
        printf("Insuffisante\n");
}

int main()
{
    float score;
    int anciennete,recompenses;

    printf("Entrez le score de performance (0-100)");
    scanf("%d",&score);

    printf("Entrez l'ancienneté en années : ");
    scanf("%d",&anciennete);

    printf("Entrez le nombre de récompenses (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d",&recompenses);

    score = CalculBounus(recompenses,score);

    __Performance(score,anciennete);

    return 0;
}