/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:54:29 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 10:57:09 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

// namespaces and group symbols
int	gl_var = 1;
int	f(void) {return 2;}

namespace Foo
{
	int	gl_var = 3;
	int	f(void) {return 4;}
}

namespace Bar
{
	int	gl_var = 5;
	int	f(void) {return 6;}
}

namespace Muf = Bar;

// scope resolution operator '::'
int main(void)
{
	// the first and last one do the same thing, just semantics
	printf("gl_var: [%d]\n", gl_var);
	printf("f():    [%d]\n\n", f() );

	printf("Foo::gl_var: [%d]\n", Foo::gl_var);
	printf("Foo::f():    [%d]\n\n", Foo::f() );

	printf("Bar::gl_var: [%d]\n", Bar::gl_var);
	printf("Bar::f():    [%d]\n\n", Bar::f() );

	printf("Muf::gl_var: [%d]\n", Muf::gl_var);
	printf("Muf::f():    [%d]\n\n", Muf::f() );

	printf("::gl_var: [%d]\n", ::gl_var);
	printf("::f():    [%d]\n", ::f() );
}

