#pragma once
#include "Shape.h"
#include <iostream>

class Rectangulo:public Shape{

	public:
		Rectangulo() {
			std::cout << "Se ha creado el rectangulo" << std::endl;
			std::cout << "" << std::endl;
		}
		~Rectangulo() {
			std::cout << "Se destruye el rectangulo" << std::endl;
		}

		void draw() {
			for (int i = 0; i < this->lado/2; i++) {

				for (int i = 0; i < this->lado; i++)
					std::cout << " * ";
				std::cout << "" << std::endl;

			}
		}


};

