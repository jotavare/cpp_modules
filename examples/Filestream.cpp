/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:37:25 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 14:40:51 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream ifs("numbers");
    unsigned int dst;
    unsigned int dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();

// ----------------------------------------------------------------------------

    std::ofstream ofs("test.out");
    ofs << "Hello World!" << std::endl;
    ofs.close();
    
    return (0);
}