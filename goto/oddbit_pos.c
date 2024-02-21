#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,num=682,res,bit,result=0;//bit,count=0,res,result=0;
	printf("enter data:");
	scanf("%d",&data);
	scanf("%d",&bit);
	while(bit<=9)
	{
		if(data==0)
		{
			res=data|(1<<bit);
			bit++;
			++bit;
			result+=res;
		}
		else if(data<0)
		{
			res=data&(1<<bit);
			bit++;
		//count++;
			printf("bitpos:%d\n",++bit);
			result+=res;
		//result+=res;
		}
	}
	printf("result:%d\n",result);
	return 0;
	//printf("res:%d\n",res);
	//printf("count:%d\n",count);*/
	//res=data|num;
	//printf("%d\n",res);


}
