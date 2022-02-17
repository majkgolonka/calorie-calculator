#include <stdio.h>
#include <stdlib.h>

#define Food 5

int main()
{
    int kalorie[Food] = {0};
    int l, razem, liczba;

    printf("Enter calorie daily limit : ");
    scanf("%i", &liczba);

    razem = 0;

    puts("*** Calorie calculator***");

    for(l=0;l<Food;l++)
    {
       printf("Enter the amount of calories in your : %d meal \n", l+1);
       scanf("%d", &kalorie[l]);
       razem = razem + kalorie[l];
    }

    puts("-------------------------------------------------");
    printf("Total number of calories for today: %d calories\n", razem);
    printf("calories left: %d\n ", liczba-razem);

    if(liczba-razem>=0)
    {
        printf("Great job, keep it up\n");
    }
    else if(liczba-razem<0)
    {
        printf("Next time try to keep a better eye on your calories\n");
    }
    return 0;
}
