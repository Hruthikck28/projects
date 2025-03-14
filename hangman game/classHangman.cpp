#include<iostream>
#include<vector>
using namespace std;
class hangman{
    public:
    string codeword="charan";
    string answer="______";
    int misses=0;
    vector<char> incorrect;
    bool guess= false;
    char letter;

    void intro()
    {
        cout<<"===================="<<endl;
        cout<<"welcome to hangman game"<<endl;
        cout<<"===================="<<endl;
        cout<<"rules/instructions : guess the correct word to save your friend from being hanged"<<endl;

    }
    void display_misses(int misses)
    {
        if(misses==0)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==1)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==2)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<"  |   | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==3)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<" /|   | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==4)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<" /|\\  | \n";
           cout<<"      | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==5)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<" /|\\  | \n";
           cout<<" /    | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
        else if(misses==6)
        {
           cout<<"  +---+ \n";
           cout<<"  |   | \n";
           cout<<"  O   | \n";
           cout<<" /|\\  | \n";
           cout<<" / \\  | \n";
           cout<<"      | \n";
           cout<<" ========= \n";
        }
    }
    void display_status(vector<char> incorrect, string answer)
{
  cout<<"Incorrect Guesses: \n";

  for(int i = 0; i<incorrect.size(); i++)
  {
    cout<<incorrect[i]<<" ";
  }

  cout<<"\nCodeword:\n";

  for(int i = 0; i<answer.length(); i++)
  {
    cout<<answer[i]<<" ";
  }
}


void end_game(string answer, string codeword)
{
  if(answer==codeword)
  {
    cout<<"Hooray! You saved your friend from being hanged and earned a medal of honor!\n";
    cout<<"Congratulations!\n";
  }
  else
  {
    cout<<"On no! The man is hanged!\n";
  }
}
};
