#include <iostream>

using namespace std;

int main(){
	int screenX=60;
	int screenY=20;
	
	int speedX=1;
	int speedY=1;
	
	int ballX=10;
	int ballY=10;
	
	int edgeX=screenX-1;
	int edgeY=screenY-1;
	while (true){
		
		if(ballX==edgeX || ballX==0){
			speedX*=-1;
		}
		
		if(ballY==edgeY|| ballY==0){
			speedY*=-1;
		}
		ballX+=speedX;
		ballY+=speedY;
		for(int y=0;y<screenY;y++){
			for(int x=0;x<screenX;x++){
				if(x==ballX && y==ballY){
					cout << 'o';
				}else{
					cout << " ";
				}
			}
			cout << endl;
		}
		system("sleep 0.1");
		
	
	}
	return 0;
}
