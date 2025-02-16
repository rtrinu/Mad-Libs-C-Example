#include <stdio.h>

int main(void) {

    char color[20];
    char noun[20];
    char fname[20];
    char lname[20];
    printf("Please enter a color\n");
    scanf("%s", color);
    printf("Please enter a noun\n");
    scanf("%s", noun);
    printf("Please enter a name\n");
    scanf("%s%s", fname,lname);

    printf("Roses are %s\n", color);
    printf("Violets are blue\n");
    printf("I love %s %s\n",fname,lname);

    return 0;
}