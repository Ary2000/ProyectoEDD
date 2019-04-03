/*
#include "Graph.h"
#include "Simple_window.h"

int main()
{
	using namespace Graph_lib;

	Point tl(150, 150);
	Simple_window win(tl, 600, 400, "My window");
	win.wait_for_button();
}
*/
#include "Simple_window.h"
#include "Graph.h"
using namespace Graph_lib;

typedef struct Nodo* enlace;
struct Nodo {
	int v;
	enlace sig;
	Nodo(int v) : v{ v }, sig{ nullptr } {}
	Nodo(int v, enlace sig) : v{ v }, sig{ sig } {}
};

void crearTablero()
{
	//II get access to our window l ibrary
		//II get access to our graphics library fac i l it ies
	//using namespace Graph_lib;// II our graphics faci l ities are in Graph_l ib
	
	Point tl(100, 100); // I to become top left corner of window
	int dimx = 750;
	int dimy = 450;
	Simple_window win(tl, dimx, dimy, "Jerki"); //II make a simple window

	
	//Ejes
	int ejex1 = 20;
	int ejey1 = 20;
	int ejex2 = 120;
	int ejey2 = 120;
	int ejex3 = 220;
	int ejey3 = 220;
	int ejex4 = 320;
	int ejey4 = 320;
	int ejex5 = 420;
	int ejex6 = 520;
	int ejex7 = 620;
	int lado = 80;
	
	//Cuadrado 1x1
	Graph_lib::Rectangle cuad1x1(Point(ejex1, ejey1), lado, lado);
	cuad1x1.set_style(Line_style(Line_style::dash, 2));
	cuad1x1.set_color(Color::black);
	win.attach(cuad1x1);

	//Cuadrado 2x1
	Graph_lib::Rectangle cuad2x1(Point(ejex2, ejey1), lado, lado);
	cuad2x1.set_style(Line_style(Line_style::dash, 2));
	cuad2x1.set_color(Color::black);
	win.attach(cuad2x1);

	//Cuadrado 3x1
	Graph_lib::Rectangle cuad3x1(Point(ejex3, ejey1), lado, lado);
	cuad3x1.set_style(Line_style(Line_style::dash, 2));
	cuad3x1.set_color(Color::black);
	win.attach(cuad3x1);

	//Cuadrado 4x1
	Graph_lib::Rectangle cuad4x1(Point(ejex4, ejey1), lado, lado);
	cuad4x1.set_style(Line_style(Line_style::dash, 2));
	cuad4x1.set_color(Color::black);
	win.attach(cuad4x1);

	//Cuadrado 5x1
	Graph_lib::Rectangle cuad5x1(Point(ejex5, ejey1), lado, lado);
	cuad5x1.set_style(Line_style(Line_style::dash, 2));
	cuad5x1.set_color(Color::black);
	win.attach(cuad5x1);

	//Cuadrado 6x1
	Graph_lib::Rectangle cuad6x1(Point(ejex6, ejey1), lado, lado);
	cuad6x1.set_style(Line_style(Line_style::dash, 2));
	cuad6x1.set_color(Color::black);
	win.attach(cuad6x1);

	//Cuadrado 7x1
	Graph_lib::Rectangle cuad7x1(Point(ejex7, ejey1), lado, lado);
	cuad7x1.set_style(Line_style(Line_style::dash, 2));
	cuad7x1.set_color(Color::black);
	win.attach(cuad7x1);

	//Cuadrado 1x2
	Graph_lib::Rectangle cuad1x2(Point(ejex1, ejey2), lado, lado);
	cuad1x2.set_style(Line_style(Line_style::dash, 2));
	cuad1x2.set_color(Color::black);
	win.attach(cuad1x2);

	//Cuadrado 2x2
	Graph_lib::Rectangle cuad2x2(Point(ejex2, ejey2), lado, lado);
	cuad2x2.set_style(Line_style(Line_style::dash, 2));
	cuad2x2.set_color(Color::black);
	win.attach(cuad2x2);

	//Cuadrado 3x2
	Graph_lib::Rectangle cuad3x2(Point(ejex3, ejey2), lado, lado);
	cuad3x2.set_style(Line_style(Line_style::dash, 2));
	cuad3x2.set_color(Color::black);
	win.attach(cuad3x2);

	//Cuadrado 4x2
	Graph_lib::Rectangle cuad4x2(Point(ejex4, ejey2), lado, lado);
	cuad4x2.set_style(Line_style(Line_style::dash, 2));
	cuad4x2.set_color(Color::black);
	win.attach(cuad4x2);

	//Cuadrado 5x2
	Graph_lib::Rectangle cuad5x2(Point(ejex5, ejey2), lado, lado);
	cuad5x2.set_style(Line_style(Line_style::dash, 2));
	cuad5x2.set_color(Color::black);
	win.attach(cuad5x2);

	//Cuadrado 6x2
	Graph_lib::Rectangle cuad6x2(Point(ejex6, ejey2), lado, lado);
	cuad6x2.set_style(Line_style(Line_style::dash, 2));
	cuad6x2.set_color(Color::black);
	win.attach(cuad6x2);

	//Cuadrado 7x2
	Graph_lib::Rectangle cuad7x2(Point(ejex7, ejey2), lado, lado);
	cuad7x2.set_style(Line_style(Line_style::dash, 2));
	cuad7x2.set_color(Color::black);
	win.attach(cuad7x2);

	//Cuadrado 1x3
	Graph_lib::Rectangle cuad1x3(Point(ejex1, ejey3), lado, lado);
	cuad1x3.set_style(Line_style(Line_style::dash, 2));
	cuad1x3.set_color(Color::black);
	win.attach(cuad1x3);

	//Cuadrado 2x3
	Graph_lib::Rectangle cuad2x3(Point(ejex2, ejey3), lado, lado);
	cuad2x3.set_style(Line_style(Line_style::dash, 2));
	cuad2x3.set_color(Color::black);
	win.attach(cuad2x3);

	//Cuadrado 3x3
	Graph_lib::Rectangle cuad3x3(Point(ejex3, ejey3), lado, lado);
	cuad3x3.set_style(Line_style(Line_style::dash, 2));
	cuad3x3.set_color(Color::black);
	win.attach(cuad3x3);

	//Cuadrado 4x3
	Graph_lib::Rectangle cuad4x3(Point(ejex4, ejey3), lado, lado);
	cuad4x3.set_style(Line_style(Line_style::dash, 2));
	cuad4x3.set_color(Color::black);
	win.attach(cuad4x3);

	//Cuadrado 5x3
	Graph_lib::Rectangle cuad5x3(Point(ejex5, ejey3), lado, lado);
	cuad5x3.set_style(Line_style(Line_style::dash, 2));
	cuad5x3.set_color(Color::black);
	win.attach(cuad5x3);

	//Cuadrado 6x3
	Graph_lib::Rectangle cuad6x3(Point(ejex6, ejey3), lado, lado);
	cuad6x3.set_style(Line_style(Line_style::dash, 2));
	cuad6x3.set_color(Color::black);
	win.attach(cuad6x3);

	//Cuadrado 7x3
	Graph_lib::Rectangle cuad7x3(Point(ejex7, ejey3), lado, lado);
	cuad7x3.set_style(Line_style(Line_style::dash, 2));
	cuad7x3.set_color(Color::black);
	win.attach(cuad7x3);

	//Cuadrado 1x4
	Graph_lib::Rectangle cuad1x4(Point(ejex1, ejey4), lado, lado);
	cuad1x4.set_style(Line_style(Line_style::dash, 2));
	cuad1x4.set_color(Color::black);
	win.attach(cuad1x4);

	//Cuadrado 2x4
	Graph_lib::Rectangle cuad2x4(Point(ejex2, ejey4), lado, lado);
	cuad2x4.set_style(Line_style(Line_style::dash, 2));
	cuad2x4.set_color(Color::black);
	win.attach(cuad2x4);

	//Cuadrado 3x4
	Graph_lib::Rectangle cuad3x4(Point(ejex3, ejey4), lado, lado);
	cuad3x4.set_style(Line_style(Line_style::dash, 2));
	cuad3x4.set_color(Color::black);
	win.attach(cuad3x4);

	//Cuadrado 4x4
	Graph_lib::Rectangle cuad4x4(Point(ejex4, ejey4), lado, lado);
	cuad4x4.set_style(Line_style(Line_style::dash, 2));
	cuad4x4.set_color(Color::black);
	win.attach(cuad4x4);

	//Cuadrado 5x4
	Graph_lib::Rectangle cuad5x4(Point(ejex5, ejey4), lado, lado);
	cuad5x4.set_style(Line_style(Line_style::dash, 2));
	cuad5x4.set_color(Color::black);
	win.attach(cuad5x4);

	//Cuadrado 6x3
	Graph_lib::Rectangle cuad6x4(Point(ejex6, ejey4), lado, lado);
	cuad6x4.set_style(Line_style(Line_style::dash, 2));
	cuad6x4.set_color(Color::black);
	win.attach(cuad6x4);

	//Cuadrado 7x4
	Graph_lib::Rectangle cuad7x4(Point(ejex7, ejey4), lado, lado);
	cuad7x4.set_style(Line_style(Line_style::dash, 2));
	cuad7x4.set_color(Color::black);
	win.attach(cuad7x4);

	win.wait_for_button();

	//II make a shape(a polygonl
		//II add a point
		//II add another point
		//II add a third point
		//II adjust properties of poly
		//II connect poly to the window
		//II give mntrol ro the display engine
}

int main() {
	crearTablero();
}