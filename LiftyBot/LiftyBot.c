#pragma config(Motor,  motor2,          lift,          tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor7,          leftDrive,     tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor11,         rightDrive,    tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
void drivetrain(int left, int right)
{
	motor[leftDrive] = left;
	motor[rightDrive] = right;

}
int thro;
int steering;
int joystick_steering_ch = 2;
int joystick_thro_ch = 3;


task main()
{
	while(true)
	{
		thro = vexRT[joystick_steering_ch];
		steering = vexRT[joystick_thro_ch];

		drivetrain(thro + steering, thro - steering);
		delay(1);
		{
			if (vexRT[BtnRDown] == 1)
			{
				motor[motor2] = (-30);
			}
			else
			{
				motor[motor2]=(0);
			}
			if (vexRT[BtnLDown] == 1)
			{
				motor[motor2] = (30);
			}
			else
			{
				motor[motor2]=(0);
			}
		}
	}
}
