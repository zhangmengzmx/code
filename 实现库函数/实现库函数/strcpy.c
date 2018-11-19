#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<assert.h>
//void* my_memmove(char* des,const char* src,int len)
//{
//	assert(des);
//	assert(src);
//	if(src < des&&des < src + len){
//		char* des_ = (char*)des+len-1;
//		const char* src_ = (const char*)src+len-1;
//		while (len){
//			*des_ = *src_;
//			des_--;
//			src_--;
//			len--;
//		}
//	}
//	else{
//		char* des_ = (char*)des;
//		const char* src_ = (const char*)src;
//		while (len){
//			*des_ = *src_;
//			des_++;
//			src_++;
//			len--;
//		}
//	}
//	return des;
//}
//int main()
//{
//	char s[] = "1234567890";
//	my_memmove(s+1, s, 5);
//	printf("%s\n", s);
//	system("pause");
//	return 0;
//}
//void* my_memcpy(void* des,const void* src,int len)
//{
//	assert(des);
//	assert(src);
	/*char* des_ = (char*)des;
	const char* src_=(const char*) src;
	while (len){
		*des_ = *src_;
		des_++;
		src_++;
		len--;
	}*/
//	return des;
//}
//int main()
//{
//	char s[] = "1234567890";
//	my_memcpy(s+1, s, 5);
//	printf("%s\n", s);
//	system("pause");
//	return 0;
//}
//char* my_strchr(const char* s, char c)
//{
//	const char* ps = s;
//	while (ps)
//	{
//		if (*ps != c)
//		{
//			ps++;
//		}
//		else
//		{
//			return (char*)ps;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char str[] = "student";
//	char c = 'e';
//	printf("%s\n", my_strchr(str,c));
//	system("pause");
//	return 0;
//}
//char* my_strstr(const char* des, const char* src)
//{
//	assert(des);
//	assert(src);
//
//  char* s1;
//	char* s2;
//	const char* cdes = des;
//	if (!(*src))
//	{
//		return NULL;
//	}
//	while (cdes)
//	{
//		s1 = (char*)cdes;
//		s2 = (char*)src;
//		while ((*s1) && (*s2) && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cdes;
//		}
//		cdes++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "cd";
//	char *c = my_strstr(str1, str2);
//	printf("%s\n",c );
//	system("pause");
//	return 0;
//}
//int my_strcmp(const char *des, const char *src)
//{
//	assert(des);
//	assert(src);
//	int ret = 0;
//	while (!(ret = *(const unsigned char *)des - *(const unsigned char *)src)
//		&& *des){  
////隐含条件：当dest==src时，才执行*des,隐含des和src都不为\0
//		des++, src++;
//	}
//	if (ret > 0){
//		return 1;
//	}
//	else if (ret < 0){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//int main()
//{
//	int ret = 0;
//	char str1[] = "abcde";
//	char str2[] = "abcd";
//	ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}