#include "libft.h"

static int	ft_countWords(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		w++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			w++;
		i++;
	}
	if (w == 0)
		return (1);
	return (w);
}

static char	*ft_putWord(char const *s, int *i, char c)
{
	int		j;
	char	*str;
	int		l;

	l = ft_strlen(s);
	j = 0;
	while (s[j] != c && s[j])
		j++;
	str = (char *)malloc((1 + l) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (s[*i] != c && s[*i])
	{
		str[j++] = s[*i];
		*i += 1;
	}
	str[j] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}
/*static	char	*ft_putWord(const char *s, char c, int *i)
{
	char	*str;
	int		k;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (s[*i] != c && s[*i])
	{
		str[k] = s[*i];
		k++;
		*i += 1;
	}
	str[k] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}*/

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**strsplit;

	i = 0;
	j = 0;
	words = ft_countWords(s, c);
	if (!s)
		return (NULL);
	strsplit = (char **)malloc((words + 1) * sizeof(char *));
	if (!strsplit)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < words && s[i])
	{
		strsplit[j] = ft_putWord(s, &i, c);
			j++;
	}
	strsplit[j] = NULL;
	return (strsplit);
}

/*void	ft_try(char *str, char charset)
{
	char	**tab;
	int		i;
	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
int	main(void)
{
	 ft_try("split  ||this|for|me|||||!|", '|');
	 return (0);
}*/
