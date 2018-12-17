#include "Tile.hpp"
#include <iostream>

namespace Tower{
	Tile::Tile():m_symbol(' '){
		}
	
	void Tile::print(){
		  std::cout<<m_symbol;
	  }
	
	void Tile::set(char input){
		  m_symbol = input;
	  }
}