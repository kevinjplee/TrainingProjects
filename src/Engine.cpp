#include "Engine.hpp"
#include <iostream>

Player::Player():m_x(0),m_y(0),m_symbol('@'){
	
}

Tile::Tile():m_symbol(' '){
}

void Tile::symbol(){
		  std::cout<<m_symbol;
	  }