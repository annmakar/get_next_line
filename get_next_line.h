/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:06:14 by annmakar          #+#    #+#             */
/*   Updated: 2024/12/08 02:12:41 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <sys/types.h>
# include <sys/uio.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*ft_next(char *buffer);
char	*ft_free(char *buffer, char *buf);
void	*ft_calloc(size_t nmemb, size_t size);
char	*read_file(int fd, char *res);
void	*ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
