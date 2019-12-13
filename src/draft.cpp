#include <iostream>
#include <string>
using namespace std;

int main(){
    char f ='e', s='z';
    char l;
    l = ( ( (f-s) +26 )%26);
    if(l>13){
        l = ( ( (s-f) +26 )%26);
    }

    // l = 'z' - 'a';
    // l+=26;
    // l%=26;
	// cout<<(int)l<<endl;
    // l = ('a' - 'z');
    // l+=26;
    // l%=26;
	cout<<(int)l<<endl;

	return 0;
}
