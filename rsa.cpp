#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isSmaller(string str1, string str2)
{
  int n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
    return true;
    if (n2 < n1)
    return false;

    for (int i=0; i<n1; i++)
    if (str1[i] < str2[i])
        return true;
    else if (str1[i] > str2[i])
        return false;

    return false;
}
string longDivision(string number,ll divisor)
{
	string ans;
	int idx = 0;
	int temp = number[idx] - '0';
	while (temp < divisor)
	temp = temp * 10 + (number[++idx] - '0');
	while (number.size() > idx)
	{
		ans += (temp / divisor) + '0';
		temp = (temp % divisor) * 10 + number[++idx] - '0';
	}
	if (ans.length() == 0)
		return "0";
	return ans;
}
string findDiff(string str1, string str2)
{
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n2; i++)
    {
        int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    for (int i=n2; i<n1; i++)
    {
        int sub = ((str1[i]-'0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    str.erase(0, min(str.find_first_not_of('0'), str.size()-1));

    return str;
}
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=len2-1; j>=0; j--)
        {   int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";
    while (i >= 0)
        s +=(result[i--])+'0';
    return s;
}
	ll mod(string num, ll a)
{
	int res = 0;
	for (int i = 0; i < num.length(); i++)
		res = (res*10 + (int)num[i] - '0') %a;
	return res;
}
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}
string alphanum(string sen)
{
	string n,p,res="",z;
	reverse(sen.begin(),sen.end());
	for (int i = 0; i < sen.length(); i++)
	{ p="",z="1";
		switch(sen[i])
		{
			case 'A': n="1";break;
			case 'B': n="2";break;
			case 'C': n="3";break;
			case 'D': n="4";break;
			case 'E': n="5";break;
			case 'F': n="6";break;
			case 'G': n="7";break;
			case 'H': n="8";break;
			case 'I': n="9";break;
			case 'J': n="10";break;
			case 'K': n="11";break;
			case 'L': n="12";break;
			case 'M': n="13";break;
			case 'N': n="14";break;
			case 'O': n="15";break;
			case 'P': n="16";break;
			case 'Q': n="17";break;
			case 'R': n="18";break;
			case 'S': n="19";break;
			case 'T': n="20";break;
			case 'U': n="21";break;
			case 'V': n="22";break;
			case 'W': n="23";break;
			case 'X': n="24";break;
			case 'Y': n="25";break;
			case 'Z': n="26";break;
			case ' ': n="27";break;
			case 'a': n="28";break;
			case 'b': n="29";break;
			case 'c': n="30";break;
			case 'd': n="31";break;
			case 'e': n="32";break;
			case 'f': n="33";break;
			case 'g': n="34";break;
			case 'h': n="35";break;
			case 'i': n="36";break;
			case 'j': n="37";break;
			case 'k': n="38";break;
			case 'l': n="39";break;
			case 'm': n="40";break;
			case 'n': n="41";break;
			case 'o': n="42";break;
			case 'p': n="43";break;
			case 'q': n="44";break;
			case 'r': n="45";break;
			case 's': n="46";break;
			case 't': n="47";break;
			case 'u': n="48";break;
			case 'v': n="49";break;
			case 'w': n="50";break;
			case 'x': n="51";break;
			case 'y': n="52";break;
			case 'z': n="53";break;
			default : cout<<" invalid sentence";
						return res;
		}//switch closed
        for (int q = 0; q < i; q++)
        z=multiply(z,"53");
    	p=multiply(n,z);
    	res=findSum(res,p);
		}
		return res;
	}
	ll gcd(ll a, ll b)
{
	if (!a)
	return b;
	return gcd(b%a,a);
}
ll reduceB(ll a, string b)
{
	ll mod = 0;
	for (int i=0; i<b.length(); i++)
		mod = (mod*10 + b[i] - '0')%a;

	return mod;
}
ll gcdLarge(ll a, string b)
{
	ll num = reduceB(a,b);
	return gcd(a, num);
}
string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}
string moduloequallengths(string str1,string str2)
{	string res1="",c="";

		string a;
		for (int i = 9; i >=1; i--)
		{
			a=i+'0';
			c=multiply(str2,a);
			if(isSmaller(str1,c))
				continue;
			else
			{
				res1=findDiff(str1,c);
				break;
			}
		}
		return res1;
}

string modulo(string str1,string str2)
{	string req;
	string res="";

	int l1=str1.length(),l2=str2.length();

	if(isSmaller(str1,str2)==1)
		return str1;
	if(l1==l2)//str1 is greater than str2 by default
	{
		return moduloequallengths(str1,str2);
	}
	else
	{
		string str2a=str2;
		int l=str2a.length();
		string str=str1.substr(0,l);
		if(isSmaller(str,str2a)!=1)
		{
			req=moduloequallengths(str,str2a);
			req+=str1.substr(l);
		}
		else
		{	str+=str1.substr(l,1);
            reverse(str2a.begin(),str2a.end());
            str2a+="0";
            reverse(str2a.begin(),str2a.end());
            req=moduloequallengths(str,str2a);
			req+=str1.substr(l+1);
		}
		}
	return modulo(req,str2);
}
string exponentMod(string str1,string str2,string str3)
{
	if(str1=="0")//str1 is null
		return 0;
	if(str2=="0")
		return "1";
	//if str2 is even
	string y;
	if(mod(str2,2)==0)
	{
		y=exponentMod(str1,longDivision(str2,2),str3);
		y=modulo(multiply(y,y),str3);
	}
	//if str2 is odd
	else
	{
		y=modulo(str1,str3);
		y=modulo(multiply(y,modulo(exponentMod(str1,findDiff(str2,"1"),str3),str3)),str3);
	}

	return (string)(modulo(findSum(y,str3),str3));
}
string numalpha(string c)
{
	string s,n="";
    while(c!="0")
    	{  ll p=0;
    		p=mod(c,53);

    		c=longDivision(c,53);

    		switch(p)
    		{
    		  case 1: n+="A";break;
			  case 2: n+="B";break;
			  case 3: n+="C";break;
			  case 4: n+="D";break;
			  case 5: n+="E";break;
			  case 6: n+="F";break;
			  case 7: n+="G";break;
			  case 8: n+="H";break;
			  case 9: n+="I";break;
			  case 10: n+="J";break;
			  case 11: n+="K";break;
			  case 12: n+="L";break;
			  case 13: n+="M";break;
			  case 14: n+="N";break;
			  case 15: n+="O";break;
			  case 16: n+="P";break;
			  case 17: n+="Q";break;
			  case 18: n+="R";break;
			  case 19: n+="S";break;
			  case 20: n+="T";break;
			  case 21: n+="U";break;
			  case 22: n+="V";break;
			  case 23: n+="W";break;
			  case 24: n+="X";break;
			  case 25: n+="Y";break;
			  case 26: n+="Z";break;
			  case 27: n+=" ";break;
			  case 28: n+="a";break;
			  case 29: n+="b";break;
			  case 30: n+="c";break;
			  case 31: n+="d";break;
			  case 32: n+="e";break;
			  case 33: n+="f";break;
			  case 34: n+="g";break;
			  case 35: n+="h";break;
			  case 36: n+="i";break;
			  case 37: n+="j";break;
			  case 38: n+="k";break;
			  case 39: n+="l";break;
			  case 40: n+="m";break;
			  case 41: n+="n";break;
			  case 42: n+="o";break;
			  case 43: n+="p";break;
			  case 44: n+="q";break;
			  case 45: n+="r";break;
			  case 46: n+="s";break;
			  case 47: n+="t";break;
			  case 48: n+="u";break;
			  case 49: n+="v";break;
			  case 50: n+="w";break;
			  case 51: n+="x";break;
			  case 52: n+="y";break;
			  case 53: n+="z";break;

    		}

    	}
    	reverse(n.begin(),n.end());
    	return n;
}

int main()
{
    cout<<"No. of alphabets in plain text must be less than no. of digits in prime number .."<<endl;
	string p,q,n,phi_n,plain_text,sd;
     cout<<"Enter plain text :";
    getline(cin,plain_text);
    sd=alphanum(plain_text);
	cout<<"Enter first prime number :";
	cin>>p;
	cout<<"Enter second prime number :";
	cin>>q;
	n=multiply(p,q);
	string temp1,temp2;
	temp1=p;
	temp1=findDiff(temp1,"1");
	temp2=q;
	temp2=findDiff(temp2,"1");
	phi_n=multiply(temp2,temp1);
	string temp_phi=phi_n;
	temp_phi[phi_n.length()]='\0';
	ll e=3;
	while(1)
	{
		if((gcdLarge(e,temp_phi)==1))
		{
			break;
		}
			e+=2;
	}
	ll iter_no=0;//initialize to 0
	ll temp_iter=0;
	ll qs=0;
	ll k1;
	char rev_iter_no[1000];
	string ino;
	string y;
		do
		{
			iter_no++;

			temp_iter=iter_no;
			k1=0;
			while(temp_iter!=0)
			{
				rev_iter_no[k1]=char((temp_iter%10)+'0');
				k1++;
				temp_iter/=10;
			}
			rev_iter_no[k1]='\0';
			ino=convertToString(rev_iter_no,k1);
			reverse(ino.begin(),ino.end());

			y=multiply(ino,temp_phi);
			qs=mod(y,e);
		}
			while(qs!=e-1);
	string dec,tempd;
	tempd=findSum(y,"1");
	dec=longDivision(tempd,e);
	string e_d;
	ll num = e;
    ostringstream str1;
    str1 << num;
    e_d= str1.str();
    cout<<"Public key is (e,N) :"<<"( "<<e_d<<","<<n<<" )"<<endl;
    cout<<"Private key is (d,N) :"<<"( "<<dec<<","<<n<<" )"<<endl;
    string re123;
    re123=exponentMod(sd,e_d,n);
    string encry;
    encry=numalpha(re123);
    cout<<"encrypted form of plain text is :"<<encry<<endl;
    string decrypt;
    decrypt=exponentMod(re123,dec,n);
    string decry;
    decry=numalpha(decrypt);
    cout<<"decrypted form of plain_text :"<<decry<<endl;
    return 0;
}
