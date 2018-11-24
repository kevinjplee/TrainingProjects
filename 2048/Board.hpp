#ifndef TZFWBOARDCLASS_HPP
#define TZFWBOARDCLASS_HPP

#include <array>

namespace TZFW{
class Board{
	private:
		std::array<std::array<int,4>,4> m_board;
	public:
		Board();
		
};
}
#endif