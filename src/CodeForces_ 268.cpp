#include <iostream>
using namespace std;

int main() {
	int team_no;
	
	int guest = 0;
	cin>>team_no;
	int team_colors[team_no][2];
	
	for(int i=0; i<team_no; i++)
		for(int j=0; j<2; j++)
			cin>>team_colors[i][j];

	for(int i=0; i<team_no; i++)
		for(int j=0; j<team_no; j++)
			if(team_colors[i][0] == team_colors[j][1] && i!=j)
				guest++;
		
	cout<<guest;
		
	return 0;
}
