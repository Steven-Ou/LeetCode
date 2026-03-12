/*Create a password that doesnt accept the word hey,bye,password, curse words anyone of these words!
password has to be 9 words long less than 32 letters
password must contain 2 punctuation, 2 letter or more, 2 capital letters, must have 2 more math symbols,  */

/*If the number has many duplicates count the totak number of duplicates entries in an array. 444- 2 duplicaties since 0,1,2.*/

//Api is application programming interface, 
// The word applications can be thought as a software with an unique function, 
// the word interface can be thought as a contract of a service between two application. 
// And then API is basically how When we program we try to 
// use our software to come into contract with another application. 

//String reversal, return a new string with the character in reverse order. 

string reversal(string word){
    //We need to store word into a temp 
    string reversedWord = ""; 
    //Now we need to loop through the word and store them into an array
    for(int i = word.size()-1; i>=0;i--){
        reversedWord += word[i];
    }

    return reversedWord;
    //Now finally we print back of the array by printing the ending size of the array.
}