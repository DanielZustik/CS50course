#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates


int main(void)
{

    candidate candidates[5];

    candidates[0].name = "Pepa";
    candidates[1].name = "Karel";
    candidates[2].name = "Honza";
    candidates[3].name = "Mirek";
    candidates[4].name = "";

    candidates[0].votes = 1;
    candidates[1].votes = 2;
    candidates[2].votes = 3;
    candidates[3].votes = 4;
    candidates[4].votes = 0;

    // Number of candidates
    int candidate_count = 5;

    int lwst = 0;
    for (int j = 0; j < candidate_count - 1; j++) //swapne nejmenšího s akutálně nařadě od leva nejmenší po doprava největší
    {

        for (int i = 0; i < candidate_count - 1; i ++) //nalezne dalšího nejmenšího
        {
            if (candidates[lwst].votes > candidates[i + 1].votes)
            {

            }
            else
            {
                lwst = i + 1;
            }
        }
        candidates[j] = candidates[4];
        candidates[j] = candidates[lwst];
        candidates[lwst] = candidates[4];
        lwst =+
    }
    return 0;

}