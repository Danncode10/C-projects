#include <iostream>
//using namespace std;
template <typename T, typename U>


auto max(T x, U y){
    return ((x>y)? x: y);

}

int main(){
    
    std::cout << max(1,2.1) << std::endl;
    
    std::cout << std::endl;
    return 0;
}

//std::cout << max(1,2) << std::endl;
////    std::cout << max('1','2') << std::endl;
////    std::cout << max('a','b') << std::endl;
////    std::cout << max(1.2,2.4) << std::endl;
////
////    //How about 2 different data type


//int max(int x, int y){
//    if(x > y){
//        return x;
//    }
//    else{
//        return y;
//    }
//}
