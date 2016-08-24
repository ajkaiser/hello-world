// This is a test for symbols and reference searches in eclispse



void Func1 ( boolean Bool )
{
	uint32 VarA = 5;
	uint16 VarB = 8;

	if( Bool )	
	{	
		VarA = 9;
	}
	else
	{	
		VarB = 0;
	}

	return (VarA+VarB+VarC);

}
