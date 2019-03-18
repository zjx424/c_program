#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[128];
	char author[48];
	float price;
	struct Date date;
	char publisher[40];
} book={
	"hello world",
	"zjx",
	48.8,
	{2019,11,11},
	"fuck"
};
int main(int argc, char const *argv[])
{
	printf("%d-%d-%d\n",book.date.year,book.date.month,book.date.day );
	return 0;
}