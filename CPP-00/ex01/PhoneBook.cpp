/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:07:43 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/10 01:56:46 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

void	PhoneBook::add(Contact &phone)
{
	_phones[_index] = phone;
	if (_index < 8)
		_index = _index + 1;
	else
		_index = 0;

}
void	PhoneBook::printPhones(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << _phones[i].getFirstName() << std::endl;
		std::cout << _phones[i].getPhone() << std::endl << std::endl;
	}
}

