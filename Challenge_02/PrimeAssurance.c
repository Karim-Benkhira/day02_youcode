#include <stdio.h>

float CalculDePrimeAssuranceAuto(float prime_base,int age,int type_voiture,int accidents)
{
    if(age <  25)
        prime_base *= 1.5;
    else if(age > 65)
        prime_base *= 1.2;

    if(type_voiture == 1)
        prime_base *= 2;
    else if(type_voiture == 2)
        prime_base *= 1.2;
    else if(type_voiture == 3)
        prime_base *= 1.1;

    if(accidents > 1)
        prime_base *= 1.3;
    
    return prime_base;
}

int main()
{
    int age,type_voiture,accidents;
    float prime_base;

    printf("Entrez la prime de base :");
    scanf("%f",&prime_base);

    printf("Entrez l'âge du conducteur :");
    scanf("%d",&age);

    printf("Entrez le type de voiture (1-Sportive, 2-Utilitaire, 3-Familiale)");
    scanf("%d",&type_voiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d",&accidents);

    float resulta = CalculDePrimeAssuranceAuto(prime_base,age,type_voiture,accidents);

    printf("La prime finale d'assurance est : %.2f\n",resulta);

    return 0;
}