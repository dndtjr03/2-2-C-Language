#include "Blocks.h"
#include "Controller.h"
#include "Screen.h"
#include "ConsoleCursor.h"

void main()
{
	CursorView(false);
	system("mode con cols = 76 | title â�ǽǹ�������Ʈ_��Ʈ���� �ǽ�");

	/*
	* �Ʒ��� PlaySound �޼���� .wav ���� ������ ��������ִ� �Լ�
	* Controller.h ������Ͽ� include�� mmsystem.h ��������� ���� .wav������ ��½�Ű�µ�,
	* ������ ����� ��� �ش� ��θ� Controller.h�� BGM�� ��θ� ���ڿ��� �����ϸ� �˴ϴ�.
	* �� �� �Ʒ� PlaySound �ּ� ����.
	* ������ ���۱��� ������ �����ð��� ���� ���� X
	*/

	// PlaySound(text(bgm), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (true)
	{
		GameTitle();
		GameProcess();
	}
}