/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:41:50 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/19 16:16:17 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
 
Weapon::Weapon(const std::string& newtype) {
    type = newtype;
}

const std::string& Weapon::getType( void ) {
    return type;    
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}