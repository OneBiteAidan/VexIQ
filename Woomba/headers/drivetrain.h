void drivetrain (int left, int right)
{
	motor[frontright] = right;
	motor[backright] = right;
	motor[frontleft] = left;
	motor[backleft] = left;
}
