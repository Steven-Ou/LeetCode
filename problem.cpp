#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
/*Create a password that doesnt accept the word hey,bye,password, curse words anyone of these words!
password has to be 9 words long less than 32 letters
password must contain 2 punctuation, 2 letter or more, 2 capital letters, must have 2 more math symbols,  */

/*If the number has many duplicates count the totak number of duplicates entries in an array. 444- 2 duplicaties since 0,1,2.*/

// Api is application programming interface,
//  The word applications can be thought as a software with an unique function,
//  the word interface can be thought as a contract of a service between two application.
//  And then API is basically how When we program we try to
//  use our software to come into contract with another application.

// FizzBuzz (Logic Check): Write a program that prints numbers from 1 to 20. For multiples of 3, print "Fizz"; for multiples of 5, print "Buzz"; for multiples of both, print "FizzBuzz."

// Unique Characters: Given a string, determine if it has all unique characters. (Hint: Think about using a Set or a Hash Map).

// Array Filtering: Given an array of integers, write a function that returns a new array containing only the even numbers.

// Palindrome Check: Write a function that checks if a word is the same forwards and backwards. (Example: "racecar" is true).

// Find the Maximum: Given an array of numbers, find the largest value without using a built-in Math.max() function on the whole array.

// String reversal, return a new string with the character in reverse order.

string reversal(string word)
{
    // We need to store word into a temp
    string reversedWord = "";
    // Now we need to loop through the word and store them into an array
    for (int i = word.size() - 1; i >= 0; i--)
    {
        reversedWord += word[i];
    }

    return reversedWord;
    // Now finally we print back of the array by printing the ending size of the array.
}

int fizzbuzz(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << i << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 || i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}
// A method of using strings and adding it into output
//  void fizzbuzz(int x){
//      for(int i=0;i<=x;i++){
//          string output = "";
//          if(i%3==0){
//              output+="Buzz";
//          }

//         if(i%5 ==0){
//             output+="Fizz";
//         }

//         if(output==""){
//             cout<<i<<endl;
//         }else{
//             cout<<output<<endl;
//         }

//     }
// }
//In palindrome the letter of the ending and beginning must be the same. 
bool Palindrome(int x ){
    int left= 0;
    int right= x.length()-1;
    while(left<right){
        if (x[left]!= x[right]){
            return false;
        }
        left++;//continuing going to the next number
        right--;//Continuing going left.
    }
    return true; 
}
vector<int> conVertEven(vector<int>& nums){
    vector<int> evens;

    for(int i =0;i<=nums.length();i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
        }
    }

    return even;
}

bool hasUnique(string word){ 
    unordered_set<char> seen; // Using this variable to store 
    for(char c : word){
        if(seen.count(c)>0){ //IF this varaibles count c and its less than 0 , exit.
            return false; 
        }
        seen.insert(c); //Add the char into the unordered set. 
    }
    return true;
}

int findMax(vector<int>& nums){
    if(nums.empty()){//base case , check if its empty
        return 0;
    }
    int currentMax = nums[0];// Set the first index into a var.

    for(int i =1; i<nums.size();i++){ //loop to compare the index. if higher store it
        if(nums[i]>currentMax){
            currentMax = nums[i];
        }
    }
    return currentMax; //return the max.
}

int main()
{
    int x;
    string y;
    cout << "Give a word" << endl;
    getline(cin, y); 
    cout << "Reversed: " << reversal(y) << endl;
    cout << "enter a number:" << endl;
    cin >> x;
    fizzbuzz(x);
}