#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]);
    printf("%c%c%c%c%c (we didn't see the last byte [4])\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]);
    printf("%c%c%c%c%i (we see the last byte because is a integer)\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]);
}
