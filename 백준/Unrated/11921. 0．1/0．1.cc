#include <cstdio>
using namespace std;

char in[50000000];
int main(void){
	int N=0,i;
	long long sum=0;
	fread(in,1,sizeof(in),stdin);
	for(i=0;in[i]!='\n';i++) N=N*10+in[i]-'0';
	for(int j=0;j<N;j++){
		int tmp=0;
		for(i++;in[i]!='\n';i++) tmp=tmp*10+in[i]-'0';
		sum+=tmp;
	}
	printf("%d\n%lld\n",N,sum);
	return 0;
}