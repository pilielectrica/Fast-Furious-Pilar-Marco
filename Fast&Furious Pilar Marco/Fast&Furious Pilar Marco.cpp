#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>;
using namespace sf;
using namespace std;
int main()
{
	// Crear una ventana SFML
	sf::RenderWindow window(sf::VideoMode(800, 600), "Ejemplo de Movimiento Rectilíneo Uniforme");
	// Definir la posición inicial del objeto
	sf::Vector2f position(100.0f, 300.0f);
	// Definir la velocidad constante del objeto en el eje x (movimiento rectilíneo uniforme)
	float speed = 1;
	// Bucle principal del juego
	Sprite autito;
	Texture textureautito;
	textureautito.loadFromFile("autito.png");
	autito.setTexture(textureautito);
	autito.setScale(0.2, 0.2);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		// Actualizar la posición del objeto en función de la velocidad y el tiempo transcurrido
		float deltaTime = 1.0f / 60.0f; // Suponemos que el juego se está ejecutando a 60 FPS
		position.x += speed * deltaTime;
		bool maxspeed = false;

		
		if (position.x > 750)

		{   
			    position.x = 100;
		        position.x += speed * deltaTime;
				 if (speed >= 17) { maxspeed = true; }
		     if (maxspeed == false)
             {
			   
			      speed += 4;
				position.x += speed * deltaTime; cout << speed << endl;       

			 }
			
		     	
		}

			// Limpiar la ventana
			window.clear();
			// Dibujar el objeto en su posición actual
			autito.setPosition(position);
			window.draw(autito);
			// Mostrar todo en la ventana
			window.display();
		
	}
		return 0;
	}

