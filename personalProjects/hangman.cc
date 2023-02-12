#include <iostream>
using namespace std;
void twoPlayer(){
cout <<"Player 1 enter a word for player 2 to guess" << endl;
string word = "";
//grab user input from player 1
cin >> word;
int size = word.size();
for (int j = 0; j < 50; ++j){
  cout <<endl;

}
for( int i = 0; i < size; ++i){
    cout <<"_ ";
}


cout <<endl;
while(true){
  cout <<"Player 2 enter a letter to guess"<<endl;
  char c;
  cin >> c;

}
}

void onePlayer(){
cout <<"test1" << endl;

}


void startScreen(){
string inputUser = "";
while(true){
  //Print options to user
  cout << "Welcome to CPP Hangman!" <<endl << "Play Options:" << endl
  << "A: 2 player hangman" << endl << "B: Player vs CPU" << endl << "E: exit"<< endl;
  cin >> inputUser;
  if( inputUser == "A" || inputUser == "a"){
    twoPlayer();
  }

  else if ( inputUser == "B" || inputUser == "b"){
    onePlayer();
  }

  else if (inputUser == "E" || inputUser == "e"){
    exit(0);
    }
}
}









int main ()
{
  startScreen();
  return 0;
}
