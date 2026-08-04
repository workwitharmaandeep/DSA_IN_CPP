/*what is a vector ?
vector is a dynamic array means an arraywhich can change its length.vector is a sequence data structure.
there is two terms size and capacity in vectors.
size referrs to no of elements in the vector.
and capacity refers to the no. of elements an vector can store.
syntax to create vec:
first include vector:-#include<vector>
creating a vector
vector<Data_type> name;
we can also intialize vector as we do in arrays.
there is some functions of vector like push_back,pop_back,insert,erase,clear,emplace_back,at,front,back,size,capacity,emptyand many more
detail working of each:(Don't worry if you don't understand any method we will discuss this in below code with example)
push_back(val): Appends an element to the end.
pop_back(): Removes the very last element.
insert(pos, val): Inserts an element at a specific iterator position.
erase(pos): Deletes an element (or a range of elements) at a specific position.
clear(): Erases every single element, leaving the vector empty.
assign(n, val): Replaces the current contents with n copies of val.
emplace_back(args): Constructs an element directly in place at the end (more efficient than push_back).
operator[i]: Accesses the element at index i (fast, no bounds checking).
at(i): Accesses the element at index i safely (throws an error if out of bounds)
.front(): Grabs a reference to the first element.
back(): Grabs a reference to the last element.
data(): Returns a direct pointer to the underlying raw array.
size(): Returns the total number of elements currently stored.
empty(): Checks if the vector has zero elements (returns true or false).
capacity(): Returns the number of elements the allocated memory can hold before resizing.
resize(n): Changes the vector size to hold exactly n elements.
reserve(n): Pre-allocates block memory for at least n elements to prevent frequent automatic resizing.
shrink_to_fit(): Reduces capacity to exactly match the current size to save memory.
begin(): Returns an iterator pointing to the first element.
end(): Returns an iterator pointing just past the last element.
rbegin(): Returns a reverse iterator pointing to the last element.
rend(): Returns a reverse iterator pointing just before the first element.
there is concept of resizing in vector in this when the capacity of the vector is full or we say size and capacity is equal then we try to add element using push_back then capacity will be doubled.
ex(c=capacity,s=size,pb=push_back()):
vector<int> vec;
pb(1);
s=1,c=1,{1}
pb(2)
s=2,c=2,{1,2}
pb(3)
s=3,c=4,{1,2,3}
pb(4)
s=4,c=4,{1,2,3,4}
pb(5)
s=5,c=8,{1,2,3,4,5}
and so on 
note: on poping elements capacity remain same it doesnot decreases but we can use the shrinktofit function to decrease the capacity according to the elements  
*/
#include<iostream>
#include<vector>
using namespace std;
void vecp( vector<int>collection_to_loop){
    for(auto var : collection_to_loop)
    {
        cout << var << " ";       // function to print all the elements of the vector 
    }
    cout<<endl;
}
int main(){
vector<int> vec={1,2};//intializing the vector some values
vec.push_back(7);
vec.push_back(8);//adding a element in the end of the vector 
vecp(vec);// printing each element vecp userdefined function
//output 1 2 7 8
vec.pop_back(); //poping or deleting last element 
vecp(vec);
//output 1 2 7
vec.insert(vec.begin()+2,100);//inserting element 100 at index 2 which is 3 element as in array vector index also starts from zero.in insert 1st argument is postion and 2nd is value. and position must be iterator like begin(),end(),rend(),rbegin(); we can also pass a list of elements
//Describing begin,end,rbegin,rend:
//begin:it gives the pointer (iterator ) of the first element of the vector
//what is iterator ?
// iterator is a special pointer which uses  * symbol to open the locker and see the data.and also use the + 1 or ++ command to move that pointing finger to the second locker, then the third locker, and so on 
//end:it gives iterator of the last element.
//rbegin:it gives the iterator of first element from last and on increment it moves to second last element and so on and this is callled reverse iterator as it is begining element from reverse direction.
//rend:similarly with rbegin it gives last element from reverse direction which is actually the first element of the vector.
//when we have begin and end why we rbegin and rend?
// the purpose of the rbegin and rend is handle iteration neatly and safely
//Trying to use end() - 1 on an empty container causes a crash or bad memory error, while rbegin() == rend() handles empty lists safely.
vecp(vec);
vec.assign(3,4);
vecp(vec);
vec.assign({5,4,3,2,1});
vecp(vec);
//assign is method to replace the old values with new one with same value repeating n times or with a list n different/same or mix  values 
vec.clear();//clear function deletes all the element in the vector but the capacity doesnot changes capacity remains same as previous .
cout<<"size after clear method  is :"<<vec.size()<< endl;//size is used to get no of element in the vector.
cout<<"but the capacity is" << vec.capacity()<<endl;//capacity is used to get know that for how many elements memory is allocated
vec.emplace_back(30);// emplace_back is used to add a new element to the end of the containe
vec.push_back(60);
vecp(vec);
//what is the difference between emplace_back and push_back?
/*
for basic types (like int, float, char, and pointers), push_back and emplace_back are exactly the same.
but for objects they behave different.
in case of object push first create a copy and then add that to the vector whereas emplace back directly add the object to vector without creating any copy so while working with objects tries to use emplace it decreases the execution time.
*/
vec.erase(vec.begin()+1);//erase function delete the element at a specific postion in this case at index 2
vecp(vec);
vec.
}
