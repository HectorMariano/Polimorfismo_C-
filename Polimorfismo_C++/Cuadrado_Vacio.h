#pragma once
#include "Shape.h"
#include <iostream>

class Cuadrado_Vacio:public Shape{

public:
    Cuadrado_Vacio() {

        std::cout << "" << std::endl;
        std::cout << "Se ha creado el cuadrado completo" << std::endl;
        std::cout << "" << std::endl;

    }

    ~Cuadrado_Vacio() {
        std::cout << "Se destruye el cuadrado" << std::endl;
    }

    void draw() {
        for (int i = 0; i < 12; i++) {

            if (i == 0 || i == 11) {
                for (int i = 0; i < this->lado; i++) std::cout << " * ";
                std::cout << "   ";
            }
            else {
                std::cout << " * ";
            }

            if (i > 0 && i < 11) {
                for (int i = 0; i < this->lado; i++) {
                    if (i != 8) {
                        std::cout << "   ";
                    }
                    else {
                        std::cout << " * ";
                    }
                }
            }

            std::cout << "" << std::endl;
        }
    }
};

