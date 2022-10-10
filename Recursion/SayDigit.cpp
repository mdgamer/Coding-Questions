
#include <iostream>
using namespace std;
void sayDigit(int n){
    string alphabets[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    sayDigit(n);
    cout<<alphabets[(digit)]<<" ";
} 
int main() {
    // Write C++ code here
   sayDigit(42179);

    return 0;
}
