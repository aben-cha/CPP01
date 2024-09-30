/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:10:36 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:15:22 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_file.hpp"

int handleError(std::ifstream& infile)
{
    if (!infile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return (1);
    }
    return (0);
}

void copyElement(std::ifstream& infile, std::string& s1, std::string& s2) 
{
    std::string line;
    std::size_t found;
    std::string sub;
    std::size_t y;
    std::ofstream outfile("filename.replace");

    if (!outfile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return ;
    }
    while (std::getline(infile, line))
    {
        while (1) 
        {
            found = line.find(s1);
            if (found == std::string::npos) {
                outfile << line << std::endl;
                break ;
            }
            sub = line.substr(0, found);
            sub.insert(found, s2);
            y = found + s1.length();
            sub += line.substr(y, line.length());
            line = sub;
        }
    }
    infile.close();
    outfile.close();
}