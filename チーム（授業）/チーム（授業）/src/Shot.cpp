#include "Shot.h"


// �e��z��ŗp��
//Shot shot_data[SHOT_MAX];

CShot::CShot()
{

	l = 0;

	shot_X1 = 0.0;
	shot_Y1 = 0.0;
	shot_X2 = 0.0;
	shot_Y2 = 0.0;

	P_X = 0.0;


	// ������
	// ���ׂāu���g�p�v�Ƃ���
	active_1 = false;
	active_2 = false;

}

CShot::~CShot()
{
}

void CShot::Collision()
{
	for (int i = 0; i < 10; i++)
	{
		if (CEnemyManager::Enemy2[i] != nullptr)
		{
			if (active_1 == true)
			{
				if (Collision::IsHit(shot_X1, shot_Y1, 5, 5,
					CEnemyManager::Enemy2[i]->p_x, CEnemyManager::Enemy2[i]->p_y, CEnemyManager::Enemy2[i]->width, CEnemyManager::Enemy2[i]->height))
				{
					active_1 = false;
					delete CEnemyManager::Enemy2[i];
					CEnemyManager::Enemy2[i] = nullptr;
				}
			}	
		}
		if (CEnemyManager::Enemy2[i] != nullptr)
		{
			if (active_2 == true)
			{
				if (Collision::IsHit(shot_X2, shot_Y2, 5, 5,
					CEnemyManager::Enemy2[i]->p_x, CEnemyManager::Enemy2[i]->p_y, CEnemyManager::Enemy2[i]->width, CEnemyManager::Enemy2[i]->height))
				{
					active_2 = false;
					delete CEnemyManager::Enemy2[i];
					CEnemyManager::Enemy2[i] = nullptr;
				}
			}
		}
	}
}

void CShot::Play_shot()
{

	// �}�E�X�̍��N���b�N�Œe���P����
	if (app_env->isPushKey(GLFW_KEY_LEFT_CONTROL)) {
		if (active_1 == false){
			// ���g�p���g�p��
			active_1 = true;

			//�v���C���[��X�ʒu���擾
			shot_X1 = P_X;

			// �����ʒu�͉�ʂ̉��̕�
			shot_Y1 = -Window::HEIGHT / 2 + 50.0;
		}
		else if (active_1 == true && active_2 == false){
			// ���g�p���g�p��
			active_2 = true;

			//�v���C���[��X�ʒu���擾
			shot_X2 = P_X;

			// �����ʒu�͉�ʂ̉��̕�
			shot_Y2 = -Window::HEIGHT / 2 + 50.0;
		}

	}

	if (app_env->isPressKey(GLFW_KEY_LEFT)){ P_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ P_X += 5; }
	if (P_X >= 225)P_X = 225;
	if (P_X <= -225)P_X = -225;

	// �g�p���̒e�𓮂���
	if (active_1 == true){
		shot_Y1 += 25.0;

		//��ʊO�ɏo���疢�g�p�ɂ���
		if (shot_Y1 > (Window::HEIGHT / 2)) active_1 = false;
	}
	if (active_2 == true){
		shot_Y2 += 25.0;

		//��ʊO�ɏo���疢�g�p�ɂ���
		if (shot_Y2 > (Window::HEIGHT / 2)) active_2 = false;
	}

	// �g�p���̒e��\��
	if (active_1 == true){
		drawFillCircle(shot_X1, shot_Y1,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
	if (active_2 == true){
		drawFillCircle(shot_X2, shot_Y2,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
}