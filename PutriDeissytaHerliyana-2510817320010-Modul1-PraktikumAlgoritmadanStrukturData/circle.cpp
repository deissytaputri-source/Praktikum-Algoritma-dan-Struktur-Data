#include "circle.h"
#include <cmath>

double distance(const Circle * c, const Point * p) {
    double dx = p->x - c->centre.x;
    double dy = p->y - c->centre.y;
    return std::sqrt(dx * dx + dy * dy);
}

std::string CheckPointInCircle(double d) {
    if (std::fabs(d) < EPSILON) {
        return "On Circle";
    } else if (d < 0) {
        return "Inside";
    } else {
        return "Outside";
    }
}