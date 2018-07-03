#include "Face.h"
#include "DxLib.h"

Face::Face()
{
	//‚¤‚ñ‚±‚ñ‚·‚Æ‚ç‚­‚½
}
Face::~Face()
{
	//‚¤‚ñ‚±‚ñ‚Å‚±‚ñ‚·‚Æ‚ç‚­‚½
}

void Face::initialize()
{
	eye_count = 0;
	eye_reset_count = 0;
	eye_open_count = 0;
	eye_switch_value = 200;
}

void Face::face_draw()
{
	eye_count += 20;
	eye_reset_count += 1;

	if (eye_count <= eye_switch_value)
	{
		DrawBox(250, 200 + eye_count, 350, 400, GetColor(0, 255, 0), true);
		DrawBox(650, 200 + eye_count, 750, 400, GetColor(0, 255, 0), true);
	}
	else if (eye_switch_value <= eye_count && eye_open_count <= eye_switch_value)
	{
		eye_open_count += 20;
		DrawBox(250, 400 - eye_open_count, 350, 400, GetColor(0, 255, 0), true);
		DrawBox(650, 400 - eye_open_count, 750, 400, GetColor(0, 255, 0), true);
	}
	else if (eye_count <= 6000)
	{
		DrawBox(250, 200, 350, 400, GetColor(0, 255, 0), true);
		DrawBox(650, 200, 750, 400, GetColor(0, 255, 0), true);
	}
	else
	{
		DrawBox(250, 200, 350, 400, GetColor(0, 255, 0), true);
		DrawBox(650, 200, 750, 400, GetColor(0, 255, 0), true);
		eye_count = 0;
		eye_open_count = 0;
	}
}

void Face::smile_draw()
{
	DrawLine(500, 400, 470, 450, GetColor(0, 255, 0));
	DrawLine(500, 400, 530, 450, GetColor(0, 255, 0));
	DrawLine(530, 450, 560, 400, GetColor(0, 255, 0));
	DrawLine(470, 450, 440, 400, GetColor(0, 255, 0));
}
