#include <stdio.h>
//#include <fcntl.h>
#include <unistd.h>
#include "wordle.h"
#include "libft.h"

void	pick_word(char *word)
{            
	int	nb;

	nb = 2;
	ft_strcpy(word, "roses");
}

void	prompt_input(char *buf, char *msg)
{
	int		ret;

	printf("%s\n", msg);
	ret = read(0, buf, 5);
	buf[ret] = '\0';
	while (ft_strlen(buf) != 5)
	{
		printf("no\n");
		ret = read(0, buf, 5);
		buf[ret] = '\0';
	}
}

int	main(int argc, char **argv)
{
	char	buf[6];
	
	char	word[6];
	size_t	tries;

	pick_word(word);
	tries = 0;
	prompt_input(buf, "please input a five-letter word");
	tries++;
	printf("inputted: %s\n", buf);
	while (tries < 6)
	{
		prompt_input(buf, "->");
	}
}
