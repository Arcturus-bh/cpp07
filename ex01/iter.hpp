/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:43:45 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/17 17:45:05 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

template< typename T >
void iter(T* array, std::size_t len, T (*f)(T& ar))
{
    for (std::size_t i = 0; i < len; i++)
        f(array[i]);
}

template< typename T >
void iter_const(T const* array, std::size_t const len, const T (*f)(T const& ar))
{
    for (std::size_t i = 0; i < len; i++)
        f(array[i]);
}

template< typename T, typename B >
void iter(T* array, std::size_t len, B (*f)(T& ar))
{
    for (std::size_t i = 0; i < len; i++)
        f(array[i]);
}

template< typename T, typename B >
void iter_const(T const* array, std::size_t const len, const B (*f)(T const& ar))
{
    for (std::size_t i = 0; i < len; i++)
        f(array[i]);
}