#pragma once
#include <iostream>
#include "Shape.h"

class Triangulo:public Shape{

    public:
        Triangulo() {
            std::cout << "" << std::endl;
            std::cout << "Se ha creado el triangulo" << std::endl;
            std::cout << "" << std::endl;
        }
        ~Triangulo() {
            std::cout << "Se destruye el triangulo" << std::endl;
        }


    void draw() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++)
                std::cout << " * ";
            std::cout << "" << std::endl;

        }
    }
};

