#include<stdio.h>
#include<conio.h>
void hanoi(int, char, char, char);
void main()
{
	int disk;
	clrscr();
	printf("Enter the number of disks: ");
	scanf("%d", &disk);
	printf("\nTower of Hanoi for %d number of disks:\n", disk);
	printf("\nRod 1= A, Rod 2= B, Rod 3= C\n");
	hanoi(disk, 'A', 'B', 'C');
	getch();
}
void hanoi(int n, char src, char dest, char aux)
{
	if (n <= 0)
		printf("Illegal number of disks !!!");
	if (n == 1)
		printf("\nMove disk 1 from %c to %c", src, aux);
	if (n > 1)
	{
		hanoi(n - 1, src, aux, dest);
		printf("\nMove disk %d from %c to %c", n, src, aux);
		hanoi(n - 1, dest, src, aux);
	}
}