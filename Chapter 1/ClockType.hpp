class ClockType {
	public:
		void setTime(int h, int m, int s);
		Clockype getTime(void);
		void incrementHour(void);
		void incrementMin(void);
		void incrementSec(void);
		void printTime(void);
		void compareTime(ClockType time1, ClockType time2);		
	private:
		int hour;
		int min;
		int sec;
};
