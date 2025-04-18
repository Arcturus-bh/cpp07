/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:42:38 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/18 17:39:57 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<std::string> obj(6);

    std::cout << obj.size() << std::endl;
    try {
        std::cout << "[] overload: "<< obj.getTab()[10] << std::endl << std::endl;
    }
    catch (const std::exception& e) {}
    
    for (unsigned int i = 0; i < obj.size(); i++)
        std::cout << obj.getTab()[i] << std::endl;
}