void rebound (int dir)
{
	drivetrain (-50,-50);
	delay (300);
	drivetrain (0,0);
	delay (200);
	drivetrain (dir * -30,dir * 30);
	delay (300);
}
