/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:19:37 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/18 23:18:04 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce( void ) {
    if (name.compare("Foo") == 0)
        std::cout << name;
    else 
        std::cout << "<" << name << ">";
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
