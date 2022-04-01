#pragma once
#include "Shape.h"
#include <iostream>

class Cuadrado_Completo:public Shape{

    public:
    Cuadrado_Completo() {

        std::cout << "" << std::endl;
        std::cout << "Se ha creado el cuadrado completo" << std::endl;
        std::cout << "" << std::endl;

    }

    ~Cuadrado_Completo() {
        std::cout << "Se destruye el cuadrado" << std::endl;
    }

    void draw() {
        for (int i = 0; i < 12; i++) {

            for (int i = 0; i < this->lado; i++)
                std::cout << " * ";
            std::cout << "" << std::endl;

        }
    }

};

