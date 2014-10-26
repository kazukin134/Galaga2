#pragma once
#include "lib/appEnv.hpp"

class burst{
public:
	burst();
	~burst();

	//”š”j‚Ì‰æ‘œ
	Texture von;

	//”š”­‚Ì‰æ‘œ‚ÌØ‚èæ‚è
	int von_x = 0;
	int von_y = 0;

	//”š”­‚·‚éŠÔ
	int von_time = 0;

	//ŠÖ”
	void disp_von();
};