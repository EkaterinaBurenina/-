using namespace std;

void func(int *mass, int size, int shift)
{
    for(int k=0; k < shift; k++)
    {
        int t = *mass[0];
        for(int i=0; i<size; i++)
	    *mass[i] = *mass[i+1];
	*mass[size-1] = t;
    }
}

int main()
{

int[] mass = new int[] { 1, 3, 5, 7, 9 };

for (int i=0; i<5; i++)
   {
		
        cout<<mass[i]<<" ";
   }

func($mass, 5, 2);

for (int i=0; i<5; i++)
   {
	cout<<mass[i]<<" ";	
   }
return 0;
}
