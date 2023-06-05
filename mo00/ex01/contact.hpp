/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:42:29 by sel-biyy          #+#    #+#             */
/*   Updated: 2023/06/02 18:04:14 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

class Contact
{
    private :
        std::string first_name;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        int index;
    public :
        Contact(void);
        ~Contact(void);
        void printsingle();
        Contact add_new_contct(int *i);
        int checking();
        void list_of_contact();
        int white_spaces(std::string str);
        int str_digit(std::string str);
};


#endif