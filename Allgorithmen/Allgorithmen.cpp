// Allgorithmen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#pragma once

#include <iostream>
#include "Wurzel.h"
#include "PrimzahlenBisN.h"
#include "GGT.h"
#include "Pi.h"
#include "Integral.h"
#include "Regression.h"
#include "DG.h"
#include "Gleichungssystem.h"
#include "Optimierung.h"


int main()
{
	///////////// Übung1 //////////////////////

	/*
	Wurzel wurzel = Wurzel();

	std::cout << "__";

    std::cout << wurzel.getWurzel(0.9,2); 
	std::cout << "__";
	*/

	/*
	PrimzahlenBisN primzahlen = PrimzahlenBisN();
	std::vector<int> allePrimzahlenBisN;
	allePrimzahlenBisN = primzahlen.getPrimzahlen(20);

	std::cout << "test";
	*/

/*
	GGT ggt = GGT();

	int test = ggt.getGGT(1002, 1026);

	std::cout << test;

	*/

	//////////////////Übung 2////////////////////////
/*
	Pi pi = Pi();

	pi.getPi();
	*/



	/////////////////Übung 3/////////////////////////////

	//Integral integral = Integral();

	//double result = integral.rechteckverfahren(0, 1.5, 4);

	//double result = integral.trapezverfahren(0, 1.5, 4);

	//double result = integral.simpsonverfahren(0, 2, 4);

	//std::cout << result;

	//std::cout << "test";

	//////////////////////Übung 4///////////////////////



	////////////////////////////////////////////////






	/////////////////////////Übung 5 ////////////////


	// DG dg = DG();

	//double eulerC = dg.eulerCauchy(4, 0, 1, 1, 2);

	//std::cout << eulerC;

	//double rung = dg.rungekutta4(4, 0, 1, 1, 2);

	//std::cout << rung;

	////////////////////////Übung 6 Gleichungssysteme ///////////////////

	/*
	std::vector<std::vector<double>> matrix = { {3,2,1}, {6,6,3}, {9,10,6} };
	std::vector<double> vector = { 2,3,5 };

	Gleichunssystem gl = Gleichunssystem();

	gl.setDreiecke(matrix, vector);
	gl.vorwärts();

	std::cout << "test";
	*/
	/*
	std::vector<std::vector<double>> matrix = { {3,1,0}, {1,3,1}, {0,1,3} };
	std::vector<double> vector = { 1,5,7 };

	Gleichunssystem gl = Gleichunssystem();

	std::vector<double> ergebnis = gl.jacobi(matrix, vector);
	std::cout << "test";
	*/

	//////////////////////Übung Optimierung /////////////////////

	double x = 2;
	double y = 2;
	double schrittweite = 0.3;
	std::vector<double> x0 = { 1,1 };

	Optimierung opt = Optimierung();

	opt.minf(x, y, x0, schrittweite);

}

