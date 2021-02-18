/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:38:50 by gbaud             #+#    #+#             */
/*   Updated: 2021/02/18 12:20:44 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.hpp"

int		ft_check_base(char *base)
{
	int i;
	int j;
	char compare[] = {'+', '-', ' ', '\r', '\f', '\v', '\n', '\t'};
	
	i = 0;
	while(base[i])
	{
		j = 0;
		while(compare[j])
		{
			if (base[i] == compare[j])
				return (0);
			j++;
		}
		j = 0;
		while(base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_get_value(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int base_len;
	int val;
	int val_len;

	i = 0;
	val = 0;
	val_len = ft_strlen(str);
	base_len = ft_check_base(base);	
	if (base_len > 0)
	{
		while (str[i])
		{
			if (ft_get_value(base, str[i]) == -1)
				return(val);
			val *= base_len;
			val += ft_get_value(base, str[i]);
			i++;
		}
		return (val);
	}
	else
		return (0);
}
