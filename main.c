#include <stdio.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ESC 27
#define putchxy(x,y,c){gotoxy(x,y);putch(c);}

void DrawStage();
void Move();

void DrawStage()
{
	int stagex;
	int stagey;
	
	for (stagey = 0; stagey < 16; stagey++)
	{
		for (stagex = 0; stagex < 21; stagex++)
		{
			putchxy(stagex, stagey, stage[stagex][stagey]);
int main()
{
	
	return 0;
}