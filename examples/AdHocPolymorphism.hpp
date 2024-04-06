/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adHocPolymorphism.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:47:29 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 14:50:31 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADHOCPOLYMORPHISM_HPP
#define ADHOCPOLYMORPHISM_HPP

class Sample
{
public:
    Sample(void);
    ~Sample(void);

    void bar(char const c) const;
    void bar(int const n) const;
    void bar(float const z) const;
    void bar(Sample const &i) const;
};

#endif
