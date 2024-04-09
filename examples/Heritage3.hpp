/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heritage3.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:59:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 16:07:13 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Leg
{
    // add Leg class definition here
};

class Quadruped
{
private:
    std::string _name;

    // can be acess by inherited classes
protected:
public:
    void run();
};