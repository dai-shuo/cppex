#pragma once

namespace utility {

	class datetime {
	public:
		datetime(int year = 0, int month = 0, int day = 0, int hour = 0, int minute = 0, int second = 0);
		void set(int year, int month, int day, int hour, int minute, int second);
		int year() const;
		int month() const;
		int day() const;
		int hour() const;
		int minute() const;
		int second() const;
	private:
		int _year, _month, _day, _hour, _minute, _second;
	};

}