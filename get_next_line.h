/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:38:45 by sryou             #+#    #+#             */
/*   Updated: 2022/05/13 14:05:47 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef B_MAX
#  define B_MAX 2147483648
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_strlcat(char *dst, char *src, int dstsize);
char	*ft_strjoin(char *s1, char *s2);

#endif