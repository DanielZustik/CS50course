#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

candidates[1].name = "Pepa";
candidates[2].name = "Karel";
candidates[3].name = "Honza";
candidates[4].name = "Mirek";
candidates[5].name = "David";

candidates[1].votes = 1;
candidates[2].votes = 2;
candidates[3].votes = 3;
candidates[4].votes = 4;
candidates[5].votes = 5;

// Number of candidates
int candidate_count = 5;

int main(void)
{
     for (int j = 0; j < candidate_count - 1; j++) //swapne nejmenšího s akutálně nařadě od leva nejmenší po doprava největší
    {
        int lwst = 0;
        for (int i = 0; i < candidate_count - 1; i ++) //nalezne dalšího nejmenšího
        {
            if (candidates[lwst].votes > candidates[i + 1].votes)
            else
            {
                lwst = i + 1;
            }
        }
        candidates[j] = candidates[8];
        candidates[j] = candidates[lwst];
        candidates[lwst] = candidates[8];
        lwst =+
    }
    return 0;
}