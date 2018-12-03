#ifndef ROGUEGRAPHICS_HPP__
#define ROGUEGRAPHICS_HPP__

#include "Map.hpp"
#include "Player.hpp"

namespace Rogue{
class Graphics{
	private:
		const Map* cur_map = 0;
		const Player* cur_player = 0;
	public:
		Graphics(const Map* m_map, const Player* m_player);
	
		void render();
		void player();
};
}

#endif