//PRASHIK MAGHADE
/*PRN: 22070123109
Experiment_11(a)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double ht,breadth,len;
};
int main(){
    cube volume;
    cout<<"Enter the height, breadth and lenght of the cube: ";
    cin>>volume.ht>>volume.breadth>>volume.len;
    cout<<endl<<"The volume of the cube is: "<<volume.ht*volume.breadth*volume.len;
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 7 6 3
The volume of the cube is: 126
*/
