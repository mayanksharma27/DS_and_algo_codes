//https://leetcode.com/problems/ugly-number-ii/

class Solution {
public:
    int getmin(int x,int y,int z){
        return (x < y ? (x < z ? x : z ) : (y < z ? y : z));
    }
    int nthUglyNumber(int n) {
        if(n<=0) return 0;
         int i,i2,i3,i5,a[n],next_2,next_3,next_5,next;
        i2=i3=i5=0;
        a[0] =1;
        next_2 = a[i2] * 2;
        next_3 = a[i3] * 3;
        next_5 = a[i5] * 5;
        for(i=1;i<n;i++){
          next = getmin(next_2,next_3,next_5);
            a[i] = next;
          if(next == next_2){
              i2 = i2 +1;
              next_2 = a[i2] * 2 ;
          }
          if(next == next_3){
              i3 = i3 +1;
              next_3 = a[i3] * 3 ;
          }
          if(next == next_5){
              i5 = i5 +1 ;
              next_5 = a[i5] * 5 ;
          } 
        //    cout<<a[i]<<endl;
        }
        return a[n-1];
    }
};
