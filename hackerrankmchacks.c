#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int string_size(string sta) {
    int list = 0;
    int g = 0;
    int i = 0;
    int count = 0;
    int sizes = sta.length();
    for(i = 0, g = sizes-1; i < g; ++i, --g) {
        if(sta[i] != sta[g]) {
            count += abs(sta[i] - sta[g]);
        }
    }
    return count;
}

int main()
{
    int number;
    
    cin>>number;
    
    for(int i=0; i<number; i++)
   {
        string letter;
        cin>>letter;
        cout<<string_size(letter)<<"\n";
    }    
    
    return 0;
}