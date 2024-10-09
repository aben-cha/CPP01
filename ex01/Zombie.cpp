/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:19:37 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 14:45:15 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    name = "";
}

void Zombie::setName(std::string nameZombie) {
    name = nameZombie;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce( void ) {
    std::cout << name 
              << ": BraiiiiiiinnnzzzZ..." 
              << std::endl; 
}
