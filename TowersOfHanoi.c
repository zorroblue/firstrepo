/* THE TOWERS OF HANOI PROBLEM 
   SOLVED USING RECURSION
   
   BELOW CODE CREATED BY RAMESHWAR BHASKARAN( zorro_blue )
   
   SOLUTION ASSUMES 3 POLES(L,C,R) AND N (TO BE ENTERED BY USER)  DISCS
   OBJECTIVE IS TO MOVE ALL N DISCS FROM L TO C 
   FOR PROBLEM STATEMENT ,PLEASE GOOGLE :P
   */

#include<stdio.h>

/*I assume that the function TowersOfHanoi() does the work of transferring the n discs from 'from'
to 'to'
if n discs have to be moved , then first n-1 discs must be moved from from to aux  so that the last disc can be moved from from to to
Reason is because I can't do it in ANY OTHER ARRANGEMENT because the last disc CANNOT be placed above any other disc

LAST NOTE: Believe in the function ;)
*/

void TowersOfHanoi(int n,char from,char to,char aux)
{
	if(n==1) //trivial case 
	{
	printf("Move disc 1 from %c to %c\n",from,to);
	return;
	}
	TowersOfHanoi(n-1,from,aux,to); // move first n-1 discs to aux from from 
	printf("Move disc %d from %c to %c\n",n,from,to); // now move the last disc
	TowersOfHanoi(n-1,aux,to,from); //move the n-1 discs you put in aux back to 'from'
	//the problem reduces to the previous question except that the n becomes n-1  ....the last disc is useless now because there is no point in moving it again
	return;
}

int main()
{
	
	int n; //the number of discs
	scanf("%d",&n);
	TowersOfHanoi(n,'L','C','R');
	return 0;
}
// :D
