#include "Graphics.hpp"
#include <iostream>
#include <utility>

namespace Rogue{
	
	Graphics::Graphics(const std::unique_ptr<Map> m_map, const std::unique_ptr<Player> cur_player){
		cur_player = std::move(m_player);
		cur_map = std::move(m_map);
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
		auto& cposition = cur_player -> position();
		int y = cposition[1];
		int x = cposition[0];
		
		map = cur_map -> pmap;
		map[y][x] = '@';
	}
}