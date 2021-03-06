
/**********************************************************************************************************
 * Project     : LPC4088FET208
 * Author      :
 * Version     :
 * Copyright   :
 * Description : Math Functions
 **********************************************************************************************************/

#include "math.h"

void sinc(double start, double stop, double range){
	int temp, i;
	double t[temp];
	//double T = 1;
	bool negStartPos;

	if(start < 0){
		negStartPos = true;
		start = start * -1;
		if(stop < 0){
			stop = stop * -1;
			temp = (start + stop)/range;
		}
		else{
			temp = (start + stop)/range;
		}
	}
	else{
		temp = (start + stop)/range;
	}

	if(negStartPos == true){
		start = start * -1;
	}
	for (i = 0; i <= temp; i++){
		t[i] = start;
		start = start + range;
	}

	double x_t[temp];

	for (int i = 0; i <= temp; i++) {
		if (t != 0) {
		x_t[i] = sin(PI * t[i])/ (PI*t[i]);
		}
		else {
			x_t[i] = 1;
		}
	}
}
