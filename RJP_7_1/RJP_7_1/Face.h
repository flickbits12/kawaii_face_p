#pragma once

class Face
{
public:

	Face();
	~Face();

private:

		int eye_count;
		int eye_reset_count;
		int eye_open_count;
		int eye_switch_value;

public:

	void initialize();
	void face_draw();
	void smile_draw();

};
	