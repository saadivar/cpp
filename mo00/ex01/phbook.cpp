/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:42:27 by sel-biyy          #+#    #+#             */
/*   Updated: 2023/06/02 18:06:40 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phbook.hpp"
PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{
}
void PhoneBook::add_contact_tophone(int *i)
{
    contact[*i % 8] = contact->add_new_contct(i);
    (*i)++;
    
}
void PhoneBook::printall()
{
    int i = 0;

    while (i < 8)
    {
        if(contact[i].checking())
            contact[i].list_of_contact();
        i++;
    }
}
void PhoneBook::printone(int index)
{
    if(contact[index].checking())
        contact[index].printsingle();
    else
        std::cout <<"  / there is no contact in this index / " << std::endl;
}

int str_digit(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}
