/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:06:14 by annmakar          #+#    #+#             */
/*   Updated: 2024/10/31 13:17:54 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*ft_next(char *buffer);
char	*ft_free(char *buffer, char *buf);
void	*ft_calloc(size_t nmemb, size_t size);


#endif