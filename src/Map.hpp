#ifndef TOWERMAP_HPP__
#define TOWERMAP_HPP__

#include <array>
#include "Tile.hpp"

#define MAPSIZE 10

namespace Tower{
class Map{
	private:
		std::array<std::array<Tile,MAPSIZE>,MAPSIZE> m_map;
	
	public:
		const std::array<std::array<Tile,MAPSIZE>,MAPSIZE>& p_map = m_map;
	
	
	public:
		void printmap();
		void setmap(int column, int row, char symbol);

};
}
#endif