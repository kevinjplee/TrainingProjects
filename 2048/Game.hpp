#ifndef TZFWBOARDCLASS_HPP
#define TZFWBOARDCLASS_HPP

#include <array>

namespace TZFW{
class Game{
	private:
		std::array<std::array<int,4>,4> m_board;
		
	public:
		Game();
		~Game();
	
		void create();
		//void detectkey();
		void keyinput();
		void moveup();
		void movedown();
		void moveleft();
		void moveright();
		void move(int row, int column, int mrow, int mcolumn); // moverow, moveclumn
		bool add(int row, int column, int nrow, int ncolumn); //nextrow, nextcolumn
		bool gridcheck(int row, int column);
};
}
#endif