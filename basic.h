#ifndef BASIC_H
#define BASIC_H

namespace cluna {
template <typename T>
struct Point {
    Point() = default;
    Point(const T& tx, const T& ty):x(tx), y(ty) {}
    T x;
    T y;
};

template <typename T>
T Area2(const Point<T>& p, Point<T>& q, Point<T>& s) {
    return p.x * q.y - p.y * q.x + q.x * s.y - q.y * s.x + s.x * p.y - s.y * p.x;
}

template <typename T>
inline bool ToLeft(const Point<T>& p, Point<T>& q, Point<T>& s) {
    return Area2(p, s, q) > T(0);
}


} // namespace cluna

#endif