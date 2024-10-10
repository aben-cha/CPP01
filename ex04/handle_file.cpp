/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:10:36 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/10 18:36:39 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_file.hpp"

int handleError(std::ifstream& infile)
{
    if (!infile.is_open()) {
        std::cerr << "Error opening file for reading." << std::endl;
        return (1);
    }
    return (0);
}

void copyElement(std::ifstream& infile, std::string& s1, std::string& s2, std::string& av) 
{
    std::string line;
    std::size_t found;
    std::string sub;
    std::ofstream outfile(av + ".replace");

    if (!outfile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return ;
    }
    while (std::getline(infile, line))
    {
        if (!infile.eof())
            line += "\n";
        while (1) 
        {
            found = line.find(s1);
            if (found == std::string::npos) {
                outfile << line;
                break ;
            }
            sub = line.substr(0, found) + s2 + line.substr(found + s1.length());
            line = sub;
        }
    }
    infile.close();
    outfile.close();
}
