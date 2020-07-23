#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   string s = get_string("Text : ");    // getting user input
   printf("Your text : %s\n", s);

   int count = strlen(s);               // letters
   int letters = 0;

   for (int i = 0; i < count; i++) // je passe sur tout le contenu
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

   printf("%i letter(s)\n", letters);


}

int count_letters(string s)
{
    
 int letters = 0;
 int count = strlen(s); 

   for (int i = 0; i < count; i++) // je passe sur tout le contenu
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

