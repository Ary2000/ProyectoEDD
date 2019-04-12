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
#include "GUI.h"
#include <cstdio>
#include <stdlib.h>


using namespace Graph_lib;
using namespace std;

typedef struct Nodo* enlace;
struct Nodo {
	int v;
	enlace sig;
	Nodo(int v) : v{ v }, sig{ nullptr } {}
	Nodo(int v, enlace sig) : v{ v }, sig{ sig } {}
};

enlace a;
enlace b;
enlace c;
enlace d;
enlace e;
enlace f;
enlace g;
enlace h;
enlace i;
enlace j;
enlace k;
enlace l;
enlace m;
enlace n;
enlace o;
enlace p;
enlace q;
enlace r;
enlace s;
enlace t;
enlace u;
enlace v;
enlace w;
enlace x;
enlace y;
enlace z;

class Instruccion {
public:
	enlace variable1;
	enlace variable2;
	int instruccion;
	Instruccion(enlace var1, enlace var2) {
		variable1 = var1;
		variable2 = var2;

	}
};

enlace& revisarVariable(String variable) {
	while (true) {
		if (variable == "a") {
			return a;
		}
		else if (variable == "b") {
			return b;
		}
		else if (variable == "c") {
			return c;
		}
		else if (variable == "d") {
			return d;
		}
		else if (variable == "e") {
			return e;
		}
		else if (variable == "f") {
			return f;
		}
		else if (variable == "g") {
			return g;
		}
		else if (variable == "h") {
			return h;
		}
		else if (variable == "i") {
			return i;
		}
		else if (variable == "j") {
			return j;
		}
		else if (variable == "k") {
			return k;
		}
		else if (variable == "l") {
			return l;
		}
		else if (variable == "m") {
			return m;
		}
		else if (variable == "n") {
			return n;
		}
		else if (variable == "o") {
			return o;
		}
		else if (variable == "p") {
			return p;
		}
		else if (variable == "q") {
			return q;
		}
		else if (variable == "r") {
			return r;
		}
		else if (variable == "s") {
			return s;
		}
		else if (variable == "t") {
			return t;
		}
		else if (variable == "u") {
			return u;
		}
		else if (variable == "v") {
			return v;
		}
		else if (variable == "w") {
			return w;
		}
		else if (variable == "x") {
			return x;
		}
		else if (variable == "y") {
			return y;
		}
		else if (variable == "z") {
			return z;
		}
		else {
			cout << "\nPor favor inserter solo una variable" << endl;
		}
	}
}

void darleVariable(enlace &nodo) {
	while (true) {
		cout << "\n1.new Nodo(int)\n2.new Nodo(_)\n3. Variable = 0 \n4. Variable->sig\n5. Variable->v\n6.Variable = nuevaVariable\n7.nuevaVariable = Variable \nElija tipo" << endl;
		int seleccion;
		cin >> seleccion;
		if (seleccion == 1) {
			cout << "\nInserte un entero; " << endl;
			int valor;
			cin >> valor;
			nodo = new Nodo(valor);
		}
		else if (seleccion == 2) {
			int valor = rand() % 99 + 1;
			nodo = new Nodo(valor);
		}
		else if (seleccion == 3) {
			nodo->v = NULL;
			nodo->sig == nullptr;
		}
		else if (seleccion == 4) {
			nodo = nodo->sig;
		}
		else if (seleccion == 5) {
			cout << "\nInserte un entero; " << endl;
			int valor;
			cin >> valor;
			nodo->v = valor;
		}
		else if (seleccion == 6) {
			cout << "\Inserte la variable que quiere que sea igual: ";
			String var;
			cin >> var;
			enlace& vari = revisarVariable(var);
			nodo = vari;

		}
		else if (seleccion == 7) {
			cout << "\Inserte la variable que quiere que sea igual: ";
			String var;
			cin >> var;
			enlace& vari = revisarVariable(var);
			vari = nodo;
		}
		else if (seleccion == 0) {
			break;
		}
	}
}

void entraEnlace(enlace &nodo) {
	cout << "\n1. Usar variable->sig\n2. variable = new Nodo(int)\n3. variable = new Nodo(_)\n4. Variable = 0\nElija la instruccion: ";
	int seleccion;
	cin >> seleccion;
	if (seleccion == 1) {
		entraEnlace(nodo->sig);
	}
	else if (seleccion == 2) {
		cout << "\nDarle un entero: ";
		int variable;
		cin >> variable;
		nodo = new Nodo(variable);
	}
	else if (seleccion == 3) {
		int variable = rand() % 99 + 1;
		nodo = new Nodo(variable);
	}
	else if (seleccion == 4) {
		if (!nodo) {
			cout << "\nLa variable esta limpia" << endl;
		}
		else {
			nodo->v = NULL;
			nodo->sig = nullptr;
		}
	}
}

void referencia() {
	while (true) {
		cout << "\nEscriba la variable que usted desea usar: ";
		String input;
		cin >> input;
		enlace& variable = revisarVariable(input);
		entraEnlace(variable);
	}
}

void wh() {
	cout << "\nEscriba la variable que se va a usar como la verificacion de while: ";
	String input;
	cin >> input;
	enlace& variable = revisarVariable(input);
	while (true) {
		cout << "Seleccionar si quiere usar su siguiente(Y/N): ";
		String seleccion;
		cin >> seleccion;
		if (seleccion == "Y") {
			variable = variable->sig;
		}
		else {
			break;
		}
	}



}

int main() {
	while (true) {
		cout << "\n1.Variable\n2.while\n3.repeat\n4.HeapBack\n0.Salir\nInserte la instruccion: ";
		int input;
		cin >> input;
		if (input == 1) {
			referencia();
		}
		else if (input == 2) {
			wh();
		}
		else if (input == 0) {
			break;
		}
	}
}




