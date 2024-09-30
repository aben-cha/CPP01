/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:58:27 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:24:21 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie;
     
    zombie = newZombie("Rotten Ralph");
    randomChump("Gory Gabe");
    zombie->announce(); 
    delete zombie; 
    return (0);
}