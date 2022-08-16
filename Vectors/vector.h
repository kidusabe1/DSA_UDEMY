template <typename T>
class VECTOR{
    T *arr;
    int cs;
    int ms;
    public:
        //Creating a default constructor,(gets called automatically everytime we create an object)
        VECTOR(int max_size=1)
        {
            cs=0;
            ms=max_size;
            arr=new T[ms];
        }
        //push-back function is to add elements at the end of the array
        //in the below functions and parameters, I am using the 'const' keyword to avoid errors and make debugging easier
        void push_back(const T d)
        {
            //checking if our array has filled or not
            if(cs==ms)
            {
                T* old_arr=arr;
                //Doubling the size and redeclaring a new array
                ms=ms*2;
                arr= new T[ms];
                //We have to copy the elements from the old array to the new array
                for(int i=0;i<cs;i++)
                {
                    arr[i]=old_arr[i];
                }
                //Now we have to delete the old array
                delete [] old_arr;  
            }
            arr[cs]=d;
            cs++;
        }
        void pop_back()
        {
            if(cs>=0)
            {
                cs--;
            }
        }
        bool is_empty() const
        {
            return cs==0;
        }
        T front() const
        {
            return arr[0];
        }
        T back() const
        {
            return arr[cs-1];
        }
        T at(const int i) const
        {
            return arr[i];
        }
        int size() const
        {
            return cs;
        }
        int capacity() const
        {
            return ms;
        }
        T operator[] (const int i) const
        {
            return arr[i];
        }
};