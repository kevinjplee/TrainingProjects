#ifndef ROGUEENGINE_HPP__
#define ROGUEENGINE_HPP__

#include "Engine.hpp"
#include "Graphics.hpp"
#include "Map.hpp"

namespace Rogue{
class Engine{
	private: 
		Map map;
		Player player;
		Graphics graphics;

	
	public:
		Engine();
		~Engine() = default; 
	
		void run();
};
}
#endif