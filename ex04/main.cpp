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

int main()
{
    std::ifstream infile("filename");
    std::string s1;
    std::string s2;

    if (handleError(infile))
        return (1);
    s1 = "text";
    s2 = "cpp01]";
    copyElement(infile, s1, s2);
    return (0);
}