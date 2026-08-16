
    //how to declear the string and pritning the string 

/*#include<iostream>
using namespace std;
int main(){
    string name = "dev";
    cout<<name;
    return 0;
}*/

     //how to take user input in string 

/*
#include<iostream>
using namespace std;
int main(){

    string s;
    cout<<"enter your name "<<endl;
    cin>>s;                               { but it will pritn only one word like dev only with this code 
                                            u want to print dev rai it will not able to print u have to use getline 
                                            function with help of u can print whole line 
 
    cout<<"this is your name "<<endl<<s;
    return 0;
}

*/ 

     // how to print whole sentence 

/*
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter your line "<<endl;
    getline(cin,s);

    cout<<"this is your whole line "<<endl<<s;
    return 0;
}
    */

    //how to acess string with the help of index value 
/*
    #include<iostream>
    using namespace std;
    int main(){
        string s = "hello";
        cout<<"this acessing the string "<<endl<<s[0];
        return 0;
    }


*/

    //how to print string using for loops 

/*
    #include<iostream>
    using namespace std;
    int main(){
        string name = "Dev Rai";
        for(int i=0;i<name.length();i++){
            cout<<name[i]<<" ";
        }
        return 0;
    }
        

        Basic theory questions (very common)

These are asked before coding.

String basics

What is a string?

How is a string stored in C++?

What is the difference between char[] and string?

How do you take string input?

Difference between cin >> s and getline(cin, s)?

What does s.length() do?

Difference between length() and size()?

How do you access a character at a particular index?

Are strings mutable in C++?

What is the time complexity of accessing s[i]?

STL string functions

Interviewers often ask these directly.Function
What interviewer may ask

length() Find string length

size() Difference from length()

substr() Extract substring

find() Search substring

erase() Remove characters

insert() Insert substring

replace() Replace part of string

push_back() Add character

pop_back() Remove last character

reverse() Reverse string



Example question:

What is the output?

string s = "developer";
cout << s.substr(2,4);

Answer: velo

Coding questions (easy)

////////////These are the most likely questions.

Reverse a string
Expected complexity: O(n)

Check palindrome

They may ask you to solve it using two pointers.

Count vowels and consonants

Count frequency of characters

Use hashing.

Find the largest character

////////// Medium interview questions



Remove duplicates



Check anagram



Use sorting or hashing.

Reverse words



Compress string


First non-repeating character



Two-pointer questions

Interviewers love this pattern.

Valid palindrome

Ignore spaces and punctuation.

Input:

A man, a plan, a canal: Panama

Output:

True

Reverse only vowels

Input:

hello

Output:

holle

Sliding window questions

These are slightly advanced.

Longest substring without repeating characters

Input:

abcabcbb

Output:

3

Longest substring:

abc

Longest repeating character replacement

A very common Amazon/Adobe style question.

Interviewer follow-up questions

Suppose you solve reverse string.

They may ask:

What is the time complexity?

Answer:

O(n)

What is the space complexity?

O(1)

Then:

Can you do it without using another string?

Then they test in-place reversal.

C++ specific string questions
What happens here?
string s = "abc";
s[0] = 'x';

Answer:

String becomes:

xbc

Difference between
char arr[] = "abc";

and

string s = "abc";

Expected answer:

string is dynamic and has built-in functions.

char[] is a character array.

Why use getline?

Because

cin >> s;

stops at spaces.

Time complexity questions

They may ask:

Operation

	

Complexity




Access s[i]

	

O(1)




length()

	

O(1)




push_back()

	

Amortized O(1)




Concatenation

	

O(n)




substr()

	

O(k)




find()

	

O(n)




Reverse

	

O(n)

A realistic interview round for you

Based on your current level, I would expect these 15 questions.

Difference between cin and getline.

Reverse a string.

Check palindrome.

Count frequency of characters.

Remove spaces.

Convert uppercase to lowercase.

Find the first non-repeating character.

Check anagram.

Reverse words in a sentence.

Explain substr().

Explain find().

Explain push_back() and pop_back().

Time complexity of reversing a string.

Solve palindrome using two pointers.

Explain why two pointers is O(n).
*/  

