#include "Entity.hpp"


namespace Tower{
	Entity::Entity():m_xb(0),m_yb(0), m_xa(0), m_ya(0){
		
	}
	
	void Entity::moveto(int x, int y){
		m_xb = m_xa;
		m_yb = m_ya;
		m_xa = m_xb + x;
		m_ya = m_yb + y;
	}
	
	bool Entity::movecheck(const Map* e_map){
		if (e_map -> check(m_xa, m_ya) == true){
			return true;
		}
		return false;
	}
	
	void keypress(){
		std::cin>>m_key;
		switch(m_key){
			case 'w':
				moveto(0, -1);
				
				
				
		}
	}
}