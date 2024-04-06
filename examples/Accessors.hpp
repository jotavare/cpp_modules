/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Accessors.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:51:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:53:29 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCESSORS_HPP
#define ACCESSORS_HPP

class Sample
{
public:
    Sample(void);
    ~Sample(void);

    int getFoo(void) const;
    void setFoo(int v);

private:
    int _foo;
};

#endif