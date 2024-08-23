#include<iostream>
#include<vector>
using namespace std;


struct Point{
    double x,y;
};
 // we can also solve using pointer in which we can insipte using vector we using 

 // Point* polygon ---> if u want to use this then first u can allcate memory using new keyword in main function after the completion of code u can also delete the dynamic memory allocation
bool checkPolygonOrNot(Point point , vector<Point>polygon){
    int n =polygon.size();
    double x = point.x;
    double y = point.y;
    bool flag = false;

    Point p1 = polygon[0];
    for(int i=1;i<=n;i++){
        Point p2 = polygon[i%n];
        if(y>min(p1.y,p2.y)){
            if(y<=max(p1.y,p2.y)){
                if(x<=max(p1.x,p2.x)){
                    double Intersection = (y-p1.y) * (p2.x-p1.x)  / (p2.y-p1.y) + x;
                    if((p1.x == p2.x ) || x<=Intersection ){
                      flag = !flag;  
                    }
                }
            }
        }
        p1=p2;
    }
    return flag;
}


int main(){
    Point point = { 3, 2 };;

    vector<Point> pentagon = {
       { 0, 0 }, { 5, 0 }, { 6, 4 }, { 3, 6 }, { 0, 4 }
    };

    if(checkPolygonOrNot(point, pentagon)){
        cout<<"the point is inside the polygon";
    }
    else{
        cout<<"the point is outside the polygon";
    }
    return 0;
}