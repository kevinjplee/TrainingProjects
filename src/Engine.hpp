#ifndef TowerEngine_hpp__
#define TowerEngine_hpp__

#include <array>

class Player{
	private:
	  int m_x, m_y;
	  char m_symbol;
	public:
	  Player();
	  ~Player() = default;
};

class Tile{
	private:
	  char m_symbol;
	public:
	  Tile();
	  ~Tile() = default;
	
	  void symbol();
};

std::array<std::array<Tile,50>,50> Map;




#endif