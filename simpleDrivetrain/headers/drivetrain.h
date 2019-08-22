void drivetrain(int port, int starboard)	// make a function with two passed variables
{
	motor[foreStarboard] = starboard;	// write values to both motors on each side
	motor[aftStarboard] = starboard;
	motor[aftPort] = port;
	motor[forePort] = port;
}
