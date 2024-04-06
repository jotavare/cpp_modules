/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PointersToMembers.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:31:47 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:32:33 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINTERSTOMEMBERS_HPP
#define POINTERSTOMEMBERS_HPP

class Sample
{
public:
    int foo;

    Sample(void);
    ~Sample(void);

    void bar(void) const;
};

#endif