// #include <iostream>
// #define max 10
// using namespace std;

// bool check(char a, char b)
//     {
//         if (a == "(")
//         {
//             if (b == ")")
//             {
//                 return true;
//             }
//             return false;
//         }

//         else if (a == "{")
//         {
//             if (b == "}")
//             {
//                 return true;
//             }
//             return false;
//         }
//         else if (a == "[")
//         {
//             if (b == "]")
//             {
//                 return true;
//             }
//             return false;
//         }
//     }

// int main()
// {
//     class Stack
//     {
//     public:
//         char arr[max];
//         int peak = -1;
//         void push(char data)
//         {
//             if (peak >= max)
//             {
//                 cout << "stack overflow" << endl;
//             }
//             else
//             {
//                 arr[++peak] = data;
//             }
//         }

//         int pop()
//         {
//             if (peak <= -1)
//             {
//                 cout << "Stack OverFlow" << endl;
//             }
//             else
//             {
//                 int data = arr[peak--];
//                 return data;
//             }
//         }

//         void traverse()
//         {
//             for (int i = 0; i <= peak; i++)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//         int top()
//         {
//             if (peak == -1)
//             {
//                 cout << "Stack Underflow" << endl;
//             }
//             else
//             {
//                 int data = arr[peak];
//                 return data;
//             }
//         }
//         bool isEmpty()
//         {
//             if (peak == -1)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }

//         bool isfull()
//         {
//             if (peak == max - 1)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//     };

    

//     Stack S;
//     string s;

//     cout << "Enter the Bracket Expression" << endl;
//     cin >> s;

//     int i = 0;
//     while (s[i] != '\0')
//     {
//         if (i == 0)
//         {

//             S.push(s[i]);
//             i++;
//             continue;
//         }
//             bool a = check(S.top(), s[i]);
//             if (a)
//             {
//                 S.pop();
//             }
//             else
//             {
//                 S.push(s[i]);
//             }
//             i++;
        
//         }

//     if (!S.isEmpty())
//     {
//         cout << "Not Valid" << endl;
//     }
//     else
//     {
//         cout << "Valid" << endl;
//     }

//     return 0;
// }    


class validparenthese
{
private:
    /* data */
public:
    validparenthese(/* args */);
    ~validparenthese();
};

validparenthese::validparenthese(/* args */)
{
}

validparenthese::~validparenthese()
{
}
