#include <iostream>
#include <vector>
using namespace std;
vector<int> insert(vector<int> &ans, int data, int position){
    if(position==0){
        ans[0]=data;
        return ans;
    }
    else if(position > ans.size(){
        ans.push_back(data);
        return ans;
    }
    else{
        int temp =ans[position];
        ans[position]=data;
        for(int j=(position+1); j<=ans.size(); j++){
            int temp_new=ans[j];
            ans[j] = temp;
            temp=temp_new;
        }
        return ans;
    }

void insert_p(vector<int> &ans, int data)
{
    int position = 0;
    for (int i=0; i<ans.size(); i++)
    {
        if (data > ans[i])
        {
            position = i+1;
            
        }
    }

    insert(ans,data,position);

}

void print_array(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void enter_array(vector<int> &ans)
{
    int n;
    cout << "Enter the no. of terms" << endl;
    cin >> n;
    int data;
    cout << "Enter the value in sorted order -> assending" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        ans.push_back(data);
    }
}
int main()
{
    vector<int> ans;
    int data;
    cin >> data;
    enter_array(ans);
    insert_p(ans, data);
}
