#include "apue.h"
#include <fcntl.h>

char	buf1[] = "abcdefghij";
char	buf2[] = "ABCDEFGHIJ";

int
main(void)
{
	int		fd;

	int		fd1;
    char    *buf;
	if ((fd = creat("file.hole", FILE_MODE)) < 0)
		err_sys("creat error");

	if (write(fd, buf1, 10) != 10)
		err_sys("buf1 write error");
	/* offset now = 10 */

	if (lseek(fd, 16384, SEEK_SET) == -1)
		err_sys("lseek error");
	/* offset now = 16384 */

	if (write(fd, buf2, 10) != 10)
		err_sys("buf2 write error");
	/* offset now = 16394 */

	if ((fd1 = creat("file.nohole", FILE_MODE)) < 0)
		err_sys("creat1 error");
      buf = malloc(16394);
	if (write(fd1, buf, 16394) != 16394)
		err_sys("buf write error");
	exit(0);
}
