#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()

{
	int i,j,k,l,SCORE=0,maxscore=0,temp=0,dongu=1,SCORE2=0,counter=0;
	int tablo[4][4] = {(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)};
	int tablo2[4][4] = {(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)};
	int random=1;
	srand(time(NULL));
	i=rand()%4;
	j=rand()%4;
	tablo[i][j]=2;
	do
	{
		i=rand()%4;
		j=rand()%4;
		if(tablo[i][j]==0)
		{
			tablo[i][j]=2;
			random=0;
		}
		else if(tablo [i][j]==2)
		{
			tablo[i][j]=4;
			random=0;
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
			}
			
		}
		
	}
	while(random==1);
	
	
	
	char girdi;
	
	
	
	printf("  \n\n                          2048 \n \n");
	
	for(i=0;i<4;i++)
	{
		printf("   \n \n   ");
		for(j=0;j<4;j++)
		{
			printf("|   %4d   | ", tablo[i][j]);
		
			
			
			
		}
	
		
	}
	
	printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
	while(dongu==1)
	{
		for(i=0;i<4;i++)
	{
		printf("   \n \n   ");
		for(j=0;j<4;j++)
		{
			printf("|   %4d   | ", tablo2[i][j]);
		}
	}
	
	printf("\n \n");
	
			for(i=0;i<4;i++)
	{
		printf("   \n \n   ");
		for(j=0;j<4;j++)
		{
			printf("|   %4d   | ", tablo[i][j]);
		}
	}
	printf("       SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
	
	

	
	
	girdi=getch();
	if(girdi=='A' || girdi =='a')
	{
		
		for(i=0;i<4;i++)
	  		 {
			
				for(j=0;j<4;j++)
				{
					tablo2[i][j]=tablo[i][j];
				}
			}	
		for(i=0;i<4;i++)
		{
			for(l=0;l<4;l++)
			{
				for(j=3;0<j;j--)
				{
					if(tablo[i][j-1]==0)
					{
						tablo[i][j-1]=tablo[i][j];
						tablo[i][j]=0;
					
					}
				}
			}
			
			for(k=1;k<4;k++)
			{
				if(tablo[i][k]==tablo[i][k-1])
				{
				tablo[i][k-1]=tablo[i][k]*2;
				tablo[i][k]=0;
				SCORE+=tablo[i][k-1];
				
				
				}
			}
			
			for(l=0;l<4;l++)
			{
				for(j=3;0<j;j--)
				{
					if(tablo[i][j-1]==0)
					{
						tablo[i][j-1]=tablo[i][j];
						tablo[i][j]=0;
					}
				}
			}
		}
		if(SCORE>maxscore)
		{
			maxscore=SCORE;
			
		}
			
		random=1;
		 do
		 {
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
				random=2;
			}
		}	
		while(random==1);	
				
				
			
		
			for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					printf("|   %4d   | ", tablo[i][j]);
				}
			}
			printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
			system("cls");
		
	}
	if(girdi=='S' || girdi =='s')
		{
			
			for(i=0;i<4;i++)
	  		 {
			
				for(j=0;j<4;j++)
				{
					tablo2[i][j]=tablo[i][j];
				}
			}	
		for(j=0;j<4;j++)
		{
			for(l=0;l<4;l++)
			{
				for(i=1;i<4;i++)
				{
					if(tablo[i][j]==0)
					{
						tablo[i][j]=tablo[i-1][j];
						tablo[i-1][j]=0;
					
					}
				}
			}
			
			for(k=3;0<k;k--)
			{
				if(tablo[k][j]==tablo[k-1][j])
				{
				tablo[k][j]=tablo[k-1][j]*2;
				tablo[k-1][j]=0;
				SCORE+=tablo[k][j];
				
				}
			}
			
			for(l=0;l<4;l++)
			{
				for(i=1;i<4;i++)
				{
					if(tablo[i][j]==0)
					{
						tablo[i][j]=tablo[i-1][j];
						tablo[i-1][j]=0;
					}
				}
			}
		}
			if(SCORE>maxscore)
		{
			maxscore=SCORE;
			
		}
		random=1;
		 do
		 {
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
				random=2;
			}
		}	
		while(random==1);	
				
				
			
		
			for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					printf("|   %4d   | ", tablo[i][j]);
				}
			}
		printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
		system("cls");
		
		
		
		
	}	
	
		if(girdi=='W' || girdi =='w')
	{
		
		for(i=0;i<4;i++)
	  		 {
			
				for(j=0;j<4;j++)
				{
					tablo2[i][j]=tablo[i][j];
				}
			}	
		for(j=0;j<4;j++)
		{
			for(l=0;l<4;l++)
			{
				for(i=3;0<i;i--)
				{
					if(tablo[i-1][j]==0)
					{
						tablo[i-1][j]=tablo[i][j];
						tablo[i][j]=0;
					
					}
				}
			}
			
			for(k=1;k<4;k++)
			{
				if(tablo[k][j]==tablo[k-1][j])
				{
				tablo[k-1][j]=tablo[k][j]*2;
				tablo[k][j]=0;
				SCORE+=tablo[k-1][j];
				
				
				}
			}
			
			for(l=0;l<4;l++)
			{
				for(i=3;0<i;i--)
				{
					if(tablo[i-1][j]==0)
					{
						tablo[i-1][j]=tablo[i][j];
						tablo[i][j]=0;
					}
				}
			}
		}
			if(SCORE>maxscore)
		{
			maxscore=SCORE;
			
		}
		random=1;
		 do
		 {
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
				random=2;
			}
		}	
		while(random==1);	
				
				
			
		
			for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					printf("|   %4d   | ", tablo[i][j]);
				}
			}
			printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
			system("cls");
		
	}	
	
	
	if(girdi=='D' || girdi =='d')
		
		{
			for(i=0;i<4;i++)
	  		 {
			
				for(j=0;j<4;j++)
				{
					tablo2[i][j]=tablo[i][j];
				}
			}	
		for(i=0;i<4;i++)
		{
			for(l=0;l<4;l++)
			{
				for(j=1;j<4;j++)
				{
					if(tablo[i][j]==0)
					{
						tablo[i][j]=tablo[i][j-1];
						tablo[i][j-1]=0;
					
					}
				}
			}
		
			for(k=3;0<k;k--)
			{
				if(tablo[i][k]==tablo[i][k-1])
				{
				tablo[i][k]=tablo[i][k-1]*2;
				tablo[i][k-1]=0;
				SCORE+=tablo[i][k];
				
				}
			}
			
			for(l=0;l<4;l++)
			{
				for(j=1;j<4;j++)
				{
					if(tablo[i][j]==0)
					{
						tablo[i][j]=tablo[i][j-1];
						tablo[i][j-1]=0;
					}
				}
			}
		}
			if(SCORE>maxscore)
		{
			maxscore=SCORE;
			
		}
		random=1;
		 do
		 {
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
				random=2;
			}
		}	
		while(random==1);	
				
				
			
		
			for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					printf("|   %4d   | ", tablo[i][j]);
				}
			}
		printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
		system("cls");
		
	}
	if(girdi=='X' || girdi =='x')
	{
		int tablo[4][4] = {(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0)};
		int random=1;
		i=rand()%4;
		j=rand()%4;
		tablo[i][j]=2;
		do
		{
		i=rand()%4;
		j=rand()%4;
		if(tablo[i][j]==0)
		{
			tablo[i][j]=2;
			random=0;
		}
		else if(tablo [i][j]==2)
		{
			tablo[i][j]=4;
			random=0;
			i=rand()%4;
			j=rand()%4;
			if(tablo[i][j]==0)
			{
				tablo[i][j]=2;
				
			}
			
		}
		
		}
	while(random==1);
	
		for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					printf("|   %4d   | ", tablo[i][j]);
				}
			}
			SCORE=0;
		printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE,maxscore);
		system("cls");	
		
	}
		if(girdi=='R' || girdi =='r')
		{
		
		for(i=0;i<4;i++)
	  		 {
			printf("   \n \n   ");
				for(j=0;j<4;j++)
				{
					tablo[i][j]=tablo2[i][j];
					
					printf("|   %4d   | ", tablo2[i][j]);
				}
			}
			SCORE=temp;
			
			printf(" \n\n        SCORE :   %4d       Highest Score  :   %4d   ",          SCORE2,maxscore);
			system("cls");
		}
		if(girdi=='E' || girdi =='e')
		{
			return 0;
			
		}
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(tablo[i][j]==tablo[i][j+1] || tablo[i][j]==0 || tablo[i][j+1]==0)
			{
				counter++;
			}
			if(tablo[j+1][i]==tablo[j][i] || tablo[j+1][i]==0 || tablo[j][i]==0)
			{
				counter++;
			}
			
		}
		
	}
	if(counter==0)
	{
		printf("\n \n GAME OVER");
		
		return 0;
		
	}
		
	}
}