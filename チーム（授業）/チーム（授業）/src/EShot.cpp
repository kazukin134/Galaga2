#include "EShot.h"



CEShot::CEShot()
{
	shot_X = 0.0;
	shot_Y = Window::HEIGHT / 2 - 50.0;

	E_X = 0.0;
	E_Xv = 5;
	count = 0;

	// ������
	active = false;

}

CEShot::~CEShot()
{
}

void CEShot::Play_Eshot()
{
	count += 1;

	// 1�b���Ƃɒe���쐬
	if (count >= 30) {
		if (active == false){
			active = true;

			//�����ʒu
			shot_X = E_X;

			// �����ʒu�͉�ʂ̉��̕�
			shot_Y = Window::HEIGHT / 2 - 50.0;
			count = 0;
		}
	}

	E_X += E_Xv;
	if (E_X == 225)E_Xv = -E_Xv;
	if (E_X == -225)E_Xv = -E_Xv;

	// �g�p���̒e�𓮂���
	if (active == true){
		shot_Y -= 25.0;

		// ��ʂ̊O�ֈړ������疢�g�p�ɂ���
		if (shot_Y < (-Window::HEIGHT / 2)){ active = false; }
	}

	// �g�p���̒e��\��
	if (active == true){
		drawFillCircle(shot_X, shot_Y,
			5.0, 5.0,
			10,
			Color(1, 1, 1));
	}
}