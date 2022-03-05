#include<stdio.h>

int main()
{
	int dep,sem;
	char clg;
	printf("\nA.PCE\nB.G.H\nC.YCCE\nPlease select anyone of the above clg :");
	clg=getchar();
	
	switch(clg)
	{
		case 'A':
			printf("\nPCE");
			printf("\n1.cse\n2.M.E\n3.I.T\nSelect Branch :");
			scanf("%d",&dep);
			switch(dep)
			{
				case 1:
					printf("\nCse");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
				case 2:
					printf("\nM.E");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
				}
					break;
				case 3:
					printf("\nI.T");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
					
		case 'B':
			printf("\nG.H.Raisoni");
			printf("\n1.cse\n2.M.E\n3.I.T\nSelect Branch :");
			scanf("%d",&dep);
			switch(dep)
			{
				case 1:
					printf("\nCse");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
				case 2:
					printf("\nM.E");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
				case 3:
					printf("\nI.T");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
				}
					break;
					
		case 'C':
			printf("\nYCCE");
			printf("\n1.cse\n2.M.E\n3.I.T\nSelect Branch :");
			scanf("%d",&dep);
			switch(dep)
			{
				case 1:
					printf("\nCse");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
				case 2:
					printf("\nM.E");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
				case 3:
					printf("\nI.T");
					printf("\n1.semester1\n2.semester2\nSelect the semester : ");
					scanf("%d",&sem);
					switch(sem)
					{
						case 1:
							printf("\nsem1");
							break;
						case 2:
							printf("\nsem2");
							break;
						default:
							printf("\nInvalid");
							break;
					}
					break;
					
					default:
					printf("\ninvalid branch");
					break;
		
			
	}
}
return 0;
}

