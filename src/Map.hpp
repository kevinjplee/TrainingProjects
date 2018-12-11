#ifndef TOWERMAP_HPP__
#define TOWERMAP_HPP__

namespace Tower{
	class Map{
		private:
		std::array<std::array<Block,50>,50> m_map;
		
		public:
		Map();
		bool check(int x, int y);
	};
}

#endif