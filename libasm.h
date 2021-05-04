/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <aamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 11:25:33 by aamzil            #+#    #+#             */
/*   Updated: 2020/03/14 11:27:48 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H

# define LIBASM_H
# include <stddef.h>
# include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

//ssize_t		ft_read(int fd, void *buf, size_t count);
//int			ft_strcmp(const char *s1, const char *s2);
//char		*ft_strcpy(char *dest, const char *src);
//char		*ft_strdup(const char *s);
//size_t		ft_strlen(const char *s);
ssize_t		ft_write(int fd, const void *buf, size_t count);
//int			ft_atoi_base(char *str, char *base);

#endif