#include <bits/stdc++.h>
using namespace std;

map<string,int> label_address;

int main(int argc,char *argv[])
{
	if(argc > 2){
		ifstream fs;
		ofstream ft;
		fs.open(argv[1]);
		ft.open(argv[2]);
		string str,temp;
		int length = 0;
		while(getline(fs,str)){
			int n = str.length();
			if(str[0] != '_'){
				length++;
				continue;
			}
			temp = "";
			int j = 0;
			while(j < n && str[j] != ':'){
				temp += str[j];
				j++;
			}
			label_address[temp] = 2056 + 2 * (length - 8);
		}
		fs.close();
		fs.open(argv[1]);
		while(getline(fs,str)){
			int n = str.length();
			if(str[0] == '_') continue;
			for(int i = 0;i < n;i++){
				temp = "";
				int j = i;
				if(str[j] != '_'){
					while(j < n && str[j] != ' '){
						temp += str[j];
						j++;
					}
					ft << temp << " ";
				}
				else{
					while(j < n){
						temp += str[j];
						j++;
					}
					ft << label_address[temp];
				}
				i = j;
			}
			ft << endl;
		}
	}
	else
		cout << "Porper arguments not given" << endl;
	return 0;
}
