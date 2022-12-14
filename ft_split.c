/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:23:19 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/03 17:29:00 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* counts the number of words, separates them using substr
and then allocates memory for them using the split */
static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

static void	ft_alloc(char **words, char const *s, char sep)
{
	char		**full;
	char const	*tmp;

	tmp = s;
	full = words;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*full = ft_substr(s, 0, tmp - s);
			s = tmp;
			++full;
		}
	}
	*full = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_alloc(new, s, c);
	return (new);
}

/*static int	motion(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *str, char set)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == set || str[i + 1] == '\0') == 1
			&& (str[i] == set || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char set)
{
	int	i;

	i = 0;
	while ((from[i] == set || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **sbstr, const char *str, char set)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == set || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == set || str[i + j] == '\0') == 0)
				j++;
			(sbstr[word] = (char *)malloc(sizeof(char) * (j + 1)));
			if (sbstr == NULL)
				return (motion(sbstr, word - 1));
			write_word(sbstr[word], str + i, set);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
int	ft_wordcount(const char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != sep)
				i++;
			count++;
		}
	}
	return (count);
}

int	ft_wordlen(char const *str, char sep, int i)
{
	int	len;

	len = 0;
	while (str[i] != sep && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_free(char **sbstr, int j)
{
	while (j-- > 0)
		free(sbstr[j]);
	free(sbstr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**sbstr;
	int		len;
	int		j;

	i = 0;
	j = -1;
	word = ft_wordcount(s, c);
	sbstr = (char **)malloc((word + 1) * sizeof(char *));
	if (sbstr)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		len = ft_size_word(s, c, i);
		sbstr[j] = ft_substr(s, i, len);
		if (!sbstr)
		{
			ft_free(sbstr, j);
			return (NULL);
		}
		i += len;
	}
	sbstr[j] = 0;
	return (sbstr);
}*/