/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:09:53 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 15:02:57 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& Name, Weapon& w) : name(Name), weapon(w) {}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

