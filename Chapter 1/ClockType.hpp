class ClockType {
	public:
		ClockType(int, int, int);
		ClockType();
		void setTime(int, int, int );
		Clockype getTime(void) const;
		void incrementHour(void);
		void incrementMin(void);
		void incrementSec(void);
		void printTime(void) const;
		bool compareTime(ClockType, ClockType) const;		
	private:
		int hour;
		int min;
		int sec;
};


ClockType::ClockType(int h, int m, int s)
{
	if(h < 24 && h >= 0) 
	{
		hour = h;
	} else {
		hour = 0;
	}

	if(m < 60 && m >= 0)
	{
		min = m;
	} else {
		min = 0;
	}

	if(s < 60 && s >= 0)
	{
		sec = s;
	} else {
		sec = 0;
	}
}

ClockType::ClockType()
{
	hour = 0;
	min = 0;
	sec = 0;
}

void ClockType::setTime(int h, int m, int s)
{
	if(h < 24 && h >= 0) 
	{
		hour = h;
	} else {
		hour = 0;
	}

	if(m < 60 && m >= 0)
	{
		min = m;
	} else {
		min = 0;
	}

	if(s < 60 && s >= 0)
	{
		sec = s;
	} else {
		sec = 0;
	}	
}

void ClockType::getTime()
{
	
}
