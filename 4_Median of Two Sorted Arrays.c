
#include<stdio.h>
#include<stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
        static double median=0;
        double temp_array[nums1Size+nums2Size];
        for(int i=0; i< nums1Size;i ++)
        {
            temp_array[i]=nums1[i];
        }
        for(int i=0; i< nums2Size;i ++)
        {
            temp_array[i+nums1Size]=nums2[i];
        }

        int a=0;
        for (int i = 0; i < (nums1Size+nums2Size); ++i)
            {
                for (int j = i + 1; j < (nums1Size+nums2Size); ++j)
                {
                    if (temp_array[i] > temp_array[j])
                    {
                        a =  temp_array[i];
                        temp_array[i] = temp_array[j];
                        temp_array[j] = a;
                    }
                }
            }

            if((nums1Size+nums2Size)%2 == 0)
            {
                median=(double)((temp_array[((nums1Size+nums2Size)/2)] + temp_array[((nums1Size+nums2Size)/2)-1])/2) ;
            }
            else
            {
                median=(double)(temp_array[((nums1Size+nums2Size)/2)]);
            }
    return median;
}

