/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:51:43 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:46 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

// libraries
#include <cstdlib>  // EXIT_SUCCESS
#include <iomanip>  // std::setw
#include <iostream> // std::cout, std::cin, std::endl, std::string
#include <limits.h> // INT_MAX

// colored output
#define RESET "\033[0m"    // Reset color and style
#define RED "\033[1;31m"   // Bold red color
#define GREEN "\033[1;32m" // Bold green color
#define BOLD "\033[1m"     // Bold style

class Contact
{
public:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;
};

#endif
