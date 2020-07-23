#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string s);
int count_words(string s);
int count_sentences(string s);


int main(void)
{
    string s = get_string("Text : ");       // Getting user input
    // printf("Your text : %s\n", s);

    float letters = count_letters(s);
    // printf("%i letter(s)\n", (int) letters);

    float words = count_words(s);
    // printf("%i word(s)\n", (int) words);
    float w_p100 = 100 / words;

    float sentences = count_sentences(s);
    // printf("%i sentence(s)\n", (int) sentences);
    float s_p100 = 100 / words;

    float lavg = letters * w_p100;
    float savg = sentences * s_p100;

    int index = 0.0588 * lavg - 0.296 * savg - 15.8;

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }


}


int count_letters(string s)                 // Letters
{
    int letters = 0;
    int count = strlen(s);

    for (int i = 0; i < count; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            letters += 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            letters += 1;
        }
        else
        {
            letters += 0;
        }
    }

    return letters;
}


int count_words(string s)                   // Words
{
    int words = 0;
    int space = 0;
    int count = strlen(s);

    for (int i = 0; i < count; i++ )
    {
        if ((int) s[i] == 32)
        {
            space += 1;
        }
        else
        {
           space += 0;
        }
    }

    words = space + 1 ;
    return words;
}


int count_sentences(string s)                       // Sentences
{
    int words = 0;
    int sentences = 0;
    int count = strlen(s);

    for (int i = 0; i < count; i++ )
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentences += 1;
        }
        else
        {
           sentences += 0;
        }
    }

    return sentences;
}