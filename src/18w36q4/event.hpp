#pragma once

#include <string>
#include <iostream>
#include <memory>
#include "utility/datetime.hpp"

class event {
public:
    enum event_level { DEBUG, INFO, WARN, ERROR };

    event(event_level level, const std::string& msg);
    std::shared_ptr<utility::datetime> timestamp();
    void output(std::ostream& os) const;

private:
    event_level _level = DEBUG;
    std::shared_ptr<utility::datetime> _timestamp;
    std::string _msg;
};

#define kLog(LEVEL, MSG) event((LEVEL), std::string(MSG)).output(std::cout)
#define kLogDebug(MSG) kLog(event::event_level::DEBUG, (MSG));
#define kLogInfo(MSG)  kLog(event::event_level::INFO,  (MSG));
#define kLogWarn(MSG)  kLog(event::event_level::WARN,  (MSG));
#define kLogError(MSG) kLog(event::event_level::ERROR, (MSG));
