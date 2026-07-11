/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:46:50 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/11 18:56:59 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact create_contact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phone;
	std::string dark;

	std::cout << "first name: ";
	std::cin >> firstName;

	std::cout << std::endl << "last name: ";
	std::cin >> lastName;

	std::cout << std::endl << "nickname: ";
	std::cin >> nickname;

	std::cout << std::endl << "phone: ";
	std::cin >> phone;

	std::cout << std::endl << "dark secret: ";
	std::cin >> dark;

	Contact teste(firstName, lastName, nickname, phone, dark);
	return (teste);
}

int	main(void)
{
	PhoneBook phones;
	int i = 0;
	while (1)
	{
		Contact phone = create_contact();
		phones.add(phone, i);
		phones.printPhones();
		i++;
	}
	return (0);
}

