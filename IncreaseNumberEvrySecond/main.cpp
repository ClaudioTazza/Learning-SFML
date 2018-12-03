#include <iostream>
using std::cout;
using std::endl;
#include <SFML/System.hpp>
using sf::Thread;
using sf::milliseconds;
using sf::sleep;


void increaseNum(int * num){

  while(1){
    sleep( milliseconds(1000) );
    *num += 5;
  }
}


int main(){
  int num = 0;
  Thread thread(&increaseNum, &num);

  thread.launch();

  while(1)
    cout << "Il numero e' attualmente uguale a " << num << endl;

  return 0;
}
