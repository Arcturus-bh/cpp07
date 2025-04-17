/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:42:38 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/17 17:42:51 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
T putchar_array(T& c) {
    std::cout << c << std::endl;
    return c;
}

template<typename T>
const T putchar_constarray(const T& c) {
    std::cout << c << std::endl;
    return c;
}

int main() {
    {
        int a[] = {5, 3, 1, 3};
        std::size_t len = sizeof(a) / sizeof(a[0]);
        //
        std::string str[] = {"coucou", "ca va"};
        std::size_t str_len = sizeof(str) / sizeof(str[0]);
        //
        ::iter(a, len, putchar_array<int>);
        ::iter(str, str_len, putchar_array<std::string>);
    }
    {
        std::cout << "\nCONST" << std::endl;
        int const a_const[] = {5, 3, 1, 3};
        std::string const str_const[] = {"coucou const", "ca va const"};
        
        
        
        ::iter_const(a_const, 4, putchar_constarray<const int>);
        ::iter_const(str_const, 2, putchar_constarray<const std::string>);
    }
}