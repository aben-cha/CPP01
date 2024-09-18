/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:41:48 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/19 00:30:16 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name ) {
    int i;
    Zombie* zombies;
    
    zombies = new Zombie[N];
    i = 0;
    while (i < N)
    {
        zombies[i].setName(name);
        zombies[i].announce();
        i++;
    }
    return (zombies);
}
