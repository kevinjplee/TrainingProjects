#include "Engine.hpp"


namespace Rogue{
	Engine::Engine()
		:graphics(&map,&player){
	}
	
	void Engine::run(){
		while(true){
			graphics.player();
			graphics.render();
			player.move();
		}
	}
}