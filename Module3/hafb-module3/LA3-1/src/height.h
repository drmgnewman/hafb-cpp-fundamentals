/**
 * @file height.h
 * @author Michael Newman (michaelnewman1@weber.edu)
 * @brief 
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

# pragma once

class Height
{
    private:
        double inches_; // "_" states it is private

    public:
        Height() {inches_ = 0;}
        Height(double inches) : inches_(inches){}
        ~Height() {}
        // Setter & Getter
        double inches() const {return inches_;}
        void set_inches(double inches) {inches_ = inches;}
        // Other methods
        friend void print_feet(Height h1);

}; // must have a ";"
void print_feet2(Height h1);
