#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define ASSERT(b) if (!(b)) { printf("Error at line %d\n", __LINE__); return 1; }

// part 1

int	isalpha_test(void)
{
	int	i;

	i = -1;
	while (i != 256)
	{
		ASSERT(ft_isalpha(i) == isalpha(i));
		i++;
	}
	return (0);
}

int	isdigit_test(void)
{
	int	i;

	i = -1;
	while (i != 256)
	{
		ASSERT(ft_isdigit(i) == isdigit(i));
		i++;
	}
	return (0);
}

int	isalnum_test(void)
{
	int	i;

	i = -1;
	while (i != 256)
	{
		ASSERT(ft_isalnum(i) == isalnum(i));
		i++;
	}
	return (0);
}

int	isascii_test(void)
{
	int	i;

	i = -1;
	while (i != 256)
	{
		ASSERT(ft_isascii(i) == isascii(i));
		i++;
	}
	return (0);
}

int	isprint_test(void)
{
	ASSERT(ft_isprint(0) == 0);
	ASSERT(ft_isprint(127) == 0);
	ASSERT(ft_isprint(32) == 1);
	return (0);
}

int strlen_test(void)
{
	ASSERT(ft_strlen("Hi") == 2);
	ASSERT(ft_strlen("") == 0);
	return (0);
}

int strlcpy_test(void)
{
	char	dst[10];

	ASSERT(ft_strlcpy(dst, "Hello", 2) == strlcpy(dst, "Hello", 2));
	ASSERT(ft_strlcpy(dst, "Learn. Code.", 10) == strlcpy(dst, "Learn. Code.", 10));
	ASSERT(ft_strlcpy(dst, "", 3) == strlcpy(dst, "", 3));
	return (0);
}

int strlcat_test(void)
{
	char dst[10] = "Smafl";
	char dst_2[10] = "Smafl";
	char dst_3[10] = "Smafl";
	char dst_4[10] = "Smafl";
	char dst_5[10] = "Smafl";
	char dst_6[10] = "Smafl";

	ASSERT(ft_strlcat(dst, "H", 10) == strlcat(dst_2, "H", 10));
	ASSERT(ft_strlcat(dst_3, "Hello", 10) == strlcat(dst_4, "Hello", 10));
	ASSERT(ft_strlcat(dst_5, "", 10) == strlcat(dst_6, "", 10));

	return (0);
}

int strnstr_test(void)
{
	// char haystack_1[] = "Multiplication, division, and remainder";
	// char find_and_1[] = "and";
	// char find_space_1[] = "space";
 
	// char haystack_2[] = "";
	// char needle_2[] = "";
 
	// char haystack_3[] = "some string";
	// char needle_3[] = "";
 
	// char haystack_4[] = "";
	// char needle_4[] = "some string";

	// char haystack_5[30] = "acabcd";
	// char needle_5[2] = "cd";
	
	// ASSERT(ft_strnstr(haystack_1, find_and_1, ft_strlen(haystack_1)) == strnstr(haystack_1, find_and_1, strlen(haystack_1)));
	// ASSERT(ft_strnstr(haystack_1, find_space_1, ft_strlen(haystack_1)) == strnstr(haystack_1, find_space_1, strlen(haystack_1)));
	// ASSERT(ft_strnstr(haystack_2, needle_2, ft_strlen(haystack_2)) == strnstr(haystack_2, needle_2, ft_strlen(haystack_2)));
	// ASSERT(ft_strnstr(haystack_3, needle_3, ft_strlen(haystack_3)) == strnstr(haystack_3, needle_3, ft_strlen(haystack_3)));
	// ASSERT(ft_strnstr(haystack_4, needle_4, ft_strlen(haystack_4)) == strnstr(haystack_4, needle_4, ft_strlen(haystack_4)));
	// ASSERT(ft_strnstr(haystack_5, needle_5, 8) == strnstr(haystack_5, needle_5, 8));
	// printf("ft_1_find_and: %s\n", ft_strnstr(haystack_1, find_and_1, ft_strlen(haystack_1)));
	// printf("ft_1_find_space: %s\n", ft_strnstr(haystack_1, find_space_1, ft_strlen(haystack_1)));
	// printf("%s\n", ft_strnstr(haystack_5, needle_5, 5));
	return (0);
}

int toupper_test(void)
{
	ASSERT(ft_toupper('c') == 'C');
	ASSERT(ft_toupper('D') == 'D');
	ASSERT(ft_toupper('+') == '+');
	ASSERT(ft_toupper(-1) == -1);
	return (0);
}

int tolower_test(void)
{
	ASSERT(ft_tolower('c') == 'c');
	ASSERT(ft_tolower('D') == 'd');
	ASSERT(ft_tolower('+') == '+');
	ASSERT(ft_tolower(-1) == -1);
	return (0);
}

int atoi_test(void)
{
	ASSERT(ft_atoi(" ---+--+1234ab567") == 0);
	ASSERT(ft_atoi(" --+--+01234ab567") == 0);
	ASSERT(ft_atoi(" ---+--+ab567") == 0);
	ASSERT(ft_atoi(" 01234ab567") == 1234);
	ASSERT(ft_atoi("hf01234ab567") == 0);
	ASSERT(ft_atoi("234ab567") == 234);
	ASSERT(ft_atoi(" ") == 0);
	ASSERT(ft_atoi("") == 0);
	ASSERT(ft_atoi("-2147483648") == -2147483648);
	ASSERT(ft_atoi("21474836470") == atoi("21474836470"));
	return (0);
}

int memset_test(void)
{
	char dest[10] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	int	i;

	i = 0;
	ASSERT(ft_memset(dest, 1, 5) == dest);
	while (i != 10)
	{
		ASSERT(!(i < 5 && dest[i] != 1));
		ASSERT(!(i >= 5 && dest[i] == 1));
		i++;
	}
	return (0);
}

int memcpy_test(void)
{
	const char src[10] = "123456789";
	char dest[10] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	int	i;

	i = 0;
	ASSERT(ft_memcpy(dest, src, 5) == dest);
	while (i != 10)
	{
		ASSERT(!(i < 5 && dest[i] != src[i]));
		ASSERT(!(i >= 5 && dest[i] != 2));
		i++;
	}
	return (0);
}

int bzero_test(void)
{
	char str[50] = "This is string.h library function";
	int	i;

	i = 0;
	ft_bzero(str, 10);
	while (i != 11)
	{
		ASSERT(!(i < 10 && str[i] != 0));
		ASSERT(!(i >= 10 && str[i] == 0));
		i++;
	}
	return (0);
}

int strchr_test(void)
{
	const char s[] = "space";

	ASSERT(ft_strchr(s, 's') == strchr(s, 's'));
	ASSERT(ft_strchr(s, '\0') == strchr(s, '\0'));
	ASSERT(ft_strchr(s, 't') == strchr(s, 't'));
	return (0);
}

int strrchr_test(void)
{
	const char s[] = "space";

	ASSERT(ft_strchr(s, 's') == strchr(s, 's'));
	ASSERT(ft_strchr(s, '\0') == strchr(s, '\0'));
	ASSERT(ft_strchr(s, 't') == strchr(s, 't'));
	return (0);
}

int strncmp_test(void)
{
	ASSERT(ft_strncmp("a", "8", 1) > 0);
	ASSERT(ft_strncmp("", "1", 1) < 0);
	ASSERT(ft_strncmp("", "", 1) == 0);
	ASSERT(ft_strncmp("hello", "hello world", 10) < 0);
	ASSERT(ft_strncmp("hello !world", "hello world", 6) == 0);
	return (0);
}

int memchr_test(void)
{
	const char s[] = "space";

	ASSERT(ft_memchr(s, 's', 5) == memchr(s, 's', 5));
	ASSERT(ft_memchr(s, 's', 0) == memchr(s, 's', 0));
	ASSERT(ft_memchr(s, '\0', 5) == memchr(s, '\0', 5));
	ASSERT(ft_memchr(s, '\0', 6) == memchr(s, '\0', 6));
	ASSERT(ft_memchr(s, 't', 5) == memchr(s, 't', 5));
	return (0);
}

int memcmp_test(void)
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	ASSERT(ft_memcmp("a", "8", 1) > 0);
	ASSERT(ft_memcmp("", "1", 1) < 0);
	ASSERT(ft_memcmp("", "", 1) == 0);
	ASSERT(ft_memcmp("hello", "hello world", 10) < 0);
	ASSERT(ft_memcmp("hello !world", "hello world", 6) == 0);
	ASSERT(ft_memcmp(s2, s3, 4) != 0);

	// printf("%d\n", ft_memcmp("a", "8", 1));
	// printf("%d\n", ft_memcmp("", "1", 1));
	// printf("%d\n", ft_memcmp("", "", 1));
	// printf("%d\n", ft_memcmp("hello", "hello world", 10));
	// printf("%d\n", ft_memcmp("hello !world", "hello world", 6));
	// printf("\n");
	// printf("%d\n", memcmp("a", "8", 1));
	// printf("%d\n", memcmp("", "1", 1));
	// printf("%d\n", memcmp("", "", 1));
	// printf("%d\n", memcmp("hello", "hello world", 10));
	// printf("%d\n", memcmp("hello !world", "hello world", 6));
	return (0);
}

// int memmove_test(void)
// {
// 	char buf1[] = "abcdefghijklmnopqrst";
// 	char buf2[] = "lorem ipsum dolor sit amet";

// 	printf("%s\n", ft_memmove(buf1 + 3, buf1, 4));
// 	printf("%s\n", ft_memmove(buf2 + 1, "consectetur", 5));
// 	return (0);
// }

// part 2

int itoa_test(void)
{
	// printf("%s\n", ft_itoa(INT_MAX));
	// printf("%s\n", ft_itoa(INT_MIN));
	// printf("%s\n", ft_itoa(346));
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(-4756));
	return (0);
}

int substr_test(void)
{
	// char s[7] = "Hellol";

	// printf("%s\n", ft_substr(s, 3, 3));
	return (0);
}

// main
int main(void)
{
	int	n_tests_failed;

	n_tests_failed = 0;
	n_tests_failed += isalpha_test();
	n_tests_failed += isdigit_test();
	n_tests_failed += isalnum_test();
	n_tests_failed += isascii_test();
	n_tests_failed += isprint_test();
	n_tests_failed += strlen_test();
	n_tests_failed += strlcpy_test();
	n_tests_failed += strlcat_test();
	n_tests_failed += strnstr_test();
	n_tests_failed += toupper_test();
	n_tests_failed += tolower_test();
	n_tests_failed += atoi_test();
	n_tests_failed += memset_test();
	n_tests_failed += memcpy_test();
	n_tests_failed += bzero_test();
	n_tests_failed += strchr_test();
	n_tests_failed += strrchr_test();
	n_tests_failed += strncmp_test();
	n_tests_failed += memchr_test();
	n_tests_failed += memcmp_test();
	n_tests_failed += itoa_test();
	n_tests_failed += substr_test();

	if (n_tests_failed == 0)
	{
		printf("Nice!\n");
	}
	else
	{
		printf("Number of failed tests: %d\n", n_tests_failed);
	}
	return (n_tests_failed);
}
