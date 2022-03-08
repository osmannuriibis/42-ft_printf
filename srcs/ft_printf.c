/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:56:59 by oibis             #+#    #+#             */
/*   Updated: 2022/03/08 20:59:42 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

void parse_format(char c, va_list args, size_t *tot)
{
	if (c == 'c')
		put_char(va_arg(args, int), tot);
	else if (c == 's')
		put_string(va_arg(args, char *), tot);
	else if (c == 'p')
		put_pointer(va_arg(args, void *), tot);
	else if (c == 'd' || c == 'i')
		put_int(va_arg(args, int), tot);
	else if (c == 'u')
		put_unsigned_decimal(va_arg(args, int), tot);
	else if (c == 'x')
		put_hex_low(va_arg(args, unsigned long), tot);
	else if (c == 'X')
		put_hex_up(va_arg(args, unsigned long), tot);
	else if (c == '%')
		*tot += write(1, &c, 1);

	/*  */
}

void parse_input(const char *str, va_list args, size_t *tot)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '%' && str[++index])
			parse_format(str[index], args, tot);
		else
			ft_putchar_tot(str[index], tot);
		index++;
	}
} /* */

int ft_printf(const char *str, ...)
{
	va_list args;
	// char *s;
	size_t tot;

	// s = ft_strdup(str);
	// if (!s)
	//	return (0);

	va_start(args, str);
	tot = 0;
	parse_input(str, args, &tot);
	// free(s);
	return ((int)tot);
}
/*
int main()
{
	char *s = "osman";

	printf("\nchar:\n");
	printf("%c\n", '\\');
	ft_printf("%c\n", '\\');

	printf("\nstring:\n");
	printf("%s\n", "1000");
	ft_printf("%s\n", "1000");

	printf("\ninteger:\n");
	printf("%i\n", -1000);
	ft_printf("%i\n", -1000);

	printf("\nunsigned decimal:\n");
	printf("%u\n", 1000);
	ft_printf("%u\n", 1000);

	printf("\ndecimal:\n");
	printf("%d\n", printf("%u\n", -1000));
	printf("%d\n", ft_printf("%u\n", -1000));

	printf("\nhexa_low:\n");
	printf("%x\n", 1000);
	ft_printf("%x\n", 1000);

	printf("\nhexa_UP:\n");
	printf("%X\n", -1000);
	ft_printf("%X\n", -1000);

	printf("\npointer:\n");
	printf("%i : ", printf("%p\n", s));
	printf("%i : ", ft_printf("%p\n", s));

	printf("\npercent:\n");
	printf("%%\n");
	ft_printf("%%\n");
} */
