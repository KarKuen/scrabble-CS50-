#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);


    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }

    else if (score1 < score2)
    {
        printf("Player 2 wins!");
    }

    else
    {
        printf("Tie!");
    }
    // TODO: Print the winner
}

int compute_score(string word)
{
    int score = 0;

    for (int x = 0, y = strlen(word); x < y; x++)
    {
        word[x] = tolower(word[x]);
    }



    for (int i = 0, j = strlen(word); i < j; i++)
    {
        if ((word[i] >= 97) && (word[i] <= 122))
        {
            int s = word[i] - 97;
            score = score + POINTS[s];
        }

        else
        {
            score = score + 0;
        }
    }
    return score;
    // TODO: Compute and return score for string
}
