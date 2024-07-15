//#pragma once
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//	//冒泡排序有三种写法：
//	//1.一边比较一边向后两两交换，将最大值 / 最小值冒泡到最后一位；
//	//2.经过优化的写法：使用一个变量记录当前轮次的比较是否发生过交换，如果没有发生交换表示已经有序，不再继续排序；
//	//3.进一步优化的写法：除了使用变量记录当前轮次是否发生交换外，再使用一个变量记录上次发生交换的位置，下一轮排序时到达上次交换的位置就停止比较。
//	vector<int> bubbleSort(vector<int>& nums) //第二种
//	{
//		int i = nums.size() - 1, j = 0;
//		bool flag = true;
//		for (; i > 0 && flag; i--) 
//		{// 如果没有发生过交换，说明剩余部分已经有序，排序完成
//			flag = false;
//			for (j = 0; j < i; j++)
//			{//保持最右边元素已经排序
//				if (nums[j] > nums[j + 1]) 
//				{// 如果左边的数大于右边的数，则交换，保证右边的数字最大
//					swap(nums[j], nums[j + 1]);
//					flag = true; // 表示发生了交换
//				}
//			}
//		}
//		return nums;
//	}
//
//	//选择排序原理
//	//固定数组中的第一个元素，分别与剩余的所有元素进行比较，从而找到序列中的最小值和固定元素交换，如果固定元素就是最小值，则无需交换。
//	//在剩余未排序元素中继续寻找最小（大）元素，放到已排序序列的末尾。
//	vector<int> select(vector<int>& nums)
//	{
//		int n = nums.size();
//		for (int i = 0; i < n; i++) 
//		{
//			int tmp = i;//记录比当前元素小的元素下标
//			for (int j = i + 1; j < n; j++) 
//			{
//				if (nums[j] < nums[tmp])
//					tmp = j;
//			}
//			swap(nums[i], nums[tmp]);
//		}
//		return nums;
//	}
//
//	//插入排序原理
//	//插入排序（Insertion - Sort）是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。具体算法描述如下：
//	//1.从第一个元素开始，该元素可以认为已经被排序；
//	//2.取出下一个元素的key，在已经排序的元素序列中从后向前扫描；
//	//3.如果扫描到的元素（已排序）大于新元素key，将扫描到的元素移到下一位置；
//	//4.重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
//	//5.将新元素插入到该位置后；
//	//6.从接下来的n - 1个元素开始重复步骤2~5。
//	vector<int> insertSort(vector<int> &nums)
//	{
//		int i = 1, j = 0;
//		for (; i < nums.size(); i++) 
//		{
//			int tmp = nums[i];
//			for (j = i; j > 0; j--) 
//			{
//				if (tmp < nums[j - 1])
//					nums[j] = nums[j - 1];// 把已排序元素逐步向后挪位
//				else
//					break;//不再执行j--操作
//			}
//			nums[j] = tmp;// 插入
//		}
//		return nums;
//	}
//
//	//希尔排序原理(了解即可)
//	//先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，这样可以让一个元素可以一次性地朝最终位置前进一大步，然后算法再取越来越小的步长进行排序。
//	//仅增量因子为1时，整个序列作为一个记录序列来处理，即最后一步进行普通的插入排序后，序列有序。
//	vector<int> shellSort(vector<int>& nums)
//	{
//		int n = nums.size(), tmp = 0;
//		int gap = n / 2;// 间隔序列，在希尔排序中我们称之为增量序列
//		while (gap)
//		{
//			for (int i = gap; i < n; i++)
//			{// 从 gap 开始，按照顺序将每个元素依次向前插入自己所在的组
//				tmp = nums[i];//站起来，开始找位置
//				int preIndex = i - gap;// 该组前一个数字的索引
//				while (preIndex >= 0 && nums[preIndex] > tmp) 
//				{
//					nums[preIndex + gap] = nums[preIndex];// 向后挪位置
//					preIndex -= gap;
//				}
//				nums[preIndex + gap] = tmp; // tmp找到了自己的位置，坐下
//			}
//			gap /= 2;
//		}
//		return nums;
//	}
//
//	//快速排序原理
//	//1.从数组中取出一个数，称之为基数（pivot）
//	//2.遍历数组，将比基数大的数字放到它的右边，比基数小的数字放到它的左边。遍历完成后，数组被分成了左右两个区域
//	//3.将左右两个区域视为两个数组，重复前两个步骤，直到排序完成
//	int partition(vector<int>& nums, int low, int high) 
//	{// 将 nums 从 low 到 high 分区，左边区域比基数小，右边区域比基数大，然后返回中间值的下标
//		int pivot = nums[low]; // 取第一个数为基数
//		while (low < high)
//		{
//			while (low < high and nums[high] >= pivot)
//				--high;// 找到第一个小于基数的位置
//			nums[low] = nums[high];
//			while (low < high and nums[low] <= pivot)
//				++low;// 找到第一个大于基数的位置
//			nums[high] = nums[low];// 交换这两个数，使得左边分区都小于或等于基数，右边分区大于或等于基数
//		}
//		nums[low] = pivot;
//		return low;
//	}
//	void QuickSort(vector<int>& nums, int low, int high)
//	{
//		if (low < high) 
//		{
//			int pivotpos = partition(nums, low, high);// 将数组分区，并获得中间值的下标
//			QuickSort(nums, low, pivotpos - 1);// 对左边区域快速排序
//			QuickSort(nums, pivotpos + 1, high);// 对右边区域快速排序
//		}
//	}
//	vector<int> QuicksortArray(vector<int>& nums)
//	{ // 主函数
//		int n = nums.size();
//		QuickSort(nums, 0, n - 1);
//		return nums;
//	}
//
//	//归并排序原理
//	//1.把长度为n的输入序列分成两个长度为n / 2的子序列；
//	//2.对这两个子序列分别采用归并排序；
//	//3.将两个排序好的子序列合并成一个最终的排序序列。
//	vector<int> MergesortArray(vector<int>& nums) 
//	{
//		int n = nums.size();
//		MergeSort(nums, 0, n - 1);
//		return nums;
//	}
//	void MergeSort(vector<int>& nums, int low, int high) {
//		if (low >= high)
//			return; // 终止递归的条件，子序列长度为1
//		int mid = low + (high - low) / 2;  // 取得序列中间的元素
//		MergeSort(nums, low, mid);  // 对左半边递归
//		MergeSort(nums, mid + 1, high);  // 对右半边递归
//		Merge(nums, low, mid, high);  // 合并
//	}
//	void Merge(vector<int>& nums, int low, int mid, int high)
//	{
//		//合并两个相邻有序区间,使之成为新的有序区间
//		//low为第1有序区的第1个元素，i指向第1个元素, mid为第1有序区的最后1个元素
//		int i = low, j = mid + 1, k = 0;  //mid+1为第2有序区第1个元素，j指向第1个元素
//		//int *temp = new int[high - low + 1]; //temp数组暂存合并的有序序列
//		vector<int> temp(high - low + 1);
//		while (i <= mid && j <= high) 
//		{
//			if (nums[i] <= nums[j]) //较小的先存入temp中
//				temp[k++] = nums[i++];
//			else
//				temp[k++] = nums[j++];
//		}
//		while (i <= mid)//若比较完之后，第一个有序区仍有剩余，则直接复制到t数组中
//			temp[k++] = nums[i++];
//		while (j <= high)//同上
//			temp[k++] = nums[j++];
//		for (i = low, k = 0; i <= high; i++, k++)//将排好序的存回arr中low到high这区间
//			nums[i] = temp[k];
//		//delete [] temp;//释放内存，由于指向的是数组，必须用delete []
//	}
//
//};
//
//int main()
//{
//	Solution s;
//	vector<int> nums = { 8,9,1,7,2,3,5,4,6,0 };
//	//vector<int> result = s.bubbleSort(nums);
//	//vector<int> result = s.select(nums);
//	//vector<int> result = s.shellSort(nums);
//	//vector<int> result = s.sortArray(nums);
//	for (size_t i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << "\t";
//	}
//	return 0;
//}
