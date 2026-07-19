/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:46:50 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/19 17:09:07 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact create_contact(int index)
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

	Contact phoneContact(firstName, lastName, nickname, phone, dark, index % 8);
	return (phoneContact);
}

std::string	ft_get_input(void)
{

	std::string	opt;
	std::cout << std::endl << "\tChoose a option:" << std::endl;
	std::cout << "\t\t1: Add a contact" << std::endl;
	std::cout << "\t\t2: Search a contact" << std::endl;
	std::cout << "\t\t3: Exit" << std::endl;
	std::cout << "> ";
	std::cin >> opt; 
	return (opt);
}

std::string	ft_format_name(std::string	name)
{
	if (name.size() >= 10)
			return (name.substr(0, 10 - 1).append("."));
	return (name);
}

void	ft_print_table_row(Contact phone)
{
	std::cout << std::left << std::setfill(' ')
		<< std::setw(10) << phone.getUserId() << "|"
		<< std::setw(10) << ft_format_name(phone.getFirstName()) << "|"
		<< std::setw(10) << ft_format_name(phone.getLastName()) << "|"
		<< std::setw(10) << ft_format_name(phone.getNickname()) << "|"
		<< std::endl;
}

void	ft_print_table(PhoneBook phones)
{
	std::cout << std::left << std::setfill(' ')
		<< "|" << std::setw(9) << "Index" << "|"
		<< std::setw(10) << "Fist Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|"
		<< std::endl;
	for (int i = 0; i < 8; i++)
		ft_print_table_row(phones.getPhonesById(i));
}

void	printPhoneDetails(Contact phone)
{
	std::cout << "\tIndex: "<< phone.getUserId() << std::endl;
	std::cout << "\tFirst Name: "<< phone.getFirstName() << std::endl;
	std::cout << "\tLast Name: "<< phone.getLastName() << std::endl;
	std::cout << "\tNickname: "<< phone.getNickname() << std::endl;
	std::cout << "\tPhone Number: " << phone.getPhone() << std::endl;
	std::cout << "\tDarkSecret: " << phone.getDarkSecret() << std::endl;
}

void	searchPhone(PhoneBook phones)
{
	ft_print_table(phones);
		std::string answ;
		std::cout << "Choose '9' to open menu" << std::endl;
		std::cout << "Index: ";
		std::cin >> answ;
		int opt = std::atoi(answ.c_str());
		if (opt == 9)
			return ;
		if (opt > 8 || opt < 0)
		{
			std::cout << "Invalid index, try again." << std::endl;
			return ;
		}
		Contact selected = phones.getPhonesById(opt);
		printPhoneDetails(selected);
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
				Contact phone = create_contact(i);
				phones.add(phone, i);
				i++;
				break;
			}
			case 2:
			{
				searchPhone(phones);
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

