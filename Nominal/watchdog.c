static int cout[2]={0};//one counter for each server
kick(int server_index)
{
	if(server_index==0)
	{
		count[0]++;
		return 1;
	}
	else if (server_index==1)
	{
		count[1]++:
		return 1;
	}
	else
		return 0;
}

int isAlive(int server_index)
{	if(server_index>=0 && server_index<=1)
		return count[server_index]
	else
	{
		printf("invalid server_index parametre");
		return NaN;
	}
}