//#pragma once
//Alec Martens
//1/22/2019
//CS2560 Homework 1

//#include "pch.h"
#include "stream.h"
#include <iostream>
#include <string>
#include <fstream>
namespace AlecMartens {
	class Findreplace {
		public:
			void find();
		private:
			std::string text, target, newTarget;
			std::ifstream ins;
			std::size_t pos;
	};
}
