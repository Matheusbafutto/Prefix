#include <iostream>

using namespace std;

int main()
{
   int j = 0, i = 0, k = 0, m = 0;
   string t_str[50], temp;
   char prefix[50];
   
   cout<<"Enter array to be analysed: "<<endl;
   cout<<"(write stop to terminate the array)"<<endl;
   //1
   while(temp != "stop"){
    cin >> temp;
    if (temp != "stop"){
        t_str[j] = temp;
        j++;                // # of elements j_str
    }    
   }
   
   cout<<"Enter prefix: "<<endl;
   //2
   cin >> prefix;
   while (prefix[i] != 0){
       i++;                 //# of elements prefix
   }
   
   //3 -- 7
    while (m < j) {  
        temp = t_str[m];
        t_str[m].resize(i);
        if (t_str[m] != prefix){
           k++;
        }
        t_str[m] = temp;
        m++;
    }
    
    //8
    string result[k];

    //9
    m = 0;
    k = 0;
    while (m < j) {
        temp = t_str[m];
        t_str[m].resize(i);
        if (t_str[m] != prefix){
            result[k] = temp;
            k++;
        }
        t_str[m] = temp;
        m++;
    }
    
    //10
    if(k != 0) {
        cout <<"The result array is: "<< endl;
        m = 0;
        while (m < k){
            cout << result[m] << endl;
            m++;
        }
    } else{
        cout << "All elements with the selected";
        cout << " prefix" << endl;
    }
    
   return 0;
}
*.app
