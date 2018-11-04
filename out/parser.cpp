//
// Created by Logan Xu on 2018/11/3.
//
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int state = 0;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char cur;
    string lexeme;
    while((cur=cin.get())!=EOF){
        //ignore blank
        if(cur == '\n'|| cur == '\t')
                    continue;
        if(!state &&cur == ' ')
            continue;
        switch (state){
            case 0 :
                if(cur == '"'){
                state = 1; lexeme += cur;
                }                else if(cur == '#'){
                state = 2; lexeme += cur;
                }                else if(cur == '&'){
                state = 3; lexeme += cur;
                }                else if(cur == '('){
                state = 4; lexeme += cur;
                }                else if(cur == ')'){
                state = 4; lexeme += cur;
                }                else if(cur == '*'){
                state = 6; lexeme += cur;
                }                else if(cur == '+'){
                state = 6; lexeme += cur;
                }                else if(cur == ','){
                state = 4; lexeme += cur;
                }                else if(cur == '-'){
                state = 6; lexeme += cur;
                }                else if(cur == '/'){
                state = 6; lexeme += cur;
                }                else if(cur == '0'){
                state = 11; lexeme += cur;
                }                else if(cur == '1'){
                state = 12; lexeme += cur;
                }                else if(cur == '2'){
                state = 12; lexeme += cur;
                }                else if(cur == '3'){
                state = 12; lexeme += cur;
                }                else if(cur == '4'){
                state = 12; lexeme += cur;
                }                else if(cur == '5'){
                state = 12; lexeme += cur;
                }                else if(cur == '6'){
                state = 12; lexeme += cur;
                }                else if(cur == '7'){
                state = 12; lexeme += cur;
                }                else if(cur == '8'){
                state = 12; lexeme += cur;
                }                else if(cur == '9'){
                state = 12; lexeme += cur;
                }                else if(cur == ';'){
                state = 4; lexeme += cur;
                }                else if(cur == '<'){
                state = 22; lexeme += cur;
                }                else if(cur == '='){
                state = 23; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 53; lexeme += cur;
                }                else if(cur == 'd'){
                state = 54; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 56; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 59; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 64; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 66; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 69; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 71; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }                else if(cur == '{'){
                state = 4; lexeme += cur;
                }                else if(cur == '|'){
                state = 3; lexeme += cur;
                }                else if(cur == '}'){
                state = 4; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 1 :
                if(cur == '"'){
                state = 81; lexeme += cur;
                }                else if(cur == '.'){
                state = 1; lexeme += cur;
                }else{
                state = 1;
}break;            case 2 :
                if(cur == 'd'){
                state = 83; lexeme += cur;
                }                else if(cur == 'i'){
                state = 84; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 3 :
{
                cout<<'$'<<"bit_op lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 4 :
{
                cout<<'$'<<"delimiter lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 6 :
{
                cout<<'$'<<"arithmetic_op lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 11 :
{
                cout<<'$'<<"digit lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 12 :
                if(cur == '0'){
                state = 12; lexeme += cur;
                }                else if(cur == '1'){
                state = 12; lexeme += cur;
                }                else if(cur == '2'){
                state = 12; lexeme += cur;
                }                else if(cur == '3'){
                state = 12; lexeme += cur;
                }                else if(cur == '4'){
                state = 12; lexeme += cur;
                }                else if(cur == '5'){
                state = 12; lexeme += cur;
                }                else if(cur == '6'){
                state = 12; lexeme += cur;
                }                else if(cur == '7'){
                state = 12; lexeme += cur;
                }                else if(cur == '8'){
                state = 12; lexeme += cur;
                }                else if(cur == '9'){
                state = 12; lexeme += cur;
                }else{
                cout<<'$'<<"number lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 22 :
                if(cur == '<'){
                state = 95; lexeme += cur;
                }                else if(cur == '>'){
                state = 96; lexeme += cur;
                }                else if(cur == 'A'){
                state = 97; lexeme += cur;
                }                else if(cur == 'B'){
                state = 97; lexeme += cur;
                }                else if(cur == 'C'){
                state = 97; lexeme += cur;
                }                else if(cur == 'D'){
                state = 97; lexeme += cur;
                }                else if(cur == 'E'){
                state = 97; lexeme += cur;
                }                else if(cur == 'F'){
                state = 97; lexeme += cur;
                }                else if(cur == 'G'){
                state = 97; lexeme += cur;
                }                else if(cur == 'H'){
                state = 97; lexeme += cur;
                }                else if(cur == 'I'){
                state = 97; lexeme += cur;
                }                else if(cur == 'J'){
                state = 97; lexeme += cur;
                }                else if(cur == 'K'){
                state = 97; lexeme += cur;
                }                else if(cur == 'L'){
                state = 97; lexeme += cur;
                }                else if(cur == 'M'){
                state = 97; lexeme += cur;
                }                else if(cur == 'N'){
                state = 97; lexeme += cur;
                }                else if(cur == 'O'){
                state = 97; lexeme += cur;
                }                else if(cur == 'P'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 97; lexeme += cur;
                }                else if(cur == 'R'){
                state = 97; lexeme += cur;
                }                else if(cur == 'S'){
                state = 97; lexeme += cur;
                }                else if(cur == 'T'){
                state = 97; lexeme += cur;
                }                else if(cur == 'U'){
                state = 97; lexeme += cur;
                }                else if(cur == 'V'){
                state = 97; lexeme += cur;
                }                else if(cur == 'W'){
                state = 97; lexeme += cur;
                }                else if(cur == 'X'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 97; lexeme += cur;
                }                else if(cur == 'a'){
                state = 97; lexeme += cur;
                }                else if(cur == 'b'){
                state = 97; lexeme += cur;
                }                else if(cur == 'c'){
                state = 97; lexeme += cur;
                }                else if(cur == 'd'){
                state = 97; lexeme += cur;
                }                else if(cur == 'e'){
                state = 97; lexeme += cur;
                }                else if(cur == 'f'){
                state = 97; lexeme += cur;
                }                else if(cur == 'g'){
                state = 97; lexeme += cur;
                }                else if(cur == 'h'){
                state = 97; lexeme += cur;
                }                else if(cur == 'i'){
                state = 97; lexeme += cur;
                }                else if(cur == 'j'){
                state = 97; lexeme += cur;
                }                else if(cur == 'k'){
                state = 97; lexeme += cur;
                }                else if(cur == 'l'){
                state = 97; lexeme += cur;
                }                else if(cur == 'm'){
                state = 97; lexeme += cur;
                }                else if(cur == 'n'){
                state = 97; lexeme += cur;
                }                else if(cur == 'o'){
                state = 97; lexeme += cur;
                }                else if(cur == 'p'){
                state = 97; lexeme += cur;
                }                else if(cur == 'q'){
                state = 97; lexeme += cur;
                }                else if(cur == 'r'){
                state = 97; lexeme += cur;
                }                else if(cur == 's'){
                state = 97; lexeme += cur;
                }                else if(cur == 't'){
                state = 97; lexeme += cur;
                }                else if(cur == 'u'){
                state = 97; lexeme += cur;
                }                else if(cur == 'v'){
                state = 97; lexeme += cur;
                }                else if(cur == 'w'){
                state = 97; lexeme += cur;
                }                else if(cur == 'x'){
                state = 97; lexeme += cur;
                }                else if(cur == 'y'){
                state = 97; lexeme += cur;
                }                else if(cur == 'z'){
                state = 97; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 23 :
{
                cout<<'$'<<"assign_op lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 24 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 53 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 212; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 54 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 213; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 56 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 214; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 59 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 215; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 64 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 216; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 66 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 217; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 218; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 69 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 219; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 71 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 220; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 81 :
{
                cout<<'$'<<"string lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 83 :
                if(cur == 'e'){
                state = 221; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 84 :
                if(cur == 'n'){
                state = 222; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 95 :
{
                cout<<'$'<<"read_op lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 96 :
{
                cout<<'$'<<"import lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 97 :
                if(cur == '>'){
                state = 96; lexeme += cur;
                }                else if(cur == 'A'){
                state = 97; lexeme += cur;
                }                else if(cur == 'B'){
                state = 97; lexeme += cur;
                }                else if(cur == 'C'){
                state = 97; lexeme += cur;
                }                else if(cur == 'D'){
                state = 97; lexeme += cur;
                }                else if(cur == 'E'){
                state = 97; lexeme += cur;
                }                else if(cur == 'F'){
                state = 97; lexeme += cur;
                }                else if(cur == 'G'){
                state = 97; lexeme += cur;
                }                else if(cur == 'H'){
                state = 97; lexeme += cur;
                }                else if(cur == 'I'){
                state = 97; lexeme += cur;
                }                else if(cur == 'J'){
                state = 97; lexeme += cur;
                }                else if(cur == 'K'){
                state = 97; lexeme += cur;
                }                else if(cur == 'L'){
                state = 97; lexeme += cur;
                }                else if(cur == 'M'){
                state = 97; lexeme += cur;
                }                else if(cur == 'N'){
                state = 97; lexeme += cur;
                }                else if(cur == 'O'){
                state = 97; lexeme += cur;
                }                else if(cur == 'P'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 97; lexeme += cur;
                }                else if(cur == 'R'){
                state = 97; lexeme += cur;
                }                else if(cur == 'S'){
                state = 97; lexeme += cur;
                }                else if(cur == 'T'){
                state = 97; lexeme += cur;
                }                else if(cur == 'U'){
                state = 97; lexeme += cur;
                }                else if(cur == 'V'){
                state = 97; lexeme += cur;
                }                else if(cur == 'W'){
                state = 97; lexeme += cur;
                }                else if(cur == 'X'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 97; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 97; lexeme += cur;
                }                else if(cur == 'a'){
                state = 97; lexeme += cur;
                }                else if(cur == 'b'){
                state = 97; lexeme += cur;
                }                else if(cur == 'c'){
                state = 97; lexeme += cur;
                }                else if(cur == 'd'){
                state = 97; lexeme += cur;
                }                else if(cur == 'e'){
                state = 97; lexeme += cur;
                }                else if(cur == 'f'){
                state = 97; lexeme += cur;
                }                else if(cur == 'g'){
                state = 97; lexeme += cur;
                }                else if(cur == 'h'){
                state = 97; lexeme += cur;
                }                else if(cur == 'i'){
                state = 97; lexeme += cur;
                }                else if(cur == 'j'){
                state = 97; lexeme += cur;
                }                else if(cur == 'k'){
                state = 97; lexeme += cur;
                }                else if(cur == 'l'){
                state = 97; lexeme += cur;
                }                else if(cur == 'm'){
                state = 97; lexeme += cur;
                }                else if(cur == 'n'){
                state = 97; lexeme += cur;
                }                else if(cur == 'o'){
                state = 97; lexeme += cur;
                }                else if(cur == 'p'){
                state = 97; lexeme += cur;
                }                else if(cur == 'q'){
                state = 97; lexeme += cur;
                }                else if(cur == 'r'){
                state = 97; lexeme += cur;
                }                else if(cur == 's'){
                state = 97; lexeme += cur;
                }                else if(cur == 't'){
                state = 97; lexeme += cur;
                }                else if(cur == 'u'){
                state = 97; lexeme += cur;
                }                else if(cur == 'v'){
                state = 97; lexeme += cur;
                }                else if(cur == 'w'){
                state = 97; lexeme += cur;
                }                else if(cur == 'x'){
                state = 97; lexeme += cur;
                }                else if(cur == 'y'){
                state = 97; lexeme += cur;
                }                else if(cur == 'z'){
                state = 97; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 212 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 223; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 213 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 224; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 214 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 225; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 215 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 226; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 216 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 227; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 217 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 228; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 229; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 218 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 230; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 219 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 226; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 220 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 232; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 221 :
                if(cur == 'f'){
                state = 233; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 222 :
                if(cur == 'c'){
                state = 234; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 223 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 235; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 224 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 236; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 225 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 237; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 226 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"reserved_word lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 227 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 238; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 228 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 239; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 229 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 240; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 230 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 241; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 232 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 242; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 233 :
                if(cur == 'i'){
                state = 243; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 234 :
                if(cur == 'l'){
                state = 244; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 235 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 226; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 236 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 246; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 237 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 226; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 238 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 248; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 239 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 249; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 240 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 250; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 241 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 251; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 242 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 226; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 243 :
                if(cur == 'n'){
                state = 253; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 244 :
                if(cur == 'u'){
                state = 254; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 246 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 226; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 248 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 256; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 249 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 257; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 250 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 258; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 251 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 226; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 253 :
                if(cur == 'e'){
                state = 260; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 254 :
                if(cur == 'd'){
                state = 261; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 256 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 262; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 257 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 226; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 258 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 264; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 260 :
{
                cout<<'$'<<"macro lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 261 :
                if(cur == 'e'){
                state = 260; lexeme += cur;
                }else{
cout<<"unable to parse word"<<lexeme;
return 0;
}break;            case 262 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 266; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 264 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 267; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 266 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 24; lexeme += cur;
                }                else if(cur == 'e'){
                state = 226; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            case 267 :
                if(cur == '0'){
                state = 24; lexeme += cur;
                }                else if(cur == '1'){
                state = 24; lexeme += cur;
                }                else if(cur == '2'){
                state = 24; lexeme += cur;
                }                else if(cur == '3'){
                state = 24; lexeme += cur;
                }                else if(cur == '4'){
                state = 24; lexeme += cur;
                }                else if(cur == '5'){
                state = 24; lexeme += cur;
                }                else if(cur == '6'){
                state = 24; lexeme += cur;
                }                else if(cur == '7'){
                state = 24; lexeme += cur;
                }                else if(cur == '8'){
                state = 24; lexeme += cur;
                }                else if(cur == '9'){
                state = 24; lexeme += cur;
                }                else if(cur == 'A'){
                state = 24; lexeme += cur;
                }                else if(cur == 'B'){
                state = 24; lexeme += cur;
                }                else if(cur == 'C'){
                state = 24; lexeme += cur;
                }                else if(cur == 'D'){
                state = 24; lexeme += cur;
                }                else if(cur == 'E'){
                state = 24; lexeme += cur;
                }                else if(cur == 'F'){
                state = 24; lexeme += cur;
                }                else if(cur == 'G'){
                state = 24; lexeme += cur;
                }                else if(cur == 'H'){
                state = 24; lexeme += cur;
                }                else if(cur == 'I'){
                state = 24; lexeme += cur;
                }                else if(cur == 'J'){
                state = 24; lexeme += cur;
                }                else if(cur == 'K'){
                state = 24; lexeme += cur;
                }                else if(cur == 'L'){
                state = 24; lexeme += cur;
                }                else if(cur == 'M'){
                state = 24; lexeme += cur;
                }                else if(cur == 'N'){
                state = 24; lexeme += cur;
                }                else if(cur == 'O'){
                state = 24; lexeme += cur;
                }                else if(cur == 'P'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'R'){
                state = 24; lexeme += cur;
                }                else if(cur == 'S'){
                state = 24; lexeme += cur;
                }                else if(cur == 'T'){
                state = 24; lexeme += cur;
                }                else if(cur == 'U'){
                state = 24; lexeme += cur;
                }                else if(cur == 'V'){
                state = 24; lexeme += cur;
                }                else if(cur == 'W'){
                state = 24; lexeme += cur;
                }                else if(cur == 'X'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'Z'){
                state = 24; lexeme += cur;
                }                else if(cur == '_'){
                state = 24; lexeme += cur;
                }                else if(cur == 'a'){
                state = 24; lexeme += cur;
                }                else if(cur == 'b'){
                state = 24; lexeme += cur;
                }                else if(cur == 'c'){
                state = 24; lexeme += cur;
                }                else if(cur == 'd'){
                state = 226; lexeme += cur;
                }                else if(cur == 'e'){
                state = 24; lexeme += cur;
                }                else if(cur == 'f'){
                state = 24; lexeme += cur;
                }                else if(cur == 'g'){
                state = 24; lexeme += cur;
                }                else if(cur == 'h'){
                state = 24; lexeme += cur;
                }                else if(cur == 'i'){
                state = 24; lexeme += cur;
                }                else if(cur == 'j'){
                state = 24; lexeme += cur;
                }                else if(cur == 'k'){
                state = 24; lexeme += cur;
                }                else if(cur == 'l'){
                state = 24; lexeme += cur;
                }                else if(cur == 'm'){
                state = 24; lexeme += cur;
                }                else if(cur == 'n'){
                state = 24; lexeme += cur;
                }                else if(cur == 'o'){
                state = 24; lexeme += cur;
                }                else if(cur == 'p'){
                state = 24; lexeme += cur;
                }                else if(cur == 'q'){
                state = 24; lexeme += cur;
                }                else if(cur == 'r'){
                state = 24; lexeme += cur;
                }                else if(cur == 's'){
                state = 24; lexeme += cur;
                }                else if(cur == 't'){
                state = 24; lexeme += cur;
                }                else if(cur == 'u'){
                state = 24; lexeme += cur;
                }                else if(cur == 'v'){
                state = 24; lexeme += cur;
                }                else if(cur == 'w'){
                state = 24; lexeme += cur;
                }                else if(cur == 'x'){
                state = 24; lexeme += cur;
                }                else if(cur == 'y'){
                state = 24; lexeme += cur;
                }                else if(cur == 'z'){
                state = 24; lexeme += cur;
                }else{
                cout<<'$'<<"id lexeme: " <<lexeme<<endl;lexeme = "";
state = 0;
cin.unget();
}break;            default:
                break;
        }
    }
}
