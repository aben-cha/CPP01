/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:08:53 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/10 15:16:19 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_FILE_HPP
#define HANDLE_FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

int handleError(std::ifstream& infile);
void copyElement(std::ifstream& infile, std::string& s1, std::string& s2, std::string& av) ;

#endif