#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
	initwindow(800,600);
	circle(200,300,600);
	while(!kbhit());
	closegraph();
	return 0;
}
