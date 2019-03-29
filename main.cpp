#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
  char c;
  vector<char> lines;
  bool state = true;
  string line;

  while(((scanf("%c", &c)) == 1)){
      //lines.push_back(c);

      if(c =='"'){
          if(state){
              cout << "``";
              state = !state;
          }else{
              cout <<"\'\'";
              state = !state;
          }
      }else{
          cout << c;
      }
  }


  for(auto l : lines) {
    cout << l;
  }

  //asumiendo que se han guardado todas las líneas lines
  for(int i = 0; i < lines.size(); i++){
      if(lines[i] =='"'){
        if(state){
          lines[i] = '`';
          lines.insert(lines.begin()+i, '`');
        }else{
          lines[i] = '\'';
          lines.insert(lines.begin()+i, '\'');
        }
        state = !state;
      }
    }

    for(auto l : lines) {
        cout << l;
    }
}

