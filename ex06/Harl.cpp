/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:20:30 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 17:48:26 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void printLevels(void (Harl::*ptr[4])(void), int i, std::string* levels) {
    int  j;
    Harl harl;

    j = i;
    while (j < 4) {
        std:: cout << "[ " << levels[i] << " ]" << std::endl;
        (harl.*ptr[i++])();
        std::cout << std::endl;
        j++;
    }
}

void switch_statment(int i, void (Harl::*ptr[4])(void), std::string* levels) {
        switch(i + 1) {
        case 1:
            printLevels(ptr, i, levels);
            break ;
        case 2:
            printLevels(ptr, i, levels);
            break;
        case 3:
            printLevels(ptr, i, levels);
            break;
        case 4:
            printLevels(ptr, i, levels);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::complain( std::string level ) {
    int i;
    void (Harl::*ptr[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl ::error
    };
    std::string levels[4] = {
        "DEBUG", 
        "INFO", 
        "WARNING", 
        "ERROR"
    };

    i = 0;
    while (i < 4) {
        if (level == levels[i])
            break;
        i++;
    }
    switch_statment(i, ptr, levels);
}
