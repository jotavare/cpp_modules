/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:01:54 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:01:55 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * pragma once is a non-standard but widely supported preprocessor directive
 * that tells the compiler to include this file only once in the compilation
 * of a source code file. This is to prevent multiple definitions of the same
 * code, which can lead to errors during compilation;
 */

#pragma once

/*
 * Another was is using ifndef, define and endif preprocessor directives;
 * ifndef checks if the header has been defined, if not, it defines it;
 * define defines the header;
 * endif ends the definition;
 * This is a way to prevent multiple definitions of the same code;
 */

#ifndef HEADER_H
#define HEADER_H

// ...

#endif

/*
 * If in a cpp file we include this header, all the libraries bellow
 * will be copy and pasted in the cpp file;
 */

#include <iostream>
#include <string>
#include <vector>

/*
 * The difference between "" and <>;
 * "" is used for user-defined header files;
 * <> is used for standard library headers that come with the compiler;
 */