#include "Graph.h"
#include "Simple_window.h"

typedef struct Nodo* enlace;
struct Nodo {
	int v;
	enlace sig;
	Nodo(int v) : v{ v }, sig{ nullptr } {}
	Nodo(int v, enlace sig) : v{ v }, sig{ sig }{}
};

int main()
{
	using namespace Graph_lib;

	Point tl(150, 150);
	Simple_window win(tl, 750, 450, "My window");

	win.wait_for_button();
}