#include <iostream>
#include <conio.h>
#include <graphics.h>

void Draw(int x, int y, int color1, int color2){
	setcolor(color1);
	setfillstyle(1,color2);
	circle(x,y,20);
	floodfill(x,y,color1);	
}

int main(int argc, char** argv) {
	int x, y;
	initwindow(400, 400);
	setfillstyle(1, 0);
	bar(0, 0, 399, 399);
	x = 20;
	y = 200; 
	int color1 = 14, color2 = 10, color3 = 0, color4 = 0;
	
	/* Анимация*/
	while(1){
		Draw(x, y, color1, color2); // рисуем
		int code = getch();
		
		if (code == 27){
			break;
		}
		
		Draw(x, y, color3, color4); // стираем
		switch(code){
			case 75: x-=5; break; // влево
			case 77: x+=5; break; // вправо
			case 72: y-=5; break; // вверх
			case 80: y+=5; break; // вниз
		}
		
		
	}
	closegraph();
	return 0;
}








