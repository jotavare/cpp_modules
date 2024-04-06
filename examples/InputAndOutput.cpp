/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputAndOutput.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:00:02 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 11:12:47 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * cin cout simplified file descriptors
 * >> << that allows to copy the data flow
 */

#include <iostream>

int main(void)
{
	char	buff[512];

	/*
	 * endl 
	 * CR, short for "carriage return," refers to a control character used in
	 * computing, programming, and communications. It represents the action of
	 * moving the cursor or print head back to the beginning of a line.
	 */

	/*
	 * Other ways of flushing the output:
	 * cout << value << flush; flushes the buffer adds no data
	 * cout << value << ends; inserts a null, then flushes the buffer
	 * cout << value << endl; inserts newline, then flushes the buffer
	 */

	std::cout << "Hello World!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}

