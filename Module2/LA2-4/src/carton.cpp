#include "carton.h"
#include <iostream>
#include <string>

const double Carton::kMaxsize = 100;
const double Carton::kMinLength = 6;
const double Carton::kMinWidth = 3;
const double Carton::kMinHeight = 0.25;

// Constructors have access to private data members
// First Constructor
Carton::Carton()
{
    length_ = 0;
    width_ = 0;
    height_= 0;
}  
// Second Constructor 
Carton::Carton(double length,double width,double height)
{
    try
    {
        SetMeasurements(length, width, height);
    }
    catch(std::out_of_range e)
    {
        // std::cerr << e.what() << '\n';
        std::cout << e.what() << '\n';
        throw;
    }
}
Carton::~Carton()
{

}
void Carton::SetMeasurements(double length, double width, double height)
{
    if(length <= 0 || width <= 0 || height <= 0)
    {
        throw std::out_of_range("All measurements must be greater than zero");
    }
    // Good to go
    length_ = length;
    width_ = width;
    height_= height;
   
}
double Carton::length()
{
    return length_;
}
double Carton::width()
{
    return width_;
}
double Carton::height()
{
    return height_;
}
void Carton::set_length(double length)
{
    if(length <= 0)
    {
        std::string error_msg = "Length must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    // Good to go
    length_ = length;
}
void Carton::set_width(double width)
{
    if(width <=0)
    {
        std::string error_msg = "Width must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    // Good to go
    width_ = width;
}
void Carton::set_height(double height)
{
    if(height <= 0)
    {
        std::string error_msg = "Height must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    // Good to go
    height_ = height;
}
void Carton::ShowInfo()
{
   std::cout << "Box length: " << length() << std::endl;
   std::cout << "Box width: " << width() << std::endl;
   std::cout << "Box height: " << height() << std::endl;
   std::cout << "Box Volume: " << Volume() << std::endl;
}
double Carton::Volume() const
{
    return length_ * width_ * height_;
}
// Capture output in a outStream
void Carton::WriteData(std::ostream &out) const
{
    out << length_ << "," << width_ << "," << height_ << "," << Volume() << std::endl;
}

