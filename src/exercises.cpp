
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

void exercise_1(string s1) {
	for (int i = 0; i < s1.length(); i++){
		if (s1[i] == ' '){
			cout<<i<<endl ;
		}
	}
	cout <<s1.length()<< endl;
}

void exercise_2(string s1) {
  string word;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != ' ') {
            word += s1[i];
        } else {
            if (!word.empty()) {
                cout << "[" << word << "]"<<endl;
                word = "";
            }
        }
    }
    if (!word.empty()) {
        cout << "[" << word << "]"<<endl;
    }
}

void exercise_3(string s1) {
  int visits = 0;
	
	getline(cin, s1);
	int pos = 0;
	int cake;
	
	while (pos < s1.size() && s1[pos]=='1'){
		cout<<"Om-nom-nom :P"<<endl;
		visits++;
		pos += 2;
		if(visits>9){
			break;
		}
	}
	if (pos < s1.size() && s1[pos]== '0'){
		cout<<"No cake :("<<endl;
	}
}

void exercise_4(int n) {
  cin >> n;
    unsigned long long factorial = 1;

    if (n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo " << endl;
        cin>>n;
    } else if (n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo " << endl;
        cin>>n;
    }
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << factorial << endl;
}

void exercise_5(int n, int k) {
  int current_day = 1;
	
	for (int i=0; i<n; i++){
		cout<<"";
	}
	while(current_day<=k){
		cout<<(current_day < 10 ? " " : "")<<current_day;
		if((n+current_day-1)%7==0 || current_day==k){
			cout<<endl;
		} else {
			cout<<" ";
		}
		current_day++;
	}
}

int exercise_6(int n) {
  int suma = 0;
	
	if(n<0){
		n = -n;
	}
	while (n != 0){
		suma += n%10;
		n/=10;
	}
  return suma;
}

void exercise_7(int n) {
  double suma = 0.0;
	cin>>n;
	for (int i=1; i<=n; i++){
		suma += pow(-1, i+1)/i;
	}
	cout<<suma<<endl;
}

void exercise_8(string s) {
	getline(cin, s);
	
	s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
	
	string word_rev = s;
	reverse(word_rev.begin(), word_rev.end());
	if (s == word_rev){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}

void exercise_9(string s) {
	getline(cin, s);
	
	int first_ap = s.find('f');
	
	if (first_ap == string::npos){
		cout<<-2<<endl;
	}
	else {
		size_t second_ap = s.find('f', first_ap + 1);
		
		if(second_ap == string::npos){
			cout<<-1<<endl;
		}
		else {
			cout<<second_ap<<endl;
		}
	}
}

int exercise_10(int a, int b) {
	while (b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
  return a;
}

void exercise_11() {
	double Un = 1.0;
	cout<<"U0 = "<<Un<<endl;
	for (int n=1; n<=10; ++n){
		Un = Un / (n + 1);
		cout<<"U"<<n<<" = "<<Un<<endl;
	}
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}