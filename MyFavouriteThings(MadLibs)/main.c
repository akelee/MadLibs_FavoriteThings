#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pluralAnimal[20];
    char adjective [15];
    char color1[10];
    char pluralNoun[20];
    char pluralNoun2[20];

    printf("Enter a plural noun (animal): ");
    scanf("%s", pluralAnimal);

    printf("Enter an adjective: ");
    scanf("%s", adjective);

    printf("Enter a color: ");
    scanf("%s", color1);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun2);



    printf("Raindrops on roses and whiskers on %s.\n", pluralAnimal);
    printf("Bright copper kettles and %s woollen mittens.\n", adjective);
    printf("%s paper packages tied up with %s;\n", color1, pluralNoun);
    printf("Those are a few of my favorite %s!\n", pluralNoun2);
    return 0;
}
