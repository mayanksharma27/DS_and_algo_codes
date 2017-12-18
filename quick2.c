#include<stdio.h>
#define ll long long 

ll partition(ll a[] , ll left , ll right){
	ll i,j,temp , pivot = a[left];
	i=left;j=left+1;
	for(j=left+1;j<=right;j++){
		if(a[j]>pivot){
		i++;
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		}
	}
	temp = a[i] ;
	a[i] = a[left];
	a[left] = temp;
	return i;
}

ll quickSort(ll a[], ll left,ll right){
	if(left<right){
		ll mid = partition(a,left,right);
		quickSort(a,left,mid-1);
		quickSort(a,mid+1,right);
	}
}

int main(){
ll i, n , a[100];
scanf("%lld",&n);
for(i=0;i<n;i++){
	scanf("%lld",&a[i]);
}
quickSort(a,0,n-1);
for(i=0;i<n;i++){
	printf("%lld ",a[i]);
}

return 0;
}
