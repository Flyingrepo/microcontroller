
int main(){
int i;
char a[8]={'S','t','U','D','e','T','D'};
for(i=0;i<7;i++){
	if(a[i]>=97){
		a[i]=a[i]-32;
	}
	else {
		a[i]=a[i]+32;
	}
}
	return 0;
}
