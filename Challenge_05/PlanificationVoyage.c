#include <stdio.h>

void typeVoyage(float budjet)
{
    if(budjet >= 1000)
        printf("Voyage haut de gamme\n");
    else if(budjet >= 500 && budjet < 1000)
        printf("Voyage moyen\n");
    else
        printf("Voyage économique\n");

}

void recommanderDestination(float budget, int destination, int personnes)
{
    if(destination == 1 && budget >= 1000 && personnes > 2)
        printf("Destination recommandée: Plage\n");
    else if(destination == 2 && budget >= 500 && personnes <= 2)
        printf("Destination recommandée: Montagne\n");
    else if(destination == 3)
        printf("Destination recommandée: Ville\n");
    else
        printf("Pas de destination recommande ");
}

int main()
{
    float budget;
    int destination, personnes;

    printf("Entrez votre budget en euros :");
    scanf("%f",&budget);

    printf("Choisissez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d",&destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d",&personnes);

    typeVoyage(budget);

    recommanderDestination(budget,destination,personnes);

    return 0;
}