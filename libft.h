/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjohns <yjohns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 17:14:18 by yjohns            #+#    #+#             */
/*   Updated: 2019/08/28 17:53:54 by yjohns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *ptr, int value, size_t num);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				*ft_memccpy(void *dest, const void *src, int c, size_t num);
void				*ft_memmove(void *dest, const void *src, size_t num);
void				*ft_memchr(const void *buffer, int c, size_t count);
int					ft_memcmp(const void *buf1, const void *buf2, size_t count);
size_t				ft_strlen(char const *str);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t num);
char				*ft_strcat(char *dest, const char *append);
char				*ft_strncat(char *str1, const char *str2, size_t count);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *str, int symbol);
char				*ft_strrchr(const char *str, int symbol);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strnstr(const char *str1, const char *str2, size_t len);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int ch);
int					ft_isdigit(int ch);
int					ft_isalnum(int ch);
int					ft_isascii(int ch);
int					ft_isprint(int ch);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar (char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_strnchr(const char *str, int symbol);
t_list				*ft_lstradd(t_list *alst, t_list *new);
int					ft_strlchr(const char *str, int symbol, int num_s);
int					ft_lstlen(t_list *lst);

#endif
