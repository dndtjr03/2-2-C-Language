#include "AddBlockColor.h"
#include "Screen.h"	//Screen.h에 Color색 정의되어 있음.

void colorRetention(int colorType)
{
	switch (colorType)
	{
		case 0:
			textcolor(BLUE); break;
		case 1:
			textcolor(GREEN); break;
		case 2:
			textcolor(SKYBLUE); break;
		case 3:
			textcolor(RED); break;
		case 4:
			textcolor(VIOLET); break;
		case 5:
			textcolor(YELLOW); break;
		case 6:
			textcolor(GRAY); break;
	}
	printf("■");
	textcolor(WHITE);
}

void addCurrentBlockColor()
{
	switch (curShape)
	{
	case 0:
		textcolor(BLUE); break;
	case 1:
		textcolor(GREEN); break;
	case 2:
		textcolor(SKYBLUE); break;
	case 3:
		textcolor(RED); break;
	case 4:
		textcolor(VIOLET); break;
	case 5:
		textcolor(YELLOW); break;
	case 6:
		textcolor(GRAY); break;
	}
	printf("■");
	textcolor(WHITE);
}

void prevAddBlockColor()
{
	switch (curShape)
	{
	case 0:
		textcolor(BLUE); break;
	case 1:
		textcolor(GREEN); break;
	case 2:
		textcolor(SKYBLUE); break;
	case 3:
		textcolor(RED); break;
	case 4:
		textcolor(VIOLET); break;
	case 5:
		textcolor(YELLOW); break;
	case 6:
		textcolor(GRAY); break;
	}
	printf("□");
	textcolor(WHITE);
}