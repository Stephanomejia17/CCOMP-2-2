#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class juego {
public:
	juego(int resolucion_x, int resolucion_y, std::string titulo);
	void dibujar();
	void gameLoop();
private:

	RenderWindow* ventana1;
	int fps;


};