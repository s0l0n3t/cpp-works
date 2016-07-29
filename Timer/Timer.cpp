#include <iostream>
#include <windows.h>
using namespace std;

//  Bu bir timer'dýr.

main(void){
int sec=0;
int min=0;
int hour=0;
int dakik=0;
int sihhat=0;

sourcetime:
cout << "Saat :";
cin >> dakik;
cout << "\nDakika :";
cin >> sihhat;



second:
for (int a=0;a<60; ++a){
	Sleep(1000);
	sec++;
	system("Cls");
	cout <<"\n\n\t\t"<<hour<<":"<<min <<":"<< sec;

if (sec == 59){
	sec = 0;
	min++;
	goto second;
}
if (min == 59){
	min = 0;
	hour++;
	goto second;
}
if (hour == dakik && min == sihhat){
	for (int b =0;b < 10;b++){
	cout << "\t\t" << "\nALARM !!";
	cout << "\a";
	Sleep(10000);
	sec = 0;
	min = 0;
	hour = 0;
	system("Cls");
	goto sourcetime;
}
}



	}
	}

 


