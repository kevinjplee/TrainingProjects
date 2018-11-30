#ifndef ROGUEPLAYER_HPP__
#define ROGUEPLAYER_HPP__

#include <array>

namespace Rogue{
class Player{
	private:
		std::array<int,2> m_position; //position on the map
	public:
		Player();
		~Player() = default;
	
		const std::array<int,2> position();
};
}


#endif