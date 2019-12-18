/**
 * @file carton.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

# pragma once

// Create your first class
class Carton
{
    private:
        double length_; // "_" states it is private
        double width_;
        double height_;

    public:
        // Constructor: build/create your object
        Carton();
        // Getters
        double length();
        double width();
        double height();



}; // must have a ";"
