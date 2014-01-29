#pragma config(Motor,  port2,           backRight,     tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           frontRight,    tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           backLeft,      tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           frontLeft,     tmotorVex269_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int threshold = 10;
	while(true){
	//	if(abs(vexRT[Ch1] > threshold){
	//	}
	//	else{
	//	}
		if(abs(vexRT[Ch3]) > threshold){
			motor[frontLeft] = vexRT[Ch3];
			motor[backLeft] = vexRT[Ch3];
		}
		else{
			motor[frontLeft] = 0;
			motor[backLeft]=0;
		}
		if(abs(vexRT[Ch2]) > threshold){
			motor[frontRight] = vexRT[Ch2];
			motor[backRight] = vexRT[Ch2];
		}
		else{
			motor[frontRight]=0;
			motor[backRight] = 0;
		}
	}
}
