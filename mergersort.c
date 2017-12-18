#include<stdio.h>
#define  ll long long

void merge(ll a[] , ll left , ll mid , ll right ){
	ll i=left,j=mid+1,k=0,temp[right-left+1];
	while(i<=mid && j <=right){
		if(a[i]<=a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		else{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		temp[k] = a[i];
			i++;
			k++;
		
	}
	while(j<=right){
		temp[k] = a[j];
			j++;
			k++;
	}
	for(i=0;i<k;i++){
	a[left]=temp[i];
	left++;
	}
}

void mergesort(ll a[],ll left,ll right){
	if(right>left){
		ll mid = (left + right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}

int main(){
	ll n ,i, arr[100];
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for(i=0;i<n;i++){
		printf("%lld ",arr[i]);
	}
	return 0;
}
 
