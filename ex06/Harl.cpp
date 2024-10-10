/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:20:30 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/10 15:07:44 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std:: cout << "[ " << "DEBUG" << " ]" 
               << std::endl
               << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger."
               << std::endl 
               << "I really do!" 
               << std::endl 
               << std::endl;
}

void Harl::info( void ) {
    std:: cout<< "[ " << "INFO" << " ]"
              << std::endl
              << "I cannot believe adding extra bacon costs more money."
              << std::endl
              <<  "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
              << std::endl
              << std::endl;
}

void Harl::warning( void ) {
    std:: cout << "[ " << "WARNING" << " ]"
               << std::endl
               << "I think I deserve to have some extra bacon for free."
               << std::endl
               << "I’ve been coming for years whereas you started working here since last month." 
               << std::endl
               << std::endl;
}

void Harl::error( void ) {
    std:: cout << "[ " << "ERROR" << " ]"
               << std::endl
               << "This is unacceptable! I want to speak to the manager now." 
               << std::endl
               << std::endl;
}

void switch_statment(int i, void (Harl::*ptr[4])(void)) {
    Harl harl;
        switch(i + 1) {
        case 1:
            (harl.*ptr[0])();
        case 2:
            (harl.*ptr[1])();
        case 3:
            (harl.*ptr[2])();
        case 4:
            (harl.*ptr[3])();
            break ;
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
    switch_statment(i, ptr);
}
