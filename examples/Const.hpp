/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:25:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:02:34 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_HPP
#define CONST_HPP

class Sample
{
	public:
		float const pi;
		int qd;

		Sample(float const pi);
		~Sample(void);

		void bar(void) const;
};

#endif
