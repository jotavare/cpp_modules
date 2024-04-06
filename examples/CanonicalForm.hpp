/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CanonicalForm.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:35:54 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 15:48:16 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICALFORM_HPP
#define CANONICALFORM_HPP

#include <iostream>

class Sample
{
public:
    Sample(void);
    Sample(int const n);
    Sample(Sample const &src);

    ~Sample(void);

    Sample &operator=(Sample const &rhs);

    int getFoo(void) const;
    std::string serialize(void) const;

private:
    int _foo;
};

#endif
