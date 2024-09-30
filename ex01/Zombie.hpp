/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:19:42 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:25:03 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
    private:
       std::string name;

    public:
        Zombie();
        ~Zombie();
        void setName(std::string nameZombie);
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif