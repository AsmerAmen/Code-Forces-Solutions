#include <iostream>
#include <string>

#define get_rotations(f, s)	( ((f-s)+26)%26 < ((s-f)+26)%26 ) ? ((f-s)+26)%26 : ((s-f)+26)%26

using namespace std;

int main() {
	string line;
	int number;
	getline(cin, line);
	char *characters = (char*)line.c_str();
	
	int sum = 0;
	sum += get_rotations('a', characters[0]);
	for(int i=0; i<line.length()-1; i++){
		sum += get_rotations(characters[i], characters[i+1]);
	}

	cout<<sum<<endl;
	
	return 0;
}
