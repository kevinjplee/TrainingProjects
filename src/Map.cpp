#include "Map.hpp"

namespace Rogue{
	Map::Map(){
		for(auto& y: m_map){
			y.fill(' ');
		}
	}
	
}