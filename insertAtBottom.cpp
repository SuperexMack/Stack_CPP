#include<bits/stdc++.h>
using namespace std;

void mycode(stack<int>&str , int x){

// Base Case

if(str.empty()){

str.push(x); // using this we are inserting the element in a array when the array is empty

return;

}

int ans = str.top();
str.pop();



mycode(str,x); // using this we are using recursion

str.push(ans);






}




int main(){

stack<int>str;

str.push(21);
str.push(45);
str.push(989);
str.push(23);
str.push(432);

cout<<str.top()<<endl;

mycode(str , 69);

while(!str.empty()){

int mom = str.top();
cout<<mom<<endl;
str.pop();



}






}