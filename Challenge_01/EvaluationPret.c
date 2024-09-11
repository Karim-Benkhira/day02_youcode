#include <stdio.h>
#include <stdlib.h>

void __input(int *revenu, int *score_credit, int *duree_pret)
{
    printf("Entrez le revenu annuel en euros :");
    scanf("%d",revenu);
    printf("Entrez le score de crédit sur 1000 : ");
    scanf("%d",score_credit);
    printf("Entrez la durée du prêt en années : ");
    scanf("%d",duree_pret);
}

int check_eligibility(int revenu,int score_credit,int duree_pret)
{
    if(revenu >= 30000 && score_credit >= 700 && duree_pret <= 10)
        return 1;
    else if(revenu >=  30000 && score_credit >= 650 && duree_pret <= 15)
        return 2;
    else
        return 0;
}

void print_resulta(int eligibilite)
{
    if(eligibilite == 1)
        printf("Éligible pour le prêt.\n");
    else if(eligibilite == 2)
        printf("Éligible pour le prêt avec conditions.\n");
    else
        printf("Non éligible pour le prêt.\n");
}

int main()
{
    int revenu,score_credit,duree_pret;
    __input(&revenu,&score_credit,&duree_pret);
    print_resulta(check_eligibility(revenu,score_credit,duree_pret));
}