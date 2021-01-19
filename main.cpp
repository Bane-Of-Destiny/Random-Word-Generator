#include <iostream>
#include <string>

#include <time.h> 
#include <stdlib.h>

using namespace std;
int main()
{
    
    char not_vowels[21] = 
    {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    
    int length_word = 0;
    int what_to_add = 0;
    
    int random_num = 0;
    
    string name;
    srand(time(0));
    
    cout << "Type in how long you want your word to be: ";
    cin >> length_word;
    
    for(int x = 0; x <= length_word; x++){
        
            what_to_add = 1+(rand() % 2);
            
            switch(what_to_add){
                
            case 1:
                
                random_num = 0;
                random_num = rand() % 21;
                
                name = name + not_vowels[random_num];
                
                break;
            
            case 2:
                
                random_num = 0;
                random_num = rand() % 5;
                
                name = name + vowels[random_num];
                
            break;
         
            default:
            
            cout << "Sorry, there was an error." << endl << endl;
            
        }

    
    
    
    }

    cout << "This is your word: " << name;
    return 0;

}
