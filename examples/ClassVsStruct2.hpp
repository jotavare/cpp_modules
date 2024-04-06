/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassVsStruct2.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:36:16 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:48:28 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSVSSTRUCT2_HPP
#define CLASSVSSTRUCT2_HPP

class Sample2
{
public:
    int foo;

    Sample2(void);
    ~Sample2(void);

    void bar(void) const;
};

#endif
