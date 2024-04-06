/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:25:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 17:31:53 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_HPP
# define CONST_HPP

class Sample
{
	float const pi;
	int qd;

	Sample(float const pi);
	~Sample(void);

	void bar(void) const;
}

#endif
