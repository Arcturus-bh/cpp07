/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:59:08 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/18 17:40:55 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array {
    private:
        T* _tab;
        unsigned int _len;

    public:
        // CONS & DEST
        Array()
        {
            this->_len = 1;
            this->_tab = new T;
        };

        Array(unsigned int n)
        {
            this->_len = n;
            this->_tab = new T[this->_len];
            for (unsigned int i = 0; i < this->_len; i++)
                this->_tab[i] = "something";
        };

        ~Array()
        {
            if (this->_len > 0)
                delete[] this->_tab;
        };

        Array(const Array& other)
        {
            *this = other;
        };

        // OVERLOAD
        T& operator=(const Array& other)
        {
            if (this->_len)
            {
                delete[] this->_tab;
            }
            this->_len = other.getLen();
            this->_tab = new T[this->_len];
            if (this != &other)
            {
                for (int i = 0; i < other.getLen(); i++)
                    this->_tab[i] = other.getTab()[i];
            }
            return *this;
        }

        T& operator[](unsigned int index) const
        {
            if (index > this->_len)
                throw std::exception("ERROR - index out of range");
            return *this->_tab[index];
        }

        // GETTER
        T& getTab() const
        {
            return *this->_tab;
        }
        
        unsigned int getLen() const
        {
            return this->_len;
        }
        
        // METHOD
        unsigned int size() const
        {
            unsigned int i = 0;
            for (; i < this->_len; i++)
                ;
            return i;
        }
};
