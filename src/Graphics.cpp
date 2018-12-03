#include <iostream>
#include <utility>

#include "Graphics.hpp"

namespace Rogue{
	
	Graphics::Graphics(const Map* m_map, const Player* m_player){
		cur_player = m_player;
		cur_map = m_map;
	}
	
	void Graphics::render(){
		for(auto& y: cur_map -> pmap){
			for(auto& x: y){
				std::cout<<x;
			}
			std::cout<<'\n';
		}
		player();
	}
	
	void Graphics::player(){
		int x = 0; int y = 0;
		auto cposition = cur_player -> position();
		y = cposition[1];
		x = cposition[0];
		
		(cur_map -> pmap)[y][x] = '@';
	}
}