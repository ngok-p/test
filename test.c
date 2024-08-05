#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    while (1)
    {
        // 1.打开一个文件
        int fd = open("my.txt", O_RDWR);
        if (fd < 0)
        {
            printf("打开文件失败\n");
        }
        else
        {
            printf("打开文件成功 fd=%d\n", fd);
        }

        // 2.关闭文件
        close(fd);
    }
}