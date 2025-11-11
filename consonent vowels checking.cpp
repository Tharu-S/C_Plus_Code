#include <iostream>
#include <string>
using namespace std;

int main() {

    string word;
    int length;
    int vowels=0;
    int i;
    int sum=0;

    cout << "Enter the word: ";
    getline(cin,word);

    length=word.length();
    cout << "length:" << length  << endl;

    for( i=0; i<=length ; i++) {
            if(isalpha(word[i])) {
                    sum=sum+1;
                if(word[i]== 'a' || word[i]== 'e' || word[i]== 'i' || word[i]== 'o' || word[i]== 'u' || word[i]== 'A' || word[i]== 'E' || word[i]== 'I' || word[i]== 'O'|| word[i]== 'U')  {
                vowels=vowels+1;
                }
            }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonent: " << sum-vowels << endl;

    return 0;
}
