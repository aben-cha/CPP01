/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:37:18 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/18 23:16:35 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* newZombie( std::string name ) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}

