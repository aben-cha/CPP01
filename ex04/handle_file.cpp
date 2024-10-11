/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:10:36 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/11 18:48:42 by aben-cha         ###   ########.fr       */
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
    std::string sub;
    std::size_t found;
    std::ofstream outfile(av + ".replace");

    if (!outfile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return ;
    }
    while (std::getline(infile, line))
    {
        if (!infile.eof())
            line += "\n";
        sub = "";
        while (1) 
        {
            if (s1.empty()) {
                outfile << line;
                break ;
            }
            found = line.find(s1);
            if (found == std::string::npos)
            {
                sub += line;
                outfile << sub;
                break ;
            }
            line = line.substr(0, found) + s2 + line.substr(found+ s1.length(), line.length());
            sub += line.substr(0, found + s2.length());
            line = &line[found + s2.length()];
        }
    }
    infile.close();
    outfile.close();
}

