/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:21:50 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:21:50 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;

    std::cout << "Enter a level [DEBUG, INFO, WARNING, ERROR] : ";
    std::getline(std::cin, level);
    harl.complain(level);
    return (0);
}