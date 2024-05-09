/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:27:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:30:26 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
    {
        std::cout << "Need arguments > ./replace [filename] [s1] [s2]" << std::endl;
        return 1;
    }

    Losers losers(argv[1]);
    losers.replace(argv[2], argv[3]);

    return 0;
}
