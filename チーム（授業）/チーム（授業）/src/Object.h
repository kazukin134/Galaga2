#pragma once

class Object
{

public:
	float x;			//x���W
	float y;			//y���W
	float width;		//��
	float height;		//����

	enum class CState
	{
		NORMAL,
		DIE
	};

	CState State;

};