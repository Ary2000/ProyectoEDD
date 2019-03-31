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
int main()
{
	//II get access to our window l ibrary
		//II get access to our graphics library fac i l it ies
	using namespace Graph_lib;// II our graphics faci l ities are in Graph_l ib
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
	Graph_lib::Polygon poly;
	poly.add(Point(ejex1, ejey1));
	poly.add(Point(ejex1 + lado, ejey1));
	poly.add(Point(ejex1 + lado, ejey1 + lado));
	poly.add(Point(ejex1, ejey1 + lado));
	poly.set_style(Line_style(Line_style::dash, 2));
	poly.set_color(Color::black);
	win.attach(poly);

	//Cuadrado 2x1
	Graph_lib::Polygon cuad2x1;
	cuad2x1.add(Point(ejex2, ejey1));
	cuad2x1.add(Point(ejex2 + lado, ejey1));
	cuad2x1.add(Point(ejex2 + lado, ejey1 + lado));
	cuad2x1.add(Point(ejex2, ejey1 + lado));
	cuad2x1.set_style(Line_style(Line_style::dash, 2));
	cuad2x1.set_color(Color::black);
	win.attach(cuad2x1);

	//Cuadrado 3x1
	Graph_lib::Polygon cuad3x1;
	cuad3x1.add(Point(ejex3, ejey1));
	cuad3x1.add(Point(ejex3 + lado, ejey1));
	cuad3x1.add(Point(ejex3 + lado, ejey1 + lado));
	cuad3x1.add(Point(ejex3, ejey1 + lado));
	cuad3x1.set_style(Line_style(Line_style::dash, 2));
	cuad3x1.set_color(Color::black);
	win.attach(cuad3x1);

	//Cuadrado 4x1
	Graph_lib::Polygon cuad4x1;
	cuad4x1.add(Point(ejex4, ejey1));
	cuad4x1.add(Point(ejex4 + lado, ejey1));
	cuad4x1.add(Point(ejex4 + lado, ejey1 + lado));
	cuad4x1.add(Point(ejex4, ejey1 + lado));
	cuad4x1.set_style(Line_style(Line_style::dash, 2));
	cuad4x1.set_color(Color::black);
	win.attach(cuad4x1);

	//Cuadrado 5x1
	Graph_lib::Polygon cuad5x1;
	cuad5x1.add(Point(ejex5, ejey1));
	cuad5x1.add(Point(ejex5 + lado, ejey1));
	cuad5x1.add(Point(ejex5 + lado, ejey1 + lado));
	cuad5x1.add(Point(ejex5, ejey1 + lado));
	cuad5x1.set_style(Line_style(Line_style::dash, 2));
	cuad5x1.set_color(Color::black);
	win.attach(cuad5x1);

	//Cuadrado 6x1
	Graph_lib::Polygon cuad6x1;
	cuad6x1.add(Point(ejex6, ejey1));
	cuad6x1.add(Point(ejex6 + lado, ejey1));
	cuad6x1.add(Point(ejex6 + lado, ejey1 + lado));
	cuad6x1.add(Point(ejex6, ejey1 + lado));
	cuad6x1.set_style(Line_style(Line_style::dash, 2));
	cuad6x1.set_color(Color::black);
	win.attach(cuad6x1);

	//Cuadrado 7x1
	Graph_lib::Polygon cuad7x1;
	cuad7x1.add(Point(ejex7, ejey1));
	cuad7x1.add(Point(ejex7 + lado, ejey1));
	cuad7x1.add(Point(ejex7 + lado, ejey1 + lado));
	cuad7x1.add(Point(ejex7, ejey1 + lado));
	cuad7x1.set_style(Line_style(Line_style::dash, 2));
	cuad7x1.set_color(Color::black);
	win.attach(cuad7x1);

	//Cuadrado 1x2
	Graph_lib::Polygon cuad2;
	cuad2.add(Point(ejex1, ejey2));
	cuad2.add(Point(ejex1, ejey2 + lado));
	cuad2.add(Point(ejex1 + lado, ejey2 + lado));
	cuad2.add(Point(ejex1 + lado, ejey2));
	cuad2.set_style(Line_style(Line_style::dash, 2));
	cuad2.set_color(Color::black);
	win.attach(cuad2);

	//Cuadrado 2x2
	Graph_lib::Polygon cuad2x2;
	cuad2x2.add(Point(ejex2, ejey2));
	cuad2x2.add(Point(ejex2, ejey2 + lado));
	cuad2x2.add(Point(ejex2 + lado, ejey2 + lado));
	cuad2x2.add(Point(ejex2 + lado, ejey2));
	cuad2x2.set_style(Line_style(Line_style::dash, 2));
	cuad2x2.set_color(Color::black);
	win.attach(cuad2x2);

	//Cuadrado 3x2
	Graph_lib::Polygon cuad3x2;
	cuad3x2.add(Point(ejex3, ejey2));
	cuad3x2.add(Point(ejex3, ejey2 + lado));
	cuad3x2.add(Point(ejex3 + lado, ejey2 + lado));
	cuad3x2.add(Point(ejex3 + lado, ejey2));
	cuad3x2.set_style(Line_style(Line_style::dash, 2));
	cuad3x2.set_color(Color::black);
	win.attach(cuad3x2);

	//Cuadrado 4x2
	Graph_lib::Polygon cuad4x2;
	cuad4x2.add(Point(ejex4, ejey2));
	cuad4x2.add(Point(ejex4, ejey2 + lado));
	cuad4x2.add(Point(ejex4 + lado, ejey2 + lado));
	cuad4x2.add(Point(ejex4 + lado, ejey2));
	cuad4x2.set_style(Line_style(Line_style::dash, 2));
	cuad4x2.set_color(Color::black);
	win.attach(cuad4x2);

	//Cuadrado 5x2
	Graph_lib::Polygon cuad5x2;
	cuad5x2.add(Point(ejex5, ejey2));
	cuad5x2.add(Point(ejex5, ejey2 + lado));
	cuad5x2.add(Point(ejex5 + lado, ejey2 + lado));
	cuad5x2.add(Point(ejex5 + lado, ejey2));
	cuad5x2.set_style(Line_style(Line_style::dash, 2));
	cuad5x2.set_color(Color::black);
	win.attach(cuad5x2);

	//Cuadrado 6x2
	Graph_lib::Polygon cuad6x2;
	cuad6x2.add(Point(ejex6, ejey2));
	cuad6x2.add(Point(ejex6, ejey2 + lado));
	cuad6x2.add(Point(ejex6 + lado, ejey2 + lado));
	cuad6x2.add(Point(ejex6 + lado, ejey2));
	cuad6x2.set_style(Line_style(Line_style::dash, 2));
	cuad6x2.set_color(Color::black);
	win.attach(cuad6x2);

	//Cuadrado 7x2
	Graph_lib::Polygon cuad7x2;
	cuad7x2.add(Point(ejex7, ejey2));
	cuad7x2.add(Point(ejex7, ejey2 + lado));
	cuad7x2.add(Point(ejex7 + lado, ejey2 + lado));
	cuad7x2.add(Point(ejex7 + lado, ejey2));
	cuad7x2.set_style(Line_style(Line_style::dash, 2));
	cuad7x2.set_color(Color::black);
	win.attach(cuad7x2);

	//Cuadrado 1x3
	Graph_lib::Polygon cuad3;
	cuad3.add(Point(ejex1, ejey3));
	cuad3.add(Point(ejex1, ejey3 + lado));
	cuad3.add(Point(ejex1 + lado, ejey3 + lado));
	cuad3.add(Point(ejey1 + lado, ejey3));
	cuad3.set_style(Line_style(Line_style::dash, 2));
	cuad3.set_color(Color::black);
	win.attach(cuad3);

	//Cuadrado 2x3
	Graph_lib::Polygon cuad2x3;
	cuad2x3.add(Point(ejex2, ejey3));
	cuad2x3.add(Point(ejex2, ejey3 + lado));
	cuad2x3.add(Point(ejex2 + lado, ejey3 + lado));
	cuad2x3.add(Point(ejey2 + lado, ejey3));
	cuad2x3.set_style(Line_style(Line_style::dash, 2));
	cuad2x3.set_color(Color::black);
	win.attach(cuad2x3);

	//Cuadrado 3x3
	Graph_lib::Polygon cuad3x3;
	cuad3x3.add(Point(ejex3, ejey3));
	cuad3x3.add(Point(ejex3, ejey3 + lado));
	cuad3x3.add(Point(ejex3 + lado, ejey3 + lado));
	cuad3x3.add(Point(ejey3 + lado, ejey3));
	cuad3x3.set_style(Line_style(Line_style::dash, 2));
	cuad3x3.set_color(Color::black);
	win.attach(cuad3x3);

	//Cuadrado 4x3
	Graph_lib::Polygon cuad4x3;
	cuad4x3.add(Point(ejex4, ejey3));
	cuad4x3.add(Point(ejex4, ejey3 + lado));
	cuad4x3.add(Point(ejex4 + lado, ejey3 + lado));
	cuad4x3.add(Point(ejey4 + lado, ejey3));
	cuad4x3.set_style(Line_style(Line_style::dash, 2));
	cuad4x3.set_color(Color::black);
	win.attach(cuad4x3);

	//Cuadrado 5x3
	Graph_lib::Polygon cuad5x3;
	cuad5x3.add(Point(ejex5, ejey3));
	cuad5x3.add(Point(ejex5, ejey3 + lado));
	cuad5x3.add(Point(ejex5 + lado, ejey3 + lado));
	cuad5x3.add(Point(ejex5 + lado, ejey3));
	cuad5x3.set_style(Line_style(Line_style::dash, 2));
	cuad5x3.set_color(Color::black);
	win.attach(cuad5x3);

	//Cuadrado 6x3
	Graph_lib::Polygon cuad6x3;
	cuad6x3.add(Point(ejex6, ejey3));
	cuad6x3.add(Point(ejex6, ejey3 + lado));
	cuad6x3.add(Point(ejex6 + lado, ejey3 + lado));
	cuad6x3.add(Point(ejex6 + lado, ejey3));
	cuad6x3.set_style(Line_style(Line_style::dash, 2));
	cuad6x3.set_color(Color::black);
	win.attach(cuad6x3);

	//Cuadrado 7x3
	Graph_lib::Polygon cuad7x3;
	cuad7x3.add(Point(ejex7, ejey3));
	cuad7x3.add(Point(ejex7, ejey3 + lado));
	cuad7x3.add(Point(ejex7 + lado, ejey3 + lado));
	cuad7x3.add(Point(ejex7 + lado, ejey3));
	cuad7x3.set_style(Line_style(Line_style::dash, 2));
	cuad7x3.set_color(Color::black);
	win.attach(cuad7x3);

	//Cuadrado 1x4
	Graph_lib::Polygon cuad4;
	cuad4.add(Point(ejex1, ejey4));
	cuad4.add(Point(ejex1, ejex4 + lado));
	cuad4.add(Point(ejex1 + lado, ejex4 + lado));
	cuad4.add(Point(ejex1 + lado, ejex4));
	cuad4.set_style(Line_style(Line_style::dash, 2));
	cuad4.set_color(Color::black);
	win.attach(cuad4);

	//Cuadrado 2x4
	Graph_lib::Polygon cuad2x4;
	cuad2x4.add(Point(ejex2, ejey4));
	cuad2x4.add(Point(ejex2, ejex4 + lado));
	cuad2x4.add(Point(ejex2 + lado, ejex4 + lado));
	cuad2x4.add(Point(ejex2 + lado, ejex4));
	cuad2x4.set_style(Line_style(Line_style::dash, 2));
	cuad2x4.set_color(Color::black);
	win.attach(cuad2x4);

	//Cuadrado 3x4
	Graph_lib::Polygon cuad3x4;
	cuad3x4.add(Point(ejex3, ejey4));
	cuad3x4.add(Point(ejex3, ejex4 + lado));
	cuad3x4.add(Point(ejex3 + lado, ejex4 + lado));
	cuad3x4.add(Point(ejex3 + lado, ejex4));
	cuad3x4.set_style(Line_style(Line_style::dash, 2));
	cuad3x4.set_color(Color::black);
	win.attach(cuad3x4);

	//Cuadrado 4x4
	Graph_lib::Polygon cuad4x4;
	cuad4x4.add(Point(ejex4, ejey4));
	cuad4x4.add(Point(ejex4, ejex4 + lado));
	cuad4x4.add(Point(ejex4 + lado, ejex4 + lado));
	cuad4x4.add(Point(ejex4 + lado, ejex4));
	cuad4x4.set_style(Line_style(Line_style::dash, 2));
	cuad4x4.set_color(Color::black);
	win.attach(cuad4x4);

	//Cuadrado 5x4
	Graph_lib::Polygon cuad5x4;
	cuad5x4.add(Point(ejex5, ejey4));
	cuad5x4.add(Point(ejex5, ejex4 + lado));
	cuad5x4.add(Point(ejex5 + lado, ejex4 + lado));
	cuad5x4.add(Point(ejex5 + lado, ejex4));
	cuad5x4.set_style(Line_style(Line_style::dash, 2));
	cuad5x4.set_color(Color::black);
	win.attach(cuad5x4);

	//Cuadrado 6x4
	Graph_lib::Polygon cuad6x4;
	cuad6x4.add(Point(ejex6, ejey4));
	cuad6x4.add(Point(ejex6, ejex4 + lado));
	cuad6x4.add(Point(ejex6 + lado, ejex4 + lado));
	cuad6x4.add(Point(ejex6 + lado, ejex4));
	cuad6x4.set_style(Line_style(Line_style::dash, 2));
	cuad6x4.set_color(Color::black);
	win.attach(cuad6x4);

	//Cuadrado 7x4
	Graph_lib::Polygon cuad7x4;
	cuad7x4.add(Point(ejex7, ejey4));
	cuad7x4.add(Point(ejex7, ejex4 + lado));
	cuad7x4.add(Point(ejex7 + lado, ejex4 + lado));
	cuad7x4.add(Point(ejex7 + lado, ejex4));
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