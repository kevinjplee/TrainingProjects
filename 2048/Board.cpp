#include "Board.hpp"

namespace TZFW{
	
	Board::Board(){
		for(auto &arrays : m_board){
			arrays.fill(0);
		}
	}
}