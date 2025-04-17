/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:43:45 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/17 16:05:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
T max(T const& a, T const& b) {
    return ((a > b) ? a : b);
}

template< typename T >
T min(T const& a, T const& b) {
    return ((a < b) ? a : b);
}

template< typename T >
void swap(T& a, T& b) {
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}