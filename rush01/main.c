#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// int verify(char *s, int arr[16])
// {
//     int i = 0;
//     int p = 0;

//     while (i < 16)
//     {
//         if (s[p] < '1' || s[p] > '4')
//             return 0;
//         arr[i] = s[p] - '0';
//         p++;
//         i++;
//         if (i < 16) {
//             if (s[p] != ' ')
//                 return 0;
//             p++;
//         } 
// 		else 
// 		{
//             if (s[p] != '\0')
//                 return 0;
//         }
//     }
//     return 1;
// }

// void split_clues(int pistas[16], int top[4], int bottom[4], int left[4], int right[4])
// {
//     int i;

//     i = 0;
//     while (i < 4)
//     {
//         top[i] = pistas[i];
//         i++;
//     }
//     i = 0;
//     while (i < 4)
//     {
//         bottom[i] = pistas[4 + i];
//         i++;
//     }
//     i = 0;
//     while (i < 4)
//     {
//         left[i] = pistas[8 + i];
//         i++;
//     }
//     i = 0;
//     while (i < 4)
//     {
//         right[i] = pistas[12 + i];
//         i++;
//     }
// }

// void	all_blank(int mat[4][4])
// {
// 	int	i;
// 	int	j;

// 	j = 0;
// 	i = 0;
// 	while (j < 4)
// 	{
// 		i = 0;
// 		while (i < 4)
// 		{
// 			mat[j][i] = 0;
// 			i++;
// 		}
// 		j++;
// 	}
// }

int my_random_1_to_4(void)
{
    void *p1 = malloc(1);
    void *p2 = malloc(1);
    unsigned long addr = (unsigned long)p1 ^ (unsigned long)p2; 
    free(p1);
    free(p2);
    return ((int)(addr % 4) + 1);
}

int main(void)
{
    // int pistas[16];
    // int top[4];
    // int bottom[4];
    // int left[4];
    // int right[4];
	// int	mat[4][4];
	
	printf("%d", my_random_1_to_4());
	// all_blank(mat);	

    // if (argc != 2 || !verify(argv[1], pistas)) {
    //     write(1, "Error\n", 6);
    //     return 1;
    // }

	return (0);
}


