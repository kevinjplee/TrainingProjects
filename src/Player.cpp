#include "Player.hpp"

namespace Rogue{
	Player::Player(){
		m_position.fill(0);
	}
	
	std::array<int,2> Player::position() const{
		return m_position;
	}
	
	void Player::move(){
		char movement = keypress -> input();
		switch(movement){
			case 'w' :
				m_position[1]++;
			case 's' :
				m_position[1]--;
			case 'a' :
				m_position[0]--;
			case 'd' :
				m_position[0]++;
		}
	}
}