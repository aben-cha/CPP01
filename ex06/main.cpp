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

int main(int ac, char **av)
{
    Harl harl;
    std::string level;

    if (ac != 2) {
        std::cerr << "Error invalid level." << std::endl;
        return (1);
    }
    level = av[1];
    harl.complain(level);
    return (0);
}