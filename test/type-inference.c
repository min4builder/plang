extern a = 25;
a int;

extern b = (unsigned char) 26LL;
b unsigned char;

f(d **int) int {
	auto e = *d;
	return *e;
}

extern c *(_ **int) int = &f;
c *(_ **int) int;

