#include <iostream>

void memset(void *src, char chr, size_t count)
{
	if (src == nullptr)
		return ;
	char *ptr = static_cast<char *>(src);

	while (count)
	{
		*ptr = chr;
		--count;
		ptr++;
	}
}


int main()
{
	char arr[] = "teststring";
	memset(arr, 'A', 5);
	std::cout << arr << std::endl;
	return 0;
}
