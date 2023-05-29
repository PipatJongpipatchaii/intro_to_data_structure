#include <iostream>

using namespace std;

int main()
{
    cout << "Hi" << endl;
    string word = "Strong";
    auto new_Word = word;
    decltype(word) last_Word;
    last_Word = word;
    cout << new_Word << endl;
    cout << last_Word << endl;

    cout << "****Variable Test****" << endl;

    int x,y,z;
    x = y = z = 5;
    x += 1;
    cout << x << " " << y << " "<< z << endl;

    cout << "****Conditional Test****" << endl;

    bool condition = 9+3 >= 20;
    bool q = condition ? true:false;
    string result;
    if (q){
        result = "True";
    }else result = "False";
    cout << result << endl;

    cout << sizeof(result) <<endl ;

    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!\n";

    return 0;
}
