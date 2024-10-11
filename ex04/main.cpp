/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:57:17 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 21:57:17 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_file.hpp"

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Invalid parameters." << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::ifstream infile(filename);
    std::string s1;
    std::string s2;

    if (handleError(infile))
        return (1);
    s1 = av[2];
    s2 = av[3];
    copyElement(infile, s1, s2, filename);
    return (0);
}