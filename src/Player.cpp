#include "Player.hpp"
#include <iostream>
#include <vector>

#define MAPSIZE 9

namespace Tower{
	Player::Player():m_x(5),m_y(5),m_symbol('@'){
		
		}
	
	char Player::keycheck(){
		std::vector<char> keyset = {'w', 's', 'a', 'd'};
		  char key;
		  auto keybool = [&keyset, &key](){
			  for(auto& keys: keyset){
			  if(key == keys){
				  return true;
			  }}
			  return false;
		  };
		  do{
		  std::cin>>key;
		  }while(keybool() != true);
		  
		  return key;
	}
	
	void Player::move(){
		  char key;
		  key = keycheck();
		  g_map[m_y][m_x].set(' ');
		  switch(key){
			case('w'):
				  if(m_y != 0){
				  	if(g_map[m_y-1][m_x].p_symbol == ' '){
						  m_y--;
				  	}
				  }
				  break;
			case('s'):
				  if(m_y != MAPSIZE){
					  if(g_map[m_y+1][m_x].p_symbol == ' '){
					  	m_y++;
				  	}
				  }
				  break;
			case('a'):
				  if(m_x != 0){
				  	if(g_map[m_y][m_x-1].p_symbol == ' '){
						  m_x--;
				  	}
				  }
				  break;
			case('d'):
				  if(m_x != MAPSIZE){
				  	if(g_map[m_y][m_x+1].p_symbol == ' '){
						  m_x++;
				  	}
				  }
				  break;
		  }
		  g_map[m_y][m_x].set(m_symbol);
	  }
}