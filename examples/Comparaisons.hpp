/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comparaisons.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:01:51 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:03:56 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARAISONS_HPP
#define COMPARAISONS_HPP

class Sample
{
    public:
        Sample(int v);
        ~Sample(void);

        int getFoo(void) const;
        int compare(Sample *other) const;
    
    private:
        int _foo;
};

#endif