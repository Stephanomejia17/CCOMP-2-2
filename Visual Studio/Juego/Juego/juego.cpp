#include "juego.h"

juego::juego(int resolucion_x, int resolucion_y, std::string titulo) {
	ventana1 = new RenderWindow(VideoMode(resolucion_x, resolucion_y), titulo);

	ventana1->setFramerateLimit(fps);

	dibujar();
}

void juego::dibujar() {
	ventana1->clear();
	
	ventana1->display();
}

void juego::gameLoop() {
	while (ventana1->isOpen()) {
		dibujar();
	}
}