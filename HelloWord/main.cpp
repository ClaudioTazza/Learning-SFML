#include <SFML/Graphics.hpp>
using sf::RenderWindow; 
using sf::VideoMode;
using sf::CircleShape;
using sf::Color;
using sf::Event;


int main(){
  RenderWindow window(VideoMode(200, 200), "Hello World");  
  CircleShape shape(100.f);
  shape.setFillColor(Color::Red);

  while(window.isOpen()){

    Event event;
    while(window.pollEvent(event)){
      if(event.type == Event::Closed)
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;

}

