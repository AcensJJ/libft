/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lib.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:05:15 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:46:54 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define LIB_H

# include <strings.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

void						ft_bzero(void *s, size_t n);
void						*calloc(size_t count, size_t size);
void						*ft_memccpy(void *dst, const void *src, int c, size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						*ft_memmove(void *dst, const void *src, size_t len);
void						*ft_memset(void *b, int c, size_t len);
size_t						ft_strlcat(char *dest, const char *src, size_t size);
size_t						ft_strlen(char *str);
int							ft_count_trim(char const *s1, char const *set);
int							ft_atoi(const char *str);
int							ft_isalnum(int c);
int							ft_isalpha(int c);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isprint(int c);
int							ft_tolower(int c);
int							ft_toupper(int c);
int							ft_strncmp(char *s1, char *s2, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
char						*strchr(const char *s, int c);
char						*ft_strcpy(char *dest, const char *src);
char						*ft_strdup(const char *src);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strnstr(const char *haystack, const char *needle, size_t len);
char						*strrchr(const char *s, int c);
char						*ft_substr(char const *s, unsigned int start, size_t len);
char						*ft_strtrim(char const *s1, char const *set);
int							ft_is_charset(char *str, char *charset);
int							ft_to_malloc(char const *str, char *charset);
char						*ft_copy_w(char const *str, int n, int *sign, char *dest);
void						ft_do(char const *str, char *charset, char **split, int *sign);
char						**ft_split(char const *s, char c);
unsigned	int				ft_strlcpy(char *dest, const char *src, size_t size);
void						ft_config_ptr(long long nb, long long i, long long j, char *ptr);
int							ft_count_itoa(long long n);
char						*ft_itoa(int n);

#endif