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
        if (candidate[i].name == name)
        {
            candidate[i].votes =+
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
    int pomocna = 0;

    for (int j = 0; j < candidate_count - 1; j++)
    {
         //zresetování nejmensi z posledni nalezene nejmensi na nvou possibly nejmensi zacatek loopu
        for (int i = j; i < candidate_count  - 1; i++) //posun +1
        {
            if (candidates[j] < neco[i + 1]) //aktivování a srovnání, i jako pomocna nejprve je nula, nicméně při dalším průchodu vnější smyčkou bude 1 atd.
            {
                // nejmensi = nejmensi; //zaznamenání
            }
            else
            {
                j = i + 1; //zaznamenání
            }
        }
        pomocna = neco[nejmensi];
        neco[nejmensi] = neco[j]; //přepis nejmensi na zacatek resp. doleva
        neco[j] = pomocna; //zápis hodnoty zleva do pozice doprava na místo nejmenší
        nejmensi = nejmensi + 1;
        j = nejmensi - 1;
    }
    printf("pozice 0.: %i\npozice 1.: %i\npozice 2.: %i\npozice 3.: %i\npozice 4.: %i\n", neco[0], neco[1], neco[2], neco[3], neco[4]);
    return 0;
}