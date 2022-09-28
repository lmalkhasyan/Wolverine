#include <iostream>

void memcpy(void *src, void *dst, size_t count)
{
	if (src == nullptr || dst == nullptr)
		return ;
	char *temp_src = static_cast<char*>(src);
	char *temp_dst = static_cast<char*>(dst);
	while (count)
	{
		*temp_dst = *temp_src;
		++temp_dst;
		++temp_src;
		count--;
	}
}

int main()
{
	char src[] = "teststring";
	char dst[] = "aaaaaaaaaa";
	memcpy(src, dst, 4);
	std::cout << dst << std::endl;
	return 0;
}
