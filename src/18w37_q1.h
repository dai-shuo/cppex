//
//  18w37_q1.h
//  ex
//
//  Created by 戴硕 on 2018/9/9.
//

#ifndef _8w37_q1_h
#define _8w37_q1_h

/*
 补全程序中的XXXXXXXX, YYYYYYYY, ZZZZZZZZ，使程序输出：4,7
 
 #include <iostream>
 #include <functional>
 
 struct Point {
     Point(int a = 0, int b = 0) : _x(a), _y(b) { }
     int x() const { return _x; }
     int y() const { return _y; }
     Point add(const Point& p) const { return Point(_x + p.x(), _y + p.y()); }
     int _x, _y;
 };
 
 int main() {
     std::function<XXXXXXXX> point_x = &Point::x;
     std::function<YYYYYYYY> point_y = &Point::y;
     std::function<ZZZZZZZZ> point_add = &Point::add;
 
     Point b = point_add({1, 2}, {3, 5});
     std::cout << point_x(b) << "," << point_y(b) << std::endl;
 
     return 0;
 }
 */

namespace ns_18w37q1 {
    
#include <iostream>
#include <functional>
    
    struct Point {
        Point(int a = 0, int b = 0) : _x(a), _y(b) { }
        int x() const { return _x; }
        int y() const { return _y; }
        Point add(const Point& p) const { return Point(_x + p.x(), _y + p.y()); }
        int _x, _y;
    };
    
    int main() {
        std::function<int(const Point&)> point_x = &Point::x;
        std::function<int(const Point&)> point_y = &Point::y;
        std::function<Point(const Point&, const Point&)> point_add = &Point::add;
        
        Point b = point_add({1, 2}, {3, 5});
        std::cout << point_x(b) << "," << point_y(b) << std::endl;
        
        return 0;
    }
}

#endif /* _8w37_q1_h */
