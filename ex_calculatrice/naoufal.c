float pow(float a,float b)
{
	float power=1;
	if(a==0.0)
	return 0;
	if(b==0)
	return 1;
	for(int i=0;i<b;i++){
		power*=a;
	}
	return power;
}
