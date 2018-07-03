#include "DxLib.h"
#include "Face.h"
// �v���O������ WinMain ����n�܂��

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	SetGraphMode(1000, 650, 32, 60);

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	Face* face_p = new Face();

	face_p->initialize();

	while (DxLib::ScreenFlip()==0 && DxLib::ProcessMessage() == 0 && DxLib::ClearDrawScreen() == 0)
	{
		face_p->smile_draw();
		face_p->face_draw();
	}

	delete face_p;

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}

		/*���Ɩ�
		DrawBox(200, 300, 400, 320, GetColor(0, 255, 0), true);
		DrawBox(600, 300, 800, 320, GetColor(0, 255, 0), true);
		*/

		/*�J����
		DrawBox(250, 200, 350, 400, GetColor(0, 255, 0), true);
		DrawBox(650, 200, 750, 400, GetColor(0, 255, 0), true);
		*/
		
		/*����
		DrawBox(250, 300, 350, 320, GetColor(0, 255, 0), true);
		DrawBox(650, 300, 750, 320, GetColor(0, 255, 0), true);
		*/
