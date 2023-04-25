#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H
#include <iostream>
class DynamicIntegerArray
{
    private:
        int *data, size=10, pos;
    public:
        DynamicIntegerArray()
        {
            data= new int[size];
        }
        DynamicIntegerArray(int val)
        {
            data= new int[size];
            pos=val;
        }
        DynamicIntegerArray(const DynamicIntegerArray &o)
        {
            data=new int[o.size];
            for(int i=0;i<o.pos;i++)
                data[i]=o.data[i];
        }
        void set(int val,int posi)
        {
            data[posi]=val;
        }
        int get(int pos)const
        {
            return data[pos];
        }
        void print() const{
            std::cout<<"[";
            for(int i=0;i<pos;i++)
                std::cout<<data[i]<<" ";
            std::cout<<"]"<<std::endl;
        }
        void pushback(int val)
        {
            data[pos]=val;
            pos++;
        }
        void insertar(int val,int posi)
        {
            for(int i=pos;i>posi;i--)
                data[i]=data[i-1];
            data[posi]=val;
            pos++;
        }
        void remove(int posi)
        {
            for(int i=posi;i<pos;i++)
                data[i]=data[i+1];
            pos--;
        }
        ~DynamicIntegerArray(){
            delete[] data;
        }
};

#endif