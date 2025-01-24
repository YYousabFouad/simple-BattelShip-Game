//small Battelship game
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main(){
bool ships[6][6]={
  {0,1,1,0,0,0},
  {0,0,0,0,1,0},
  {0,1,0,0,0,0},
  {1,0,0,0,0,0},
  {0,0,0,0,0,1},
  {0,0,0,0,0,0}
};
int hits=0;
int numberOfTurns=0;
while(hits<6 && numberOfTurns<36){
int rows,columns;
/*Ask the player to choose a specific row
and specific column*/
cout<<"Choose a number for the row between 0 and 5 : ";
cin>>rows;
cout<<"Choose a number for the column between 0 and 5 : ";
cin>>columns;
if(ships[rows][columns]){
  cout<<"A good hit"<<"\n";
  ships[rows][columns]=0;
  hits++;
  cout<<6-hits<<" are lift"<<endl;
}
else{
  cout<<"Wrong hit bro"<<"\n";
  cout<<"Try again but harder"<<endl;
}
numberOfTurns++;
}
 if(numberOfTurns<36){
  cout<<"Victory!"<<"\n";
cout<<"A good game mate i know U can do it easily"<<"\n";
cout<<"You win in "<<numberOfTurns<<" turns"<<endl;
 }
 else{
  cout<<"Game over mate , U lose the game"<<"\n";
  cout<<"Try again later and harder"<<endl;
 }
     return 0;
}