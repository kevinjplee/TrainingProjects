#ifndef TOWERPLAYER_HPP__
#define TOWERPLAYER_HPP__

namespace Tower{
class Player{
	private:
	  int m_x, m_y;
	  char m_symbol;
	public:
	  Player();
	  ~Player() = default;
	
	//vector of right keyset, compare every keyset and return true if it's right, if any of them are false, return false
	  char keycheck();
	  void move();
};
}


#endif