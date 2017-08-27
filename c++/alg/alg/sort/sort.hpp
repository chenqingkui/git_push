#ifndef _MY_SORT_HPP_
#define _MY_SORT_HPP_
template <typename T> class ISort
{
public:
	virtual int sort(T[],int) = 0;
};
template <typename T> class CSelectSort : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		
		for(int index = 0; index < count;index++)
		{
			for(int index2 = index+1;index2 < count;index2++)
			{
				if(arr[index] > arr[index2])
				{
					T val = arr[index];
					arr[index] = arr[index2];
					arr[index2] = val;
				}
			}
		}
		return 0;
	}
};
template <typename T> class CBubbleSort : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		for(int index = 0; index < count;index++)
		{
			for(int index2 = 0;index2 < count - index - 1 ;index2++)
			{
				int nextIndex = index2 + 1;
				if(arr[index2] > arr[nextIndex])
				{
					T val = arr[index2];
					arr[index2] = arr[nextIndex];
					arr[nextIndex] = val;
				}
			}
		}
		return 0;
	}
};
template <typename T> class CBubbleSortV2 : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		for(int index = count - 1; index > 0;index--)
		{
			for(int index2 = 0;index2 < index ;index2++)
			{
				int nextIndex = index2 + 1;
				if(arr[index2] > arr[nextIndex])
				{
					T val = arr[index2];
					arr[index2] = arr[nextIndex];
					arr[nextIndex] = val;
				}
			}
		}
		return 0;
	}
};
template <typename T> class CBubbleSortV3 : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		for(int index = count - 1 ; index > 0 ;index--)
		{
			for(int index2 = count - 1;index2 > count - index - 1 ;index2--)
			{
				int prevIndex = index2 -1;
				if(arr[index2] < arr[prevIndex])
				{
					T val = arr[index2];
					arr[index2] = arr[prevIndex];
					arr[prevIndex] = val;
				}
			}
		}
		return 0;
	}
};
template <typename T> class CBubbleSortV4 : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		for(int index = 0 ; index < count ;index++)
		{
			for(int index2 = count - 1;index2 > index ;index2--)
			{
				int prevIndex = index2 -1;
				if(arr[index2] < arr[prevIndex])
				{
					T val = arr[index2];
					arr[index2] = arr[prevIndex];
					arr[prevIndex] = val;
				}
			}
		}
		return 0;
	}
};
template <typename T> class CInsertSort : public ISort<T>
{
public:
	virtual int sort(T arr[],int count)
	{
		for(int index = 0 ; index < count - 1 ;index++)
		{
			T elem = arr[index+1];
			int index2 = index;
			for(;index2  >= 0 ;index2--)
			{
				if(elem > arr[index2])
				{
					break;
				}
			}
			if(index2 + 1 >= 0 && index2 != index)
			{
				int index3 = index+1;
				for(;index3 > index2 + 1;index3--)
				{
					arr[index3] = arr[index3-1];
				}
				arr[index2+1] = elem;
			}
		}
		return 0;
	}
};
#endif