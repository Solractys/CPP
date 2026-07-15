/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:46:50 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/15 20:41:29 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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
	std::cout << "\tChoose a option:" << std::endl;
	std::cout << "\t\t1: Add a contact" << std::endl;
	std::cout << "\t\t2: Search a contact" << std::endl;
	std::cout << "\t\t3: Exit" << std::endl;
	std::cout << "> ";
	std::cin >> opt; 
	return (opt);
}

// TODO: Funcao pra formatar o nome / truncar se necessário
std::string	ft_format_name(std::string	name)
{
	if (name.length() =< 10)
			return (name);
	// TODO: Achar um método pra truncar a string e substituir o ultimo char por '.'
	name.truncate() // ???
}

void	ft_print_table_row(Contact phone)
{
	std::cout << std::left << std::setfill(' ')
		<< std::setw(10) << phone.getUserId() << "|"
		<< std::setw(10) << phone.getFirstName() << "|"
		<< std::setw(10) << phone.getLastName() << "|"
		<< std::setw(10) << phone.getNickname() << "|"
		<< std::endl;


}

// TODO: Mostrar todos os contatos
// TODO: pegar o input do user com o id do contato
// TODO: mostrar todos os dados do contato de acordo com o id especificado
void	ft_print_table(PhoneBook phones)
{
	// TODO: Desenhar as colunas com width = 10
	// 		separadas por pipe |
	// 	req: Columns [index, firstName, lastName, nickname]
	std::cout << "________________________________________________________" << std::endl;
	std::cout << "|  Index  |  First Name  |  Last Name  |  Nickname  |"
		std::cout << "________________________________________________________" << std::endl;
	// TODO: Criar funćao que printa somente uma linha com o contato
	for (int i = 0; i < 8; i++)
		ft_print_table_row(phone);
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
			case 2:
			{
				//TODO: Implementar os indices [x]
				// Criar a funćão que printa a tabela com as 4 colunas [ ]
				// 
				ft_print_table(phones);
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

