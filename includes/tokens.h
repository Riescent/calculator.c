/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:35:52 by vfries            #+#    #+#             */
/*   Updated: 2023/01/09 02:35:48 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENS_H
# define TOKENS_H

enum e_type
{
	NUMBER = 0,
	OPERATOR = 1,
	PARENTHESES = 2,
};

enum e_operators_priorities
{
	PLUS_MINUS_PRIORITY = 0,
	MULT_DIV_PRIORITY = 1,
	PARENTHESES_PRIORITY = 255,
};

typedef struct s_token
{
	int			data;
	enum e_type	type;
}	t_token;

#endif
