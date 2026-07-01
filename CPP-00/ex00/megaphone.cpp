/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:27:02 by csilva-s          #+#    #+#             */
/*   Updated: 2026/06/30 20:28:31 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <unistd.h>
#include <vector>

int	main(int ac, char *av[])
{
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			av[i][j] = toupper(av[i][j]);
		}
	}
	if (ac == 1)
	{
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
		std::cout << av[i];
	return (0);
}
