#include "Map.hpp"

#include <iostream>

namespace Tower{
	void Map::printmap(){
	std::cout << "\033[2J\033[1;1H";
	for(int column = 0; column < 10; column++){
		for(int row = 0; row < 10; row++){
			m_map[column][row].print();
		}
		std::cout<<'\n';
		}
	}
	
	void Map::setmap(int column, int row, char symbol){
		m_map[column][row].set(symbol);
	}
}