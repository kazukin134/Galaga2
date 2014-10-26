#pragma once

#include "Main.h"
#include "lib/random.hpp"

class CBackground
{
public:
	CBackground();
	~CBackground();

	//ランダム
	Random random;


	//星の在り処
	struct star_pos{
		//星の位置
		float fast_x, fast_y;
	};



	int game_sw;
	int f;
	int star_time_1;
	int star_time_2;
	float star_burst;
	int back_star;

	void draw_background();

};

