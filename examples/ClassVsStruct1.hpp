/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassVsStruct1.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:36:16 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:51:32 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSVSSTRUCT1_HPP
#define CLASSVSSTRUCT1_HPP

/*
 * the only difference between a struct and a class is that members of a struct
 * are public by default, while members of a class are private
 */

struct Sample1
{
    int foo;

    Sample1(void);
    ~Sample1(void);

    void bar(void) const;
};

#endif
