/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:28:31 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/04 16:52:13 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream> // cout, cerr, endl
#include <fstream>  // file stream library
#include <cstdlib>  // exit function

class Losers
{
private:
    std::string _inputFile;
    std::string _outputFile;

public:
    Losers(std::string file);
    ~Losers();

    void replace(std::string s1, std::string s2);
};

#endif
