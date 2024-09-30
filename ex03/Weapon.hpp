/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:19:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:25:59 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(const std::string& newtype);
        const std::string& getType( void ) const;
        void setType(const std::string& newType);
};

#endif