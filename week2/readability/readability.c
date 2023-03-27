#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{

    string text = get_string("input your text:");

    int l_text = strlen(text);

    int w_count = 0;
    int s_count = 0;
    for (int i = 0; i < l_text; i++) {
        if (text[i] == ' ')
            w_count++;
        if (text[i] == '.'|| text[i] == '?' || text[i] == '!')
            s_count++;
    }

    int c_count = l_text - w_count - s_count;

    float L = c_count / w_count * 100;
    float S = s_count / w_count * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    printf("%i\n", index);
}