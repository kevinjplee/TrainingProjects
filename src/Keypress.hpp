#ifndef ROGUEKEYPRESS_HPP
#define ROGUEKEYPRESS_HPP

namespace Rogue{
class Keypress{
	private:
		char m_key;
	public:
		Keypress()= default;
		~Keypress() = default;
	
		char input();
	
};
}
#endif