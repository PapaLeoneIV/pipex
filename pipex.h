/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <rileone@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:08:29 by rileone           #+#    #+#             */
/*   Updated: 2024/03/06 13:40:02 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/libft.h"
# include "./libft/gnl/get_next_line_bonus.h"
# include "./libft/printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>


typedef struct s_pipex
{
	pid_t	pid;
	pid_t	pid2;

	int		fd;
	int		fd2;

	char	**env;

	char	*infile;
	char	*outfile;

	char	**cmd;
	char	*tmpcmd;
	
	int		pipe[2];
	
	int		counter;
}		t_pipex;

#endif