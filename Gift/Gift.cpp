#include <iostream>

//it's simple vector3 subtraction can be used in any cheat to get distance
//like you can subtract vector between localplayer and target
//you need to enter WORLD location of target as first vector and your WORLD location as second vector and Extract the square root

using namespace std;

struct Vector3
{
    float x;
    float y;
    float z;

};
//Example Subtracting
Vector3 VectSubtract(Vector3 first,Vector3 second)
{
    Vector3 result{};
    result.x = (first.x - second.x);
    result.y = (first.y - second.y);
    result.z = (first.z - second.z);
    return result;
}
//example get distance 
//we are getting result:
//auto ResultVector = VectSubtract(first,second);
//next step is Extract the square root

float GetDistance(Vector3 ResultVector)
{
    return sqrt(((ResultVector.x * ResultVector.x) + (ResultVector.y * ResultVector.y)) + (ResultVector.z * ResultVector.z));
}

//if you want to get distance in meters - you need to divide result on 100
//auto Distance = GetDistance(ResultVector)/100;
//and we got it . We can print distance using snprintf
//char buf[255];
//snprintf(buf,sizeof(buf), "%f [m]", Distance);
//than you can print buf 
//ImGui::GetBackgroundDrawList()->AddText(ImVec2(0,0), ImColor(255,255,255,255), buf);


int main()
{
    //just simple example how to subtract
    Vector3 firstvec{};
    Vector3 secondtvec{};
   cout << "Enter first vector\n";
   cin >> firstvec.x; cout<<endl;
   cin >> firstvec.y; cout<<endl;
   cin >> firstvec.z; cout<<endl;
   cout << "Enter second vector\n";
   cin >> secondtvec.x; cout<<endl;
   cin >> secondtvec.y; cout<<endl;
   cin >> secondtvec.z; cout<<endl;
   auto Result =  VectSubtract(firstvec, secondtvec);
   cout << "Vector is = (" << Result.x << ", " << Result.y << ", " << Result.z << ")" << endl;
  
   system("pause");
 
}

