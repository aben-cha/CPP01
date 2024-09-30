/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:08:53 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/30 22:13:13 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <fstream>
#include <string>

int handleError(std::ifstream& infile);
void copyElement(std::ifstream& infile, std::string& s1, std::string& s2);

#endif