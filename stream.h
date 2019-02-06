//#pragma once
//Alec Martens
//1/22/2019
//CS2560 Homework 1
//#include "pch.h" //needed for visual studio compilation

#ifndef STREAM_H
#define STREAM_H
#include <iostream>
#include <string>
#include <fstream>
namespace AlecMartens {
	class Stream {
	public:
		std::string gettarget() {
			std::getline(std::cin, target);//variable to find
			return target;
		}
		std::string getnewTarget() {
			std::getline(std::cin, newTarget);//variable to change to
			return newTarget;
		}
	private:
		std::string target;
		std::string newTarget;
	};
}

#endif
