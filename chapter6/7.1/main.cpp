#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    int vowel_count=0;
    int consonant_count=0;
    int other = 0;
    int flag = 0;
    cout<<"Enter your words: "<<endl;
    cin.get(ch);
    while (ch != 'q' && ch != 'Q'){
        if (isalpha(ch) && flag == 0 ){
            if (ch == 'a' || ch == 'A' ||
                ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' ||
                ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U' ||
                ch == 'y' || ch == 'Y' ){
                    vowel_count++;
                    flag=1;
                } else if (flag == 0) {
                    consonant_count++;
                    flag=1;
                }
        } else if (isspace(ch)){
            flag  = 0;
        } else if (flag == 0) {
            other++;
            flag = 1;
        }
        cin.get(ch);
    }

    cout<<vowel_count<<" words which starts with vowel"<<endl;
    cout<<consonant_count<<" words which starts with consonant"<<endl;
    cout<<other<<"  others"<<endl;
    return 0;
}



