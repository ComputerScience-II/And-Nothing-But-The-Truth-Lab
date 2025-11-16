#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool vectorChecker(const vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); ++i) {

        if (vec[i - 1] > vec[i]) {

            return false;
        }
    }
    return true;
}

bool ifSubsetSum(const vector<int>& a, const vector<int>& b, int targetNum) {
   int sum = 0;

   for ( int i : b) {

       sum += i;

   }

   if (sum == targetNum) {
       return true;
   }

    else {

       return false;
   }

}

bool primeChecker(int num) {

   if ( num < 2 ) {

       return false;

   }

   for (int i = 2; i < num; i++) {

       if (num % i == 0) {

           return false;

       }

   }

   return true;

}


bool primeFactorizationChecker(int num, const vector<int>& b) {

    int product = 1;

    for (int a : b) {

        if (!primeChecker(a)) {

            return false;

        }

        product = product * a;


    }

    return product == num;




}


void testCases() {

    const vector<int> a = {1, 2, 3, 4, 5};

    assert(ifSubsetSum(a, {2, 3}, 5) == true);

    assert(ifSubsetSum(a, {2, 4}, 5) == false);

    assert(primeChecker(7) == true);

    assert(primeChecker(10) == false);

    assert(primeFactorizationChecker(15, {3, 5}) == true);

    assert(primeFactorizationChecker(12, {2, 6}) == false);




}


int main() {


    testCases();

    cout << "The code works" << endl;

    return 0;
}