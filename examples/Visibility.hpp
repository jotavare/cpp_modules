/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visibility.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:20:32 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:26:14 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISIBILITY_HPP
#define VISIBILITY_HPP

class Sample
{
public:
    int publicFoo;

    Sample(void);
    ~Sample(void);

    void publicBar(void) const;

private:
    int _privateFoo;

    void _privateBar(void) const;
};

#endif