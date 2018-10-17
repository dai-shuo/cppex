#include <ctime>
#include "event.hpp"

event::event(event_level level, const std::string& msg) {
    _level = level;
    _msg = msg;
    std::time_t ts = std::time(nullptr);
    std::tm *t = std::localtime(&ts);
    _timestamp = std::make_shared<utility::datetime>(
        t->tm_year + 1900, 
        t->tm_mon + 1, 
        t->tm_mday, 
        t->tm_hour, 
        t->tm_min, 
        t->tm_sec);
}

std::shared_ptr<utility::datetime> event::timestamp() {
    return _timestamp;
}

void event::output(std::ostream& os) const {
    char time_str[256];
    sprintf( time_str, "%04d-%02d-%02d %02d:%02d:%02d", 
        _timestamp->year(),
        _timestamp->month(), 
        _timestamp->day(),
        _timestamp->hour(), 
        _timestamp->minute(),
        _timestamp->second() );

    char level_str[16] = {0};
    switch(_level) {
    case DEBUG: sprintf(level_str, "D"); break;
    case INFO: sprintf(level_str, "I"); break;
    case WARN: sprintf(level_str, "W"); break;
    case ERROR: sprintf(level_str, "E"); break;
    }

    os << time_str << " " << level_str << " " << _msg << "\n";
}
