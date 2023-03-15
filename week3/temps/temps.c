// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    avg_temp hlp[NUM_CITIES];
    int max_temp = temps[0].temp;
    int max_i;


    for (int j = 0; j < NUM_CITIES; j++)
    {
        for (int i = j; i < NUM_CITIES; i++)
        {
            if (temps[i].temp > max_temp)
            {
                max_i = i;
                max_temp = temps[i].temp;
            }
        }
        max_temp = temps[j + 1].temp; //zresetování max temp na hodnotu dalšího prvku v pořadí ze začátku
        hlp[j] = temps[j];
        temps[j] = temps[max_i];
        printf("%s, %i" temps[j].city, temps[j].temp);
        temps[max_i] = hlp[j];
    }
}
