#include "vector2d.hh"
#include <string>


Vector2d::Vector2d( float _x,  float _y) : x(_x), y(_y) {}

std::string Vector2d::to_string() const{
    
    std::string respuesta = std::to_string(x);
    std::string respuesta2 = std::to_string(y);
    std::string res = std::string(respuesta) + std::string(" ,") + std::string(respuesta2) ;
    return res;
}

Vector2d Vector2d::operator+(const Vector2d &v) const
{
    return Vector2d(x+v.x, y+v.y);
}

Vector2d Vector2d::operator*(const Vector2d &v) const
{
    return Vector2d(x*v.x, y*v.y);
}

Vector2d Vector2d::operator-(const Vector2d &v) const
{
    return Vector2d(x-v.x, y-v.y);
}

float Vector2d::getX(){
    return x;
}

float Vector2d::getY(){
    return y;
}