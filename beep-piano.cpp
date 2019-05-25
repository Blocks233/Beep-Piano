#include <windows.h>
#include <cstdio> 

#define C1 262
#define D1 294
#define E1 330
#define F1 349
#define G1 392
#define A1 440
#define B1 493

#define C2 532
#define D2 588
#define E2 660
#define F2 698
#define G2 784
#define A2 880
#define B2 988

#define C3 1046
#define D3 1175
#define E3 1319
#define F3 1397
#define G3 1568
#define A3 1760
#define B3 1976

#define pai 200 
int main(){
	short key;
	while(true){
		key=GetKeyState('Q');
		if(key&8000) Beep(C1,pai);
		key=GetKeyState('W');
		if(key&8000) Beep(D1,pai);
		key=GetKeyState('E');
		if(key&8000) Beep(E1,pai);
		key=GetKeyState('R');
		if(key&8000) Beep(F1,pai);
		key=GetKeyState('T');
		if(key&8000) Beep(G1,pai);
		key=GetKeyState('Y');
		if(key&8000) Beep(A1,pai);
		key=GetKeyState('U');
		if(key&8000) Beep(B1,pai);
		
		
		
		key=GetKeyState('A');
		if(key&8000) Beep(C2,pai);
		key=GetKeyState('S');
		if(key&8000) Beep(D2,pai);
		key=GetKeyState('D');
		if(key&8000) Beep(E2,pai);
		key=GetKeyState('F');
		if(key&8000) Beep(F2,pai);
		key=GetKeyState('G');
		if(key&8000) Beep(G2,pai);
		key=GetKeyState('H');
		if(key&8000) Beep(A2,pai);
		key=GetKeyState('J');
		if(key&8000) Beep(B2,pai);
		
		key=GetKeyState('Z');
		if(key&8000) Beep(C3,pai);
		key=GetKeyState('X');
		if(key&8000) Beep(D3,pai);
		key=GetKeyState('C');
		if(key&8000) Beep(E3,pai);
		key=GetKeyState('V');
		if(key&8000) Beep(F3,pai);
		key=GetKeyState('B');
		if(key&8000) Beep(G3,pai);
		key=GetKeyState('N');
		if(key&8000) Beep(A3,pai);
		key=GetKeyState('M');
		if(key&8000) Beep(B3,pai);
		Sleep(10);
	}
	
} 
