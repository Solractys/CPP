/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:27:02 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/10 00:15:02 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <unistd.h>
#include <vector>

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			av[i][j] = std::toupper(av[i][j]);
		if (i != 0)
			std::cout << av[i] << std::endl;
	}
	return (0);
}
