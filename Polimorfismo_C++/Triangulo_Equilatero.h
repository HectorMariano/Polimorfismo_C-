#pragma once
#include <iostream>
#include "Shape.h"

class Triangulo_Equilatero:public Shape{

    public:
        Triangulo_Equilatero() {
            std::cout << "" << std::endl;
            std::cout << "Se ha creado el triangulo equilatero" << std::endl;
            std::cout << "" << std::endl;
        }
        ~Triangulo_Equilatero() {
            std::cout << "Se destruye el triangulo" << std::endl;
        }

    void draw() {
        int espacio = 0;
        int limite = 9;

        for (int i = 0; i < 7; i++) {
            if (i == 6) {
                for (int j = 1; j < 14; j++) {

                    if (j > 2 && j < 10) std::cout << " *";
                    else {
                        std::cout << " ";
                    }
                }
            }
            else {
                for (int j = 0; j < 15; j++) {
                    int dibujo = limite - espacio;
                    int dibujo_aux = limite + espacio;

                    if (j == dibujo || j == dibujo_aux) {
                        std::cout << "*";
                    }
                    else {
                        std::cout << " ";
                    }

                }
            }

            espacio++;
            std::cout << "" << std::endl;
        }
    }
};

