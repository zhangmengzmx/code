package bitetech.ds;

import org.omg.CORBA.PRIVATE_MEMBER;

import java.util.Arrays;

public class SequenceArrayImpl implements Sequence {
    private Object[] elementData;
    private final static int DEFAULT_CAPACITY=10;
    //  存放元素个数
    private int size;
    private final static int MAX_CAPACITY=Integer.MAX_VALUE-8;

    public SequenceArrayImpl(){
        //初始化存储元素数组，初始化为10；
        this.elementData=new Object[DEFAULT_CAPACITY];
    }
    public SequenceArrayImpl(int capacity){
        if(capacity>0){
            this.elementData=new Object[capacity];
        }
    }
    @Override
    public void add(Object data) {
        //首先判断添加元素是否会导致越界
        //若越界先扩容，而后存储元素
        ensureCapacityInternal(size+1);
        elementData[size++]=data;
    }

    @Override
    public boolean remove(int index) {
        rangeChack(index);
        int movesteps=size-index-1;
        if(movesteps>0){
            System.arraycopy(elementData,index+1,elementData,index,movesteps);
        }
        elementData[--size]=null;
        return true;
    }

    @Override
    public Object get(int index) {
        rangeChack(index);
        return elementData[index];
    }

    @Override
    public boolean contains(Object data) {
        //判断是否有指定内容
        if(data==null){
            for(int i=0;i<size;i++){
                if(elementData[i]==null){
                    return true;
                }
            }
        }else{
            for(int i=0;i<size;i++){
                if(data.equals(elementData[i])){

                }
            }
        }
        return false;
    }

    @Override
    public Object set(int index, Object newData) {
        Object oldData=elementData[index];
        elementData[index]=newData;
        return oldData;
    }

    @Override
    public int size() {
        return this.size;
    }

    @Override
    public void clear() {
        for(int i=0;i<size;i++){
            elementData[i]=null;
        }
        this.size=0;
    }

    @Override
    public Object[] toArray() {
        return this.elementData;
    }
    private void ensureCapacityInternal(int cap){
         if(cap-elementData.length>0){
             //扩容策略
             grow(cap);
         }
    }
    private void grow(int cap){
        int oldCap=elementData.length;
        int newCap=oldCap<<1;
        if(cap>newCap){
            newCap=cap;
        }
        if(newCap>MAX_CAPACITY){
            throw new IndexOutOfBoundsException("线性表超出最大值");
        }
        //数组扩容
        elementData= Arrays.copyOf(elementData,newCap);
    }
    private void rangeChack(int index){
        if(index<0||index>=size){
            throw new ArrayIndexOutOfBoundsException("索引非法");
        }
    }
}
