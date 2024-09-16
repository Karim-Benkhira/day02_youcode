#include <stdio.h>

int déterminerlesJoursDeCongeRestant(int jours_accordes,int jours_utilises,int statut)
{
    int jours_restants;

    if(statut == 1)
        jours_restants = jours_accordes - jours_utilises;
    else if(statut == 0)
        jours_restants = (jours_accordes / 2) - jours_utilises;

    if(jours_utilises > jours_accordes)
        printf("Alerte : Les jours utilises depassent les jours accordes!\n");

    return jours_restants;
}

int main()
{
    int jours_accordes,jours_utilises,statut;

    printf("Entrez  jours de conges accordes :");
    scanf("%d",&jours_accordes);

    printf("Entrez jours de conges utilises : ");
    scanf("%d",&jours_utilises);

    printf("Entrez le statut de l'employe (0 pour temps partiel, 1 pour temps plein) :");
    scanf("%d",&statut);

    int jours_restants = déterminerlesJoursDeCongeRestant(jours_accordes,jours_utilises,statut);

    printf("Les jours de conges restants : %d\n",jours_restants);

    return 0;
}