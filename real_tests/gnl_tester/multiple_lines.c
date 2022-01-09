#include "../get_next_line.h"
#include "../../libft42/libft.h"

int main(void)
{
    int res;

    write(1, "Test multiple_lines file\n", 26);
    int     fd = open("Files/multiple_lines.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 18);
    printf("fd = %d\n", fd);
    res = test_compare(fd, "Lorem ipsum dolor sit amet. Et nulla voluptate in Quis voluptatem At debitis culpa est atque ducimus quo laboriosam enim cum dolore velit et voluptatem necessitatibus! Nam architecto nihil qui labore tenetur eos illo quia ab dolore ullam id dolorum eligendi qui labore porro. Vel sunt galisum sed vitae dignissimos et error doloremque.\n");
    printf("resultat du test L1= %d\n", res);
    res = test_compare(fd, "\n");
    printf("resultat du test L2= %d\n", res);
    res = test_compare(fd, "Qui repellat ipsum aut iure accusantium galisum neque. In dolor voluptas est cupiditate quos aut voluptas accusamus in eius expedita vel atque illum non corporis soluta At cumque esse.\n");
    printf("resultat du test L3= %d\n", res);
    res = test_compare(fd, "Eum iste distinctio eos pariatur totam qui modi enim qui optio ipsam eos fugiat porro et maiores quia ea praesentium inventore. Eum recusandae explicabo aut deleniti velit non nobis molestias At omnis earum est deserunt reiciendis non omnis facere. At suscipit aperiam et cupiditate dolores aut quam odit non numquam nulla ut nesciunt omnis est placeat provident.");
    printf("resultat du test L4= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L5= %d\n", res);
    close(fd);
    return (res);
}