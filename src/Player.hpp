#ifndef TOWERPLAYER_HPP__
#define TOWERPLAYER_HPP__

#include "Map.hpp"

namespace Tower{
class Player{
	private:
	  int m_x, m_y; //position
	  char m_symbol;
	  int attack;
	  
	
	  Map* m_map = nullptr;
	public:
	  Player(Map* map);
	  ~Player() = default;
	
	//vector of right keyset, compare every keyset and return true if it's right, if any of them are false, return false
	  char keycheck();
	  void move();
};
}


#endif