#include <bits/stdc++.h>
using namespace std;
void runLoop(){
	system("sudo ydotool mousemove 1 1 ");
	auto now = chrono::system_clock::now();
	time_t currentTime = chrono::system_clock::to_time_t(now);
	cout<<"Sleep prevented on :"<<ctime(&currentTime)<<endl;
}

int main(){

	int delay = 10*1000;
	while(true){
	runLoop();
	this_thread::sleep_for(chrono::milliseconds(delay));
	}

	return 0;

}
