/**
 * @file profile.cc
 * @author Lainie Daniel 
 * @brief implementation file for profile header
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "profile.h"
#include "date.h"

/**
 * @brief Construct a new Profile:: Profile object
 * 
 * @param n : name of the profile, default N/A
 * @param d : date of the name with Date constructor 
 */
Profile::Profile(std::string n = "N/A", Date d = Date());


/**
 * @brief show name of the profile
 * 
 * @return std::string 
 */
std::string Profile::get_name()const{
    return Profile.name();
}

/**
 * @brief show bday of the name 
 * 
 * @return Date 
 */
Date Profile::get_bday()const{
    return Profile.bday();
}

/**
 * @brief see if two profiles are the same 
 * 
 * @param other : the profile comparing with the object on the left of ==
 * @return true 
 * @return false 
 */
bool Profile::operator == (const Profile& other) const{
    if (bday == other.bday && name == other.name){
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief see if two profiles are not equal to each other 
 * 
 * @param other : the profile comparing with the object on the left of !=
 * @return true 
 * @return false 
 */
bool Profile::operator != (const Profile& other)const{
    if (bday != other.bday || name != other.name){
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief read input from an input stream 
 * 
 * @param ins 
 */
void Profile::input(std::istream& ins){
    string line;
    while(!ins.eof()){
        getline(ins, line);
        if(cin.peek() == '\n' || cin.peek() == '\t' || cin.peek() == '\r'){
            cin.ignore();
        }
    }
    do{
    cout << "Enter the length: ";
	cin >> length;
	cout << " Enter the width: ";
	cin >> width;
	area = length * width;
    }
    while(length <= 0 && width <= 0);
}

/**
 * @brief send info to an output stream 
 * 
 * @param outs 
 */
void Profile::output(std::ostream& outs)const;

/**
 * @brief uses the desired input stream into a profile object using >>
 * 
 * @param ins : user desired input stream 
 * @param p : profile object 
 * @return std::istream& 
 */
std::istream& operator >> (std::istream& ins, Profile& p){

}

/**
 * @brief 
 * 
 * @param outs 
 * @param p 
 * @return std::ostream& 
 */
std::ostream& operator << (std::ostream& outs, const Profile& p);