//============================================================================
// Name        : hello-world.cpp
// Author      : Robert
// Version     :
// Copyright   : © cpp-workshop
// Description : Hello World in C++
//============================================================================


#include <iostream>	// fuer std::cout, std::endl


int main()
{
	// Aufgaben sind mit "// Aufgabe" markiert

	// Wir sparen uns diesmal die Kommentare zum code,
	// da beim Debuggen beobachtet werden soll,
	// was geschieht.


	std::cout << "!!!Hello World!!!";
	std::cout << "Noch mehr Text\nUnd ein Zeilenumbruch";
	std::cout << "Ein wesentlicher sinnvollerer Zeilenumbruch:" << std::endl;
	std::cout << "Geschah soeben." << std::endl;


	int foo = 25;
	++foo;
	foo *= 2;
	foo = foo - 10;

	int bar;
	bar = foo;

	// Aufgabe 1: Vergleiche foo mit bar und gebe aus, ob sie gleich sind.

	bar = 0;

	// Aufgabe 1: Vergleiche foo mit bar (nochmal) und gebe aus, ob sie gleich sind.

	std::cout << "Wert von 'foo': " << foo << std::endl;
	std::cout << "Wert von 'bar': " << bar << std::endl;


	// Aufgabe 2: i-was mit cin? for? switch? mglw. ein kleiner taschenrechner?


	return 0;
}
