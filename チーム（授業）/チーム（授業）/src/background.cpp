#include "background.h"


CBackground::CBackground()
{

	f = 0;
	star_time_1 = 0;
	star_time_2 = 0;
	star_burst = 0;
	back_star = 0;
	game_sw = 0;
	//float fast_x = 0;
	//float fast_y = 0;


}


CBackground::~CBackground()
{
}


void CBackground::draw_background(){


	star_pos star_memory[] = {

		//��
		{ 150, 250 },
		{ -150, 400 },
		{ 200, -350 },
		{ -350, -150 },
		{ -50, 250 },
		{ 350, 250 },
		{ -150, -250 },
		{ 150, -400 },
		{ -200, 350 },
		{ 350, 150 },

		//��
		{ -300, -250 },
		{ 150, 0 },
		{ -200, 50 },
		{ 350, 150 },
		{ 350, -250 },
		{ -350, -250 },
		{ 150, 250 },
		{ 150, 50 },
		{ 200, -350 },
		{ -350, -50 },

		//��
		{ -280, -230 },
		{ 130, 80 },
		{ -180, 30 },
		{ 380, 130 },
		{ 330, -280 },
		{ -330, -80 },
		{ 380, 30 },
		{ 180, 350 },
		{ 230, -350 },
		{ -330, 0 },

		//��
		//��
		//��
		//��
		//��
	};

	//���ԕϐ�
	star_time_1 += 1;
	star_time_2 += 1;

	//��s
	if (star_time_1 >= 30){

		//��10��
		for (f = 0; f <= 9; f++){
			drawPoint(star_memory[f].fast_x, star_memory[f].fast_y,
				4, Color(1, 0.2, 0.2));
			//���
			if (star_memory[f].fast_y >= 500){
				star_memory[f].fast_y = star_memory[f].fast_y - 990;
			}
			//����
			if (star_memory[f].fast_y <= -500){
				star_memory[f].fast_y = star_memory[f].fast_y + 990;
			}
		}
		//���F5��
		for (f = 20; f <= 24; f++){
			drawPoint(star_memory[f].fast_x, star_memory[f].fast_y,
				4, Color(1, 1, 0.2));
			//���
			if (star_memory[f].fast_y >= 500){
				star_memory[f].fast_y = star_memory[f].fast_y - 990;
			}
			//����
			if (star_memory[f].fast_y <= -500){
				star_memory[f].fast_y = star_memory[f].fast_y + 990;
			}
		}

		//�`�J�`�J�����郋�[�v�̂��߂ɏ����l��
		if (star_time_1 >= 40){
			star_time_1 = 0;
		}
	}

	//��U
	if (star_time_2 >= 20){

		//��10��
		for (f = 10; f <= 19; f++){
			drawPoint(star_memory[f].fast_x, star_memory[f].fast_y,
				4, Color(0.2, 0.2, 1));
			//���
			if (star_memory[f].fast_y >= 500){
				star_memory[f].fast_y = star_memory[f].fast_y - 990;
			}
			//����
			if (star_memory[f].fast_y <= -500){
				star_memory[f].fast_y = star_memory[f].fast_y + 990;
			}
		}
		//���F5��
		for (f = 25; f <= 29; f++){
			drawPoint(star_memory[f].fast_x, star_memory[f].fast_y,
				4, Color(1, 1, 0.2));
			//���
			if (star_memory[f].fast_y >= 500){
				star_memory[f].fast_y = star_memory[f].fast_y - 990;
			}
			//����
			if (star_memory[f].fast_y <= -500){
				star_memory[f].fast_y = star_memory[f].fast_y + 990;
			}
		}

		//�`�J�`�J�����郋�[�v�̂��߂ɏ����l��
		if (star_time_2 >= 30){
			star_time_2 = 0;
		}
	}

	//���̓���
	star_memory[0].fast_y -= star_burst;
	star_memory[1].fast_y -= star_burst;
	star_memory[2].fast_y -= star_burst;
	star_memory[3].fast_y -= star_burst;
	star_memory[4].fast_y -= star_burst;
	star_memory[5].fast_y -= star_burst;
	star_memory[6].fast_y -= star_burst;
	star_memory[7].fast_y -= star_burst;
	star_memory[8].fast_y -= star_burst;
	star_memory[9].fast_y -= star_burst;
	star_memory[10].fast_y -= star_burst;
	star_memory[11].fast_y -= star_burst;
	star_memory[12].fast_y -= star_burst;
	star_memory[13].fast_y -= star_burst;
	star_memory[14].fast_y -= star_burst;
	star_memory[15].fast_y -= star_burst;
	star_memory[16].fast_y -= star_burst;
	star_memory[17].fast_y -= star_burst;
	star_memory[18].fast_y -= star_burst;
	star_memory[19].fast_y -= star_burst;
	star_memory[20].fast_y -= star_burst;
	star_memory[21].fast_y -= star_burst;
	star_memory[22].fast_y -= star_burst;
	star_memory[23].fast_y -= star_burst;
	star_memory[24].fast_y -= star_burst;
	star_memory[25].fast_y -= star_burst;
	star_memory[26].fast_y -= star_burst;
	star_memory[27].fast_y -= star_burst;
	star_memory[28].fast_y -= star_burst;
	star_memory[29].fast_y -= star_burst;





	//���̐؂�ւ�
	switch (game_sw){

		//�~�܂��Ă���Ƃ�
	case 0:
		if (app_env->isPushKey('A')){
			game_sw = 1;
		}
		//���̑������~�߂�
		star_burst = 0;

		break;
		//��{�̓���
	case 1:

		//��ʕύXS
		if (app_env->isPushKey('S')){
			game_sw = 2;
		}
		//���̑���
		star_burst += 0.2;
		if (star_burst >= 2){
			star_burst = 5;
		}

		break;

		//�߂܂���!!
	case 2:

		//���������߂�
		star_burst = -13;

		//�����߂�����
		back_star += 1;

		if (back_star >= 5 * 60){
			back_star = 0;
			game_sw = 1;
		}
		break;
	}
}