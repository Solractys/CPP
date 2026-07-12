/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:46:50 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/12 19:11:37 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
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

	Contact phoneContact(firstName, lastName, nickname, phone, dark);
	return (phoneContact);
}

std::string	ft_get_input(void)
{

	std::string	opt;
	std::cout << "Escolha uma opção:" << std::endl;
	std::cout << "1: Adicionar um contato" << std::endl;
	std::cout << "2: Buscar um contato" << std::endl;
	std::cout << "3: Sair" << std::endl;
	std::cin >> opt; 
	return (opt);
}

int	main(void)
{
	PhoneBook phones;
	int i = 0;
	while (1)
	{
		int opt = std::atoi(ft_get_input().c_str());
		switch (opt)
		{
			case 1:
			{
				Contact phone = create_contact();
				phones.add(phone, i);
				i++;
				break;
			}
			//TODO: Create a search function
			case 2:
			{
				phones.printPhones();
				break ;
			}
			case 3:
				return (0);
			default:
				continue ;
		}
	}
	return (0);
}

