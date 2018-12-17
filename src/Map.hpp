#ifndef TOWERMAP_HPP__
#define TOWERMAP_HPP__

#include <array>

namespace Tower{
class Map{
	private:
		std::array<std::array<Tile,10>,10> g_map;
	public:
		void printmap();

};
}
#endif