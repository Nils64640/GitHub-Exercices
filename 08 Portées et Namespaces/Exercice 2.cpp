void une_fonction(int& var1)
{
	static int var7 = 3;
	// int var2;
	var7 += var1;
	var1 = var7;
}


int main()
{
	int var1 = 1;

	int var5 = var1;

	var5 = var1;
	une_fonction(var1);
	var5 = var1;
	une_fonction(var1);
	var5 = var1;

	//var6 = 22;
}