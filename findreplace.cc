//#pragma once
//Alec Martens
//1/22/2019
//CS2560 Homework 1

#include "stream.h"
//#include "pch.h"
#include "findreplace.h"
#include <iostream>
#include <string>
#include <fstream>
namespace AlecMartens {
	void Findreplace::find() {
		Stream s;
		target = s.gettarget();
		newTarget = s.getnewTarget();
		ins.open("file1.txt");
		while (!std::cin.eof()) {
			std::getline(std::cin, text);//gets the first line of text

			pos = text.find(target); //finds if text matches target
			if (pos < 1000) //find returns npos if not found
			{
				text.replace(pos, target.length(), newTarget);//position of the text to replace, length of the text to be replaced, text doing the replacing
			}
			std::cout << text << std::endl;
		}
		ins.close();
	}
}
