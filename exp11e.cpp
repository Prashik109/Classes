//PRASHIK MAGHADE
/*PRN: 22070123109
Experiment_11(e)
*/
#include <iostream>
using namespace std;
int count =0;
class destruct{
    public:
    destruct(){
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct(){
        count--;
        cout<<"No. of objects created: "<<count<<endl;
    }
    };

int main(){
    destruct aa,bb,cc;

    return 0;
}

/*OUTPUT
No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 2
No. of objects created: 1
No. of objects created: 0
*/
