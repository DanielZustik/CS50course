#include <cs50.h>
#include <stdio.h>

int main(void)
{

    string text = get_string("input your text:");

    int l_text = strlen(text);

    int w_count;
    int s_count;
    for (int i = 0; i < l_text; i++) {
        if (text[i] == " ")
            w_count++;
        if (text[i] == '.'|| text[i] == '?' || text[i] == '!')
            s_count++;
    }

    int c_count = l_text - w_count - s_count;

    int L = 

    int index = 0.0588 *
}