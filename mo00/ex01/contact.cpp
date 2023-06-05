/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:42:32 by sel-biyy          #+#    #+#             */
/*   Updated: 2023/06/02 19:32:11 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"


Contact::Contact(void)
{
}
Contact::~Contact(void)
{
}
int Contact::white_spaces(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i])) {
            return 0;
        }
    }
        return 1;
}
int Contact::str_digit(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}
Contact Contact::add_new_contct(int *i)
{
    Contact saad;
    std::cout << "enter a first name : " << std::endl;
    std::getline(std::cin , saad.first_name);
    if((std::cin.eof()))
        exit(1) ;
    while(saad.first_name.empty() || saad.white_spaces(saad.first_name))
    {
        std::cout << "field should not be empty : " << std::endl;
        std::getline(std::cin , saad.first_name);
        if((std::cin.eof()))
            exit(1) ;
    }    
    std::cout << "enter last name : " << std::endl;
    std::getline(std::cin , saad.lastname);
    if((std::cin.eof()))
        exit(1) ;
    while(saad.lastname.empty() || saad.white_spaces(saad.lastname))
    {
        std::cout << "field should not be empty : " << std::endl;
        std::getline(std :: cin ,saad.lastname);
        if((std::cin.eof()))
            exit(1) ;
    }  
    std::cout << "enter nickname : " << std::endl;
    std::getline(std :: cin , saad.nickname) ;
    if((std::cin.eof()))
        exit(1) ;
    while(saad.nickname.empty() || saad.white_spaces(saad.nickname))
    {
        std::cout << "field should not be empty : " << std::endl;
        std::getline(std :: cin ,saad.nickname);
        if((std::cin.eof()))
            exit(1) ;
    }  
    std::cout << "enter phonenumber : " << std::endl;
    std::getline(std :: cin , saad.phonenumber) ;
    if((std::cin.eof()))
        exit(1) ;
    while(saad.phonenumber.empty() || saad.white_spaces(saad.phonenumber) || saad.str_digit(saad.phonenumber))
    {
        if(saad.str_digit(saad.phonenumber))
            std::cout << "should be all numeric : " << std::endl;
        else
            std::cout << "field should not be empty : " << std::endl;
        std::getline(std :: cin ,saad.phonenumber);
        if((std::cin.eof()))
            exit(1) ;
    } 
    std::cout << "enter darkest secret : " << std::endl;
    std::getline(std :: cin , saad.darkestsecret) ;
    if((std::cin.eof()))
        exit(1) ;
    while(saad.darkestsecret.empty() || saad.white_spaces(saad.darkestsecret) )
    {
        std::cout << "field should not be empty : " << std::endl;
        std::getline(std :: cin ,saad.darkestsecret);
        if((std::cin.eof()))
            exit(1) ;
    } 
    saad.index = (*i % 8) + 1;
    return(saad);
}

void Contact::printsingle()
        {
            std::cout << "index : " << index  <<std::endl;
            std::cout <<"1st_N : " << first_name <<std::endl ;
            std::cout <<"Last_N : " << lastname <<std::endl ;
            std::cout <<"Nick_N : " << nickname <<std::endl ;
            std::cout <<"Phone_N : " << phonenumber <<std::endl ;
            std::cout <<"Darke_S : " << darkestsecret <<std::endl  ;
        }
int Contact::checking()
{
    if(first_name.empty() || lastname.empty() || nickname.empty() || phonenumber.empty() || darkestsecret.empty()  )
        return(0);
    return(1);
}

void Contact::list_of_contact(){
            std::cout <<std::setw(10)<< index << "|";
            if(first_name.length() > 10)
                std::cout  << first_name.substr(0,9) << "." << "|" ;
            else
                std::cout <<std::setw(10)<< first_name << "|" ;
            if(lastname.length() > 10)
                std::cout  << lastname.substr(0,9) << "." << "|" ;
            else
                std::cout <<std::setw(10)<< lastname << "|" ;
            if(nickname.length() > 10)
                std::cout  << nickname.substr(0,9) << "." <<std::endl  ;
            else
                std::cout  <<std::setw(10)<< nickname  <<std::endl ;
        }