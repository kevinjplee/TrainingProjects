#ifndef ROGUEPLAYER_HPP__
#define ROGUEPLAYER_HPP__

#include "Keypress.hpp"
#include <array>


namespace Rogue{
class Player{
	private:
		std::array<int,2> m_position;//position on the map
		Keypress* keypress;
	public:
		Player();
		~Player() = default;
	
		std::array<int,2> position() const;
		void move();
			

	
};
}


#endif