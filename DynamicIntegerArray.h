#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H
#include <iostream>
class DynamicIntegerArray
{
    private:
        int *data, size;
    public:
        DynamicIntegerArray()
        {
            this->size=0;
            data= new int[size];
        }
        DynamicIntegerArray(int val)
        {
            this->size=val;
            data= new int[size];
        }
        DynamicIntegerArray(const DynamicIntegerArray &o)
        {
            data=new int[o.size];
            for(int i=0;i<o.size;i++)
                data[i]=o.data[i];
        }
        void set(int val,int pos)
        {
            data[pos]=val;
        }
        int get(int pos)const
        {
            return data[pos];
        }
        void print() const{
            std::cout<<"[";
            for(int i=0;i<size;i++)
                std::cout<<data[i]<<" ";
            std::cout<<"]"<<std::endl;
        }
        void pushback(int val)
        {
            int *newdata= new int[size+1];
            for(int i=0;i<size;i++)
                newdata[i]=data[i];
            newdata[size]=val;
            size++;
            delete[] data;
            this->data=newdata;
        }
        void insertar(int val,int pos)
        {
            int *newdata= new int[size+1];
            for(int i=size;i>pos;i--)
                newdata[i]=data[i-1];
            for(int i=0;i<pos;i++)
                newdata[i]=data[i];
            newdata[pos]=val;
            size++;
            delete[] data;
            this->data=newdata;
        }
        void remove(int pos)
        {
            int *newdata= new int[size-1];
            for(int i=pos;i<size-1;i++)
                newdata[i]=data[i+1];
            for(int i=0;i<pos;i++)
                newdata[i]=data[i];
            size--;
            delete[] data;
            this->data=newdata;
        }
        ~DynamicIntegerArray(){
            delete[] data;
        }
};

#endif