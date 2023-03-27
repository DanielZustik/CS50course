#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{

    string text = get_string("input your text:");

    int l_text = strlen(text);

    float w_count = 1;
    float s_count = 0;
    float l_count = 0;
    for (int i = 0; i < l_text; i++) {
        if (text[i] == ' ')
            w_count++;
        if (text[i] == '.'|| text[i] == '?' || text[i] == '!')
            s_count++;
        if (text[i] >= 65 && text[i] <= 90)
            l_count++;
        else if (text[i] >= 97 && text[i] <= 122)
            l_count++;
    }

    float L = l_count / w_count * 100;
    float S = s_count / w_count * 100;

    //printf("letters %i\n words %i\n senteces %i\n", l_count, w_count, s_count);

    int x = round(0.0588 * L - 0.296 * S - 15.8);

    if (x <= 16)
        printf("Grade: %i\n", x);
    else if (x < 1)
        printf("Before grade 1\n");
    else
        printf("Grade: 16+\n");

return 0;
}