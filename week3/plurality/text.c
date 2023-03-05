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
candidate candidates[5];

 candidates[0].name = "Pepa";
string candidates[1].name = "Karel";
string candidates[2].name = "Honza";
string candidates[3].name = "Mirek";
string candidates[4].name = "David";

int candidates[0].votes = 1;
int candidates[1].votes = 2;
int candidates[2].votes = 3;
int candidates[3].votes = 4;
int candidates[4].votes = 5;

// Number of candidates
int candidate_count = 5;

int main(void)
{
    int lwst = 0;
     for (int j = 0; j < candidate_count - 1; j++) //swapne nejmenšího s akutálně nařadě od leva nejmenší po doprava největší
    {

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