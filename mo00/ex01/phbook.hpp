/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:42:34 by sel-biyy          #+#    #+#             */
/*   Updated: 2023/06/02 18:04:39 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHBOOK_HPP
#define PHBOOK_HPP
#include <iostream>

#include "contact.hpp"
class PhoneBook
{
    private :
        Contact contact[8];
    public :
        void add_contact_tophone(int *i);
        void printall();
        void printone(int index);
        PhoneBook();
        ~PhoneBook();
        
};
int str_digit(std::string str);
#endif