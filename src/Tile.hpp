#ifndef TOWERTILE_HPP__
#define TOWERTILE_HPP__

namespace Tower{
class Tile{
	private:
	  char m_symbol;
	public:
	  const char& p_symbol = m_symbol;
	public:
	  Tile();
	  ~Tile() = default;

	  void print();
	  void set(char input);
};
}
#endif