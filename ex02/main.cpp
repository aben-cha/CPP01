/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:58:27 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 14:52:51 by aben-cha         ###   ########.fr       */
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
    std::cout << "The memory address of str            : " << &str << std::endl    
              << "The memory address held by stringPTR : " << stringPTR << std::endl   
              << "The memory address held by stringREF : " << &stringREF << std::endl

              << "The value of str                  : " << str << std::endl
              << "The value pointed to by stringPTR : " << *stringPTR << std::endl
              << "The value pointed to by stringREF : " << stringREF << std::endl;
    return (0);
}