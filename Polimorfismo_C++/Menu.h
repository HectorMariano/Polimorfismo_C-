#pragma once
#include <iostream>
#include "Triangulo.h"
#include "Triangulo_Equilatero.h"
#include "Cuadrado_Completo.h"
#include "Cuadrado_Vacio.h"
#include "Rectangulo.h"
#include "Canva.h"

class Menu{

    public:
        int main() {
            Shape* s = nullptr;
            Canva c;
            int opcion = 0;

            std::cout << "Bienvenido al programa de impresion de formas" << std::endl;
            std::cout << "Opciones Disponibles: 1.Cuadrado \t2.Cuadrado Vacio" << std::endl;
            std::cout << "\t3.Triangulo \t4.Triangulo Equilatero \t5.Rectangulo" << std::endl;
            std::cout << "Seleccione la opcion a imprimir: ";
            std::cin >> opcion;

            if (opcion == 1) {
                s = new Cuadrado_Completo();
            }
            if (opcion == 2) {
                s = new Cuadrado_Vacio();
            }
            else if (opcion == 3) {
                s = new Triangulo();
            }
            else if (opcion == 4) {
                s = new Triangulo_Equilatero();
            }
            else if (opcion == 5) {
                s = new Rectangulo();
            }

            if (s != nullptr) {
                c.printShape(s);
                delete s;
            }

            std::cout << "" << std::endl;
            std::cout << "-----------------------" << std::endl;
            std::cout << "" << std::endl;
            return 1;
        }
};

