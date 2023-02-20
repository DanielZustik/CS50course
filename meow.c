#include <stdio.h>
int main(void)
{

int i = 0;
while (i < 4)
{
    printf("Meow\n");
    i++;
}
for (i = 0; i < 4; i++) // i bez deklarace int, protoze bylo uz nahore
{
    printf("Meow!\n");
}
}
