#include "datetime.hpp"

namespace utility {

	datetime::datetime(int year, int month, int day, int hour, int minute, int second) { 
		set(year, month, day, hour, minute, second);
	}

	void datetime::set(int year, int month, int day, int hour, int minute, int second) {
		_year = year;
		_month = month;
		_day = day;
		_hour = hour;
		_minute = minute;
		_second = second;
	}
	
	int datetime::year() const { return _year; }
	int datetime::month() const { return _month; }
	int datetime::day() const { return _day; }
	int datetime::hour() const  { return _hour; }
	int datetime::minute() const  { return _minute; }
	int datetime::second() const  { return _second; }

}
