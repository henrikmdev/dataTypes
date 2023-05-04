#include <stdio.h>
#include <string.h>

int main(void) {
    int numberOfDogs, numberOfCats, sumOfAnimals;
    double myMoney;
    char firstName[10]; //"H e n r i k \0"
    printf("\n==================================\n");
    printf("What is the number of dogs?\n");
    scanf("%d", &numberOfDogs);
    printf("How much money do you have?\n");
    scanf("%lg", &myMoney);
    printf("What is your name\n");
    scanf("%s", firstName);
    //fgets(firstName, sizeof(firstName), stdin);
    //fgets(firstName, sizeof(firstName), stdin);
    numberOfCats = 3;
    sumOfAnimals = numberOfDogs+numberOfCats;
    printf("The number of dogs is %d\n", numberOfDogs);
    printf("The number of cats is %d\n", numberOfCats);
    printf("The number of animals is %d\n", sumOfAnimals);
    printf("I have this amount: $%lg\n", myMoney);
    printf("Your name is %s\n", firstName);
    return 0;
}