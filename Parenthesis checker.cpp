#include<iostream>
#include<stack>
using namespace std;

bool arePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool checker(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++){
		if(exp[i]=='(' || exp[i] == '{' || exp[i] == '['){
			S.push(exp[i]);
		}
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !arePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main()
{
	string expression;
	cout<<"Enter an expression:  "; 
	cin>>expression;
	if(checker(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
