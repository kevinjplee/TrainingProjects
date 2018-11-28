#include "Game.hpp"
//#include <conio.h>
#include <random>
#include <iostream>
#include <algorithm>

//#define UP_KEY 72
//#define DOWN_KEY 80
//#define RIGHT_KEY 77
//#define	LEFT_KEY 75

namespace TZFW{
	
	Game::Game(){
		for(auto &arrays : m_board){
			arrays.fill(0);
		}
	}
	
	void Game::system(){
			create();
			keyinput();
	}
	
	void Game::create(){
		std::random_device random;
		std::mt19937 gen(random());
		std::uniform_int_distribution<> space(0,3);
		std::uniform_int_distribution<> value(1,2);
		int row = 0, column= 0;
		while(true){
			row = space(gen); column = space(gen);
			if(m_board[row][column] == 0){
				m_board[row][column] = value(gen);
				break;
			}
		}
	}
/*	
	void Game::detectkey(){
		int key = 0;
		switch((key = getch())){
			case UP_KEY:
				
		}
	}
*/
	void Game::keyinput(){
		char key;
		std::cout<<"Enter w to up, s to down, a to left, d to right."<<std::endl;
		std::cin>>key;
		switch(key){
			case 'w':
				moveup();
				break;
			case 's':
				movedown();
				break;
			case 'a':
				moveleft();
				break;
			case 'd':
				moveright();
				break;
		}
	}
	
	void Game::add(int row, int column, int nrow, int ncolumn){
		if(m_board[row][column]!= 0){
			if(m_board[row][column] == m_board[nrow][ncolumn]){
				++m_board[nrow][ncolumn];
				m_board[row][column] = 0;
			}
		}
	}
	

	//moves a block
	void Game::move(int row, int column, int mrow, int mcolumn){
		//stops from moving out the array
		bool grid = false;
		int direction = 0;
		if(mrow == -1){
			direction = 0;
		}
		else if(mrow == 1){
			direction = 1;
		}
		else if(mcolumn == -1){
			direction = 2;
		}
		else if(mcolumn == 1){
			direction = 3;
		}
		
		grid = gridcheck(row, column, direction);
		if(m_board[row][column] != 0){ //if the value is 0 don't move
			while(grid == false){
				if(m_board[row + mrow][column + mcolumn] == 0){
					std::swap(m_board[row][column], m_board[row + mrow][column + mcolumn]);
					row += mrow; column += mcolumn;
					grid = gridcheck(row,column, direction);
				}
				else if(m_board[row + mrow][column + mcolumn] != 0){
					add(row, column, row+mrow, column + mcolumn);
					break;
				}
			}
		}
	}
	
	void Game::moveup(){ //moves the blocks upside entirely
		for(int row = 1; row < 4; row++){
			for(int column = 0; column < 4; column++){
				move(row,column,-1,0);
			}
		}
	}
	
	void Game::movedown(){
		for(int row = 2; row > -1; row--){
			for(int column = 0; column < 4; column++){
				move(row,column,1,0);
			}
		}
	}
	
	void Game::moveleft(){
		for(int column = 1; column < 4; column++){
			for(int row = 0; row <4; row++){
				move(row,column,0,-1);
			}
		}
	}
	
	void Game::moveright(){
		for(int column = 2; column > -1; column--){
			for(int row = 0; row <4; row++){
				move(row,column,0,1);
			}
		}
	}
	
	bool Game::gridcheck(int row, int column, int direction){
		// direction is 0 up 1 down 2 left 3 right
		if(direction == 0){
			if(row <1){
			 	return true;
			}
		}
		else if(direction == 1){
			if(row > 2){
				return true;
			}
		}
		else if(direction == 2){
			if(column < 1){
				return true;
			}
		}
		else if(direction == 3){
			if(column > 2){
				return true;
			}
		}
		return false;
	}
}