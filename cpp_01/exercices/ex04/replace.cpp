/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:27:41 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/04 12:27:42 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Losers::Losers(std::string file) : _inputFile(file), _outputFile(file + ".replace") {}

Losers::~Losers() {}

void Losers::replace(std::string s1, std::string s2)
{
    if (s1 == s2)
    {
        std::cerr << "Error: s1 and s2 are the same." << std::endl;
        exit(EXIT_FAILURE);
    }

    // ifstream expects a const char*, need to use c_str() to convert
    std::ifstream infile(_inputFile.c_str());
    if (infile.is_open())
    {
        std::ofstream outFile(_outputFile.c_str()); // create .replace file
        std::string line;

        /*
         * read line by line from infile and store in line
         * find will return the first position of s1 in line
         * erase the s1 from line and insert s2 in its place
         * find again to see if there are more s1 in line
         */

        while (std::getline(infile, line))
        {
            size_t pos = line.find(s1, 0);
            while (pos != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos = line.find(s1, 0);
            }
            outFile << line << std::endl;
        }
        infile.close();
        outFile.close();
    }
    else
    {
        std::cerr << "Unable to open file." << std::endl;
        exit(EXIT_FAILURE);
    }
}
