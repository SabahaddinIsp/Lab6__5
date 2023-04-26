#include <iostream>
#include <string>
#include <list>
using namespace std;

int * function1(int list1[], int list2[]){
    int a =0;
    int b = sizeof (list1) / sizeof (list1[0]);
    int c = sizeof (list2) / sizeof (list2[0]);
    int* list3= new int [a<c? a: c];
    for (int i = 0; i < b; ++i) {
        for (int j = 0; j < c; ++j) {
            if (list1[i]==list2[j]){
                list3[a++]=list1[i];
            }
        }
    }
    return list3;
}
int main() {
    int tmp1[5] = {1,2,3,4,5};
    typeid(tmp1);
    int tmp2[5] = {1,2,8,9,10};
    cout<<function1(tmp1,tmp2);

}