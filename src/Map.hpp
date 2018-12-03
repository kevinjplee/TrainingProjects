#ifndef ROGUEMAP_HPP__
#define ROGUEMAP_HPP__

#include <array>

namespace Rogue{
	class Map{
		private:
			std::array<std::array<char,10>,10> m_map;
		
		public:
			std::array<std::array<char,10>,10> & pmap = m_map;
		
		public:
			Map();
			~Map() = default;
			
	};
}

#endif