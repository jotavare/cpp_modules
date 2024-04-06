/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NonMemberFunctionsAndAttributes.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:14:01 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:18:34 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NONMEMBERFUNCTIONSANDATTRIBUTES_HPP
#define NONMEMBERFUNCTIONSANDATTRIBUTES_HPP

class Sample
{
public:
    Sample(void);
    ~Sample(void);

    static int getNbInst(void);

private:
    static int _nbInst;
};

#endif