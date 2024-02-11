int var1;

void une_fonction()
{
	int var7=3;
	int var2;
	var7 += var1;
	var1 = var7;
}

void autre_fonction()
{
	int var1 = 3;
	//int var4 = var3;
}

int main()
{
	var1 = 1;

	int var5 = var1;

	autre_fonction();

	var5 = var1;
	une_fonction();
	var5 = var1;
	une_fonction();
	var5 = var1;

	//var6 = 22;
}





