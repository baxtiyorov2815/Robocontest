#include <iostream>
using namespace std;

int main(){
    int score, divided_to_5 = 0;
    cin >> score;
    if (score == 100){
        cout << score;
        return 0;
    };
    divided_to_5 =(score%5) ? (score / 5) + 1 : score / 5;
    if(score < 38){
        cout << score;
    }else if(score >= 38 && score < 100){
        if((divided_to_5 * 5) - score < 3){
            cout << divided_to_5 * 5;
        }else{
            cout << score;
        };
    };
    return 0;
}