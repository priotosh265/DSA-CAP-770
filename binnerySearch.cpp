// wap of binary search
#include<iostream>
using namespace std;
 
 int main(){
 	int n=7;
 	int search =5;
 	int a[7]={2,3,4,5,5,7,8};
 	int l=0,h=n-1;
 	bool chek=false;
 	
	while(l<=h){
 		chek=false;
 		int mid=l+(h-l)/2;
 		if(a[mid]==search){
 			chek=true;
 			break;
		 }
		 else if(a[mid]<search){
		 	l=mid+1;
		 }
		 else{
		 	h=mid-1;
		 }
	 }
	 if(chek){
	 	cout<<"founded";
	 }
	 else{
	 	cout<<"not founded";
	 }
 }