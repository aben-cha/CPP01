/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:58:27 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/11 21:14:36 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie;
    int nbrZombie;

    nbrZombie = 3;
    if (nbrZombie <= 0)
        return (1);
    zombie = zombieHorde(nbrZombie, "Foo");
    for(int i = 0; i < nbrZombie; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}