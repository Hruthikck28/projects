#include<iostream>
#include<vector>
#include"classHangman.cpp"
using namespace std;
int main()
{
    string codeword="charan";
    string answer="______";
    int misses=0;
    vector<char> incorrect;
    bool guess= false;
    char letter;
    hangman h1;
    h1.intro();
    while(answer!=codeword && misses < 7)
  {
    h1.display_misses(misses);
    h1.display_status(incorrect, answer);

    cout<<"\n\nPlease enter your guess: ";
    cin>>letter;

    for(int i = 0; i<codeword.length(); i++)
    {
      if(letter==codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }
    if(guess)
    {
      cout<<"\nCorrect!\n";
    }
    else
    {
      cout<<"\nIncorrect! Another portion of the person has been drawn.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  h1.end_game(answer, codeword);
    return 0;
}