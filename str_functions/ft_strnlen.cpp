/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:18:08 by gbaud             #+#    #+#             */
/*   Updated: 2021/02/08 09:47:10 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.hpp"

size_t	ft_strnlen(const char *s, size_t size)
{
	size_t i;

	i = 0;
	while (size >= i && s[i] != '\0')
		i++;
	return (i);
}
