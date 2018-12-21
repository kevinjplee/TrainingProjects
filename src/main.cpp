#include <iostream>
#include <array>
#include <vector>

#define MAPSIZE 10 // real size -1

class Tile{
	private:
	  char m_symbol;
	public:
	  const char& p_symbol = m_symbol;
	public:
	  Tile():m_symbol(' '){
		}
	  ~Tile() = default;
	
	  void print(){
		  std::cout<<m_symbol;
	  }
	
	  void set(char input){
		  m_symbol = input;
	  }
};

std::array<std::array<Tile,MAPSIZE>,MAPSIZE> g_map;

void printmap(){
	std::cout << "\033[2J\033[1;1H";
	for(int column = 0; column < 10; column++){
		for(int row = 0; row < 10; row++){
			g_map[column][row].print();
		}
		std::cout<<'\n';
	}
}

class Player{
	private:
	  int m_x, m_y;
	  char m_symbol;
	public:
	  Player():m_x(5),m_y(5),m_symbol('@'){
		}
	  ~Player() = default;
	
	
	//vector of right keyset, compare every keyset and return true if it's right, if any of them are false, return false
	  char keycheck(){
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
	
	  void move(){
		  char key;
		  key = keycheck();
		  g_map[m_y][m_x].set(' ');
		  switch(key){
			case('w'):
				  if(m_y != 0){
				  	if(g_map[m_y - 1][m_x].p_symbol == ' '){
						  m_y--;
				  	}
				  }
				  break;
			case('s'):
				  if(m_y != MAPSIZE - 1){
					  if(g_map[m_y + 1][m_x].p_symbol == ' '){
					  	m_y++;
				  	}
				  }
				  break;
			case('a'):
				  if(m_x != 0){
				  	if(g_map[m_y][m_x - 1].p_symbol == ' '){
						  m_x--;
				  	}
				  }
				  break;
			case('d'):
				  if(m_x != MAPSIZE - 1){
				  	if(g_map[m_y][m_x + 1].p_symbol == ' '){
						  m_x++;
				  	}
				  }
				  break;
		  }
		  g_map[m_y][m_x].set(m_symbol);
	  }
};



int main(void){
	Player player;
	while(true){
	printmap();
	player.move();
	}
	
}