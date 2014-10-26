#include "Von.h"
#include "lib/appEnv.hpp"

burst::burst() :von("res/von.png")
{
}


burst::~burst()
{
}


void burst::disp_von(){

	//時間が一定以上なら
	if (von_time >= 1){
		//時間を増やす
		von_time += 1;

		//vonの時間が1以上だったら爆破開始
		if (von_time >= 1){
			drawTextureBox(-150, -150, 300, 300,
				von_x, von_y, 256, 256, von, Color(1, 1, 1));
		}

		//一瞬表示した次へ
		if (von_time >= 2){
			von_x += 256;
			von_y += 256;
			von_time = 1;
		}

		//表示しきったら終わり
		if (von_x > 256 * 15){
			//初期値に戻す
			von_x = 0;
			von_y = 0;
			von_time = 0;
		}
	}

}