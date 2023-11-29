#ifndef clock_h
#define clock_h

#include "lib.h"
#include "Config.h"
#include "Time.h"
#include <chrono>
#include <Windows.h>

struct Clock
{
private:
	Config config;
	Time* time;
	bool is_hours_changed;
	bool is_minutes_changed;
	bool is_seconds_changed;

public:
	Clock();
	Clock(Config config, Time time);

	
	Config get_config();
	Time get_time();
	void set_config(Config config);
	void set_time(Time time);


	void update();
	void show();

	inline void show_h();
	inline void show_m();
	inline void show_s();
	inline int show_digits(short number, int x, int y);

	void reset();
};

#endif
