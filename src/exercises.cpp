
#include <cmath>
#include <iostream>

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
		cout<<"Om-nom-nom :P\n"<<endl;
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
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
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