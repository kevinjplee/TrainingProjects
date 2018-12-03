#include "Keypress.hpp"
#include <iostream>

namespace Rogue{
	
	char Keypress::input(){
		while(true){
			if(!(std::cin >> m_key)){
				std::cin.clear();
				std::cin.ignore(1000,'\n');
			}
				return m_key;
		}
	}
}