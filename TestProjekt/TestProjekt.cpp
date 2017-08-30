#include "stdafx.h"

#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>

class GameWindow : public Gosu::Window
{
public:
	GameWindow()
		: Window(640, 480)
	{
		set_caption("Gosu Tutorial Game mit Git");
	}

	double x = 0;
	double y = 0;

	void update() override
	{
		x = input().mouse_x();
		y = input().mouse_y();
	}

	void draw() override
	{
		Gosu::Graphics::draw_triangle(
			x, y, Gosu::Color::RED,
			200, 100, Gosu::Color::GREEN,
			200, 400, Gosu::Color::BLUE,
			0.0
		);
	}
};

int main()
{
	GameWindow window;
	window.show();
}