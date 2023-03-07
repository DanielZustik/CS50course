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

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }
    printf("%s", argv[1]);
    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].name == name)
        {
            candidates[i].votes = candidates[i].votes + 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int nejmensi = 0;
    candidate pomocna[1];

    for (int j = 0; j < candidate_count - 1; j++)
    {
         //zresetování nejmensi z posledni nalezene nejmensi na nvou possibly nejmensi zacatek loopu
        for (int i = j; i < candidate_count  - 1; i++) //posun +1
        {
            if (candidates[j].votes < candidates[i + 1].votes) //aktivování a srovnání, i jako pomocna nejprve je nula, nicméně při dalším průchodu vnější smyčkou bude 1 atd.
            {
                // nejmensi = nejmensi; //zaznamenání
            }
            else
            {
                j = i + 1; //zaznamenání
            }
        }
        pomocna[0] = candidates[nejmensi];
        candidates[nejmensi] = candidates[j]; //přepis nejmensi na zacatek resp. doleva
        candidates[j] = pomocna[0]; //zápis hodnoty zleva do pozice doprava na místo nejmenší
        nejmensi = nejmensi + 1;
        j = nejmensi - 1;
    }
    printf("winner: %s", candidates[candidate_count - 1].name);
    return;
}