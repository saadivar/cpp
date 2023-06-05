/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:38:50 by sel-biyy          #+#    #+#             */
/*   Updated: 2023/06/02 19:44:49 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    
    if(ac == 1)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
	return (0);
}