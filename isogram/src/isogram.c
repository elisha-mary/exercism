#include "isogram.h"

bool is_isogram(const char phrase[])
{
	if(phrase=='\0')
	{
		return false;
	}
	else
	{
		for(int i=0;phrase[i]!='\0';i++)
		{
			if(phrase[i]!=' ' && phrase[i]!='-')
			{
				for(int j=0;i!=j;j++)
				{
					if(phrase[i]==phrase[j]||phrase[i]==phrase[j]+32||phrase[i]==phrase[j]-32)
						return false;
				}
			}
		}
		return true;
	}
}

