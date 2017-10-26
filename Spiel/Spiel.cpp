// Spiel.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <Gosu/Gosu.hpp> 
#include <Gosu/AutoLink.hpp>



class GameWindow : public Gosu::Window {
public:
	Gosu::Image bild;
	GameWindow()
		: Window(1500, 1080)
		,bild("COMBO-This-combination-of-file-picture.jpg")
	{
		set_caption("Kisia's Game");
			}
	double x = 0;
	double y = 0;
	int a = 0;
	double rot = 0.0;
	void update() override {
		/*x = input().mouse_x();
		y = input().mouse_y();*/
		if (input().down(Gosu::KB_RIGHT)) {
			if (x= 5000)
			{
				x = 500;
			}
			else if (x = x + 50);
		}
		else if (input().down(Gosu::KB_LEFT)) { x = (x - 50); }
		else if (input().down(Gosu::KB_DOWN)) { y = y + 50; }
		else if (input().down(Gosu::KB_UP)) { y -= 50; }
		a = (a + 1) % 600;

	}
	void draw() override {
		bild.draw_rot(x,y, 0.0, 
			rot, // Rotationswinkel in Grad    
			0.5, 0.5 // Position der "Mitte" relativ zu x, y
		); 
		
		//graphics().draw_line(x, y, Gosu::Color::BLUE, 200, 100, Gosu::Color::GREEN, 0.0);
		//Gosu::Graphics::draw_triangle(x, y, Gosu::Color::AQUA, a, 100, Gosu::Color::GREEN, 200, 400, Gosu::Color::BLUE, 0.0);
			//graphics().draw_quad(200, 300, Gosu::Color::GREEN, 100, 20, Gosu::Color::RED, 200, 100, Gosu::Color::RED, 300, 20, Gosu::Color::AQUA, 20.9);
	}
};

int main() {
	GameWindow window;
	window.show();
}