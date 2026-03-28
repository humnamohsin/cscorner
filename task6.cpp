#include <iostream>
#include <string>
using namespace std;

bool check(string word,char letter)
{
    bool isFound = false;
    for(int idx = 0 ; word[idx] != '\0' ; idx = idx + 1)
    {
        if(word[idx] == letter)
        {
            isFound = true;
            break;
        }
    }
    return isFound;
}
int main()
{
          string word;
          char letter;
            cout<<"Enter a word: ";
            cin>>word;
            cout<<"Enter a letter to search for: ";
            cin>>letter;
            if(check(word,letter))
                cout<<"Letter Found in the word";
            else
                cout<<"Letter Not Found in the word";
            return 0;

}