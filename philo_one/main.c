/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 23:01:58 by hjung             #+#    #+#             */
/*   Updated: 2021/02/13 10:25:30 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_one.h"

int	main(int argc, char *argv[])
{
	t_table		table;
	t_philo		*philos;

	if (argc < 5 || argc > 6)
		return (p_error("Error: put right number of arguments\n"));
	if (parse(&table, argv))
		return (p_error("Error: bad argument\n"));
	if (!(philos = malloc(sizeof(t_philo) * table.nbr_philos)))
		return (p_error("Error: malloc failed\n"));
	init_table(&table, philos);
	clean_table(&table, philos);
	return (0);
}
