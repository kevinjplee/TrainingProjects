#include "Engine.hpp"


namespace Rogue{
	Engine::Engine()
		:graphics(&map,&player){
	}
	
	void Engine::run(){
		while(true){
			graphics.render();
			graphics.player();
			player.move();
		}
	}
}