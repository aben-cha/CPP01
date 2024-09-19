/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:58:27 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/19 11:06:14 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    str = "HI THIS IS BRAIN";
    std::cout << "The memory address of str            : " << &str << std::endl;    
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;    
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "The value of str                  : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl; 
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}