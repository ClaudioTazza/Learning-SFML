#include <SFML/Graphics.hpp>
using sf::RenderWindow; 
using sf::VideoMode;
using sf::CircleShape;
using sf::Color;
using sf::Event;
using sf::Text;
using sf::Font;

int main(){
  RenderWindow window(VideoMode(200, 200), "Hello World"); //Set window dimensions and title

  Font MyFont;
  MyFont.loadFromFile("Inconsolata-Regular.ttf");

  Text text;
  text.setFont(MyFont);                                     //Set the font to the text
  text.setString("Hello world");                            //Set the string in text
  text.setCharacterSize(24);                                //Set the size of the text 
  text.setFillColor(Color::Black);                          //Set the color of the text


  while(window.isOpen()){
    Event event;
    
    while(window.pollEvent(event)){
      if(event.type == Event::Closed)
        window.close();
    }

    window.clear(Color::White);

    window.draw(text);

    window.display();
  }

  return 0;

}

