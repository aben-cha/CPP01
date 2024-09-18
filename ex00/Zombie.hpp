/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:19:42 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/18 23:16:12 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie {
    private:
       std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif