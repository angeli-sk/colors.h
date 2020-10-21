/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: epanholz <epanholz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/21 14:02:48 by epanholz      #+#    #+#                 */
/*   Updated: 2020/10/21 16:14:41 by epanholz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

//gcc test.c && ./a.out

int		main(void)
{
	int i = 0;
	int x = 0;

	while (i <= 255)
	{
		printf("\033[38;5;%im printf test 1 number %i \033[m\n", i, i);
		i++;
	}
	printf("\n");

	// while (x <= 255)
	// {
	// 	printf("\033[0;%im printf test 2 number %i \033[m\n", x, x);
	// 	x++;
	// }

	printf("\033[107;38;5;174m i figured \033[m\n");
	printf("\n");
	printf("\033[1;37m bold 1;37\033[m\n");
	printf("\033[3;37m italic 3;37\033[m\n");
	printf("\033[4;37m underline 4;37\033[m\n");
	printf("\n");
	printf("\033[0;40m printf test 0;40 \033[m\n");
	printf("\033[0;100m printf test 0;100\033[m\n");
	printf("\033[0;41m printf test 0;41 \033[m\n");
	printf("\033[0;101m printf test 0;101\033[m\n");
	printf("\033[0;42m printf test 0;42 \033[m\n");
	printf("\033[0;102m printf test 0;102\033[m\n");
	printf("\033[0;43m printf test 0;43 \033[m\n");
	printf("\033[0;103m printf test 0;103\033[m\n");
	printf("\033[0;44m printf test 0;44 \033[m\n");
	printf("\033[0;104m printf test 0;104\033[m\n");
	printf("\033[0;45m printf test 0;45 \033[m\n");
	printf("\033[0;105m printf test 0;105\033[m\n");
	printf("\033[0;46m printf test 0;46 \033[m\n");
	printf("\033[0;106m printf test 0;106\033[m\n");
	printf("\033[0;47m printf test 0;47 \033[m\n");
	printf("\033[0;107m printf test 0;107\033[m\n");
	printf("\n");
	printf("\033[0;30m printf test 0;30 \033[m\n");
	printf("\033[0;90m printf test 0;90 \033[m\n");
	printf("\033[0;31m printf test 0;31 \033[m\n");
	printf("\033[0;91m printf test 0;91 \033[m\n");
	printf("\033[0;32m printf test 0;32 \033[m\n");
	printf("\033[0;92m printf test 0;92 \033[m\n");
	printf("\033[0;33m printf test 0;33 \033[m\n");
	printf("\033[0;93m printf test 0;93 \033[m\n");
	printf("\033[0;34m printf test 0;34 \033[m\n");
	printf("\033[0;94m printf test 0;94 \033[m\n");
	printf("\033[0;35m printf test 0;35 \033[m\n");
	printf("\033[0;95m printf test 0;95 \033[m\n");
	printf("\033[0;36m printf test 0;36 \033[m\n");
	printf("\033[0;96m printf test 0;96 \033[m\n");
	printf("\033[0;37m printf test 0;37 \033[m\n");
	printf("\033[0;97m printf test 0;97 \033[m\n");
	
	return(0);
}