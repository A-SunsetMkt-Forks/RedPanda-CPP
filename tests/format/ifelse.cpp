int main() {
	int x,y,z,t;
	for (int i=0;i<10;i++) 
		if (x>5)
			x=5;
		else
			y=10;
	for (int i=0;i<10;i++) 
		if (x>5)
			if (y=10)
				if (x=20)
					x=30;
				else
					y=40;
			else
				z=40;
		else
			t=60;
	for (int i=0;i<10;i++)
		if (x>y)
			x=10;
		else if (y<10)
			y=10;
		else 
			t=20;
	for (int i=0;i<10;i++) {
		if (x>y)
			y=10;
		else if (y<10)
			y=20;
		else 
			t=20;
	}
}
