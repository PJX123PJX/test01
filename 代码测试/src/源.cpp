//#pragma once
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//	//ð������������д����
//	//1.һ�߱Ƚ�һ��������������������ֵ / ��Сֵð�ݵ����һλ��
//	//2.�����Ż���д����ʹ��һ��������¼��ǰ�ִεıȽ��Ƿ��������������û�з���������ʾ�Ѿ����򣬲��ټ�������
//	//3.��һ���Ż���д��������ʹ�ñ�����¼��ǰ�ִ��Ƿ��������⣬��ʹ��һ��������¼�ϴη���������λ�ã���һ������ʱ�����ϴν�����λ�þ�ֹͣ�Ƚϡ�
//	vector<int> bubbleSort(vector<int>& nums) //�ڶ���
//	{
//		int i = nums.size() - 1, j = 0;
//		bool flag = true;
//		for (; i > 0 && flag; i--) 
//		{// ���û�з�����������˵��ʣ�ಿ���Ѿ������������
//			flag = false;
//			for (j = 0; j < i; j++)
//			{//�������ұ�Ԫ���Ѿ�����
//				if (nums[j] > nums[j + 1]) 
//				{// �����ߵ��������ұߵ������򽻻�����֤�ұߵ��������
//					swap(nums[j], nums[j + 1]);
//					flag = true; // ��ʾ�����˽���
//				}
//			}
//		}
//		return nums;
//	}
//
//	//ѡ������ԭ��
//	//�̶������еĵ�һ��Ԫ�أ��ֱ���ʣ�������Ԫ�ؽ��бȽϣ��Ӷ��ҵ������е���Сֵ�͹̶�Ԫ�ؽ���������̶�Ԫ�ؾ�����Сֵ�������轻����
//	//��ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ��ŵ����������е�ĩβ��
//	vector<int> select(vector<int>& nums)
//	{
//		int n = nums.size();
//		for (int i = 0; i < n; i++) 
//		{
//			int tmp = i;//��¼�ȵ�ǰԪ��С��Ԫ���±�
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
//	//��������ԭ��
//	//��������Insertion - Sort����ͨ�������������У�����δ�������ݣ��������������дӺ���ǰɨ�裬�ҵ���Ӧλ�ò����롣�����㷨�������£�
//	//1.�ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
//	//2.ȡ����һ��Ԫ�ص�key�����Ѿ������Ԫ�������дӺ���ǰɨ�裻
//	//3.���ɨ�赽��Ԫ�أ������򣩴�����Ԫ��key����ɨ�赽��Ԫ���Ƶ���һλ�ã�
//	//4.�ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ�ã�
//	//5.����Ԫ�ز��뵽��λ�ú�
//	//6.�ӽ�������n - 1��Ԫ�ؿ�ʼ�ظ�����2~5��
//	vector<int> insertSort(vector<int> &nums)
//	{
//		int i = 1, j = 0;
//		for (; i < nums.size(); i++) 
//		{
//			int tmp = nums[i];
//			for (j = i; j > 0; j--) 
//			{
//				if (tmp < nums[j - 1])
//					nums[j] = nums[j - 1];// ��������Ԫ�������Ųλ
//				else
//					break;//����ִ��j--����
//			}
//			nums[j] = tmp;// ����
//		}
//		return nums;
//	}
//
//	//ϣ������ԭ��(�˽⼴��)
//	//�Ƚ�����������ļ�¼���зָ��Ϊ���������зֱ����ֱ�Ӳ�����������������һ��Ԫ�ؿ���һ���Եس�����λ��ǰ��һ�󲽣�Ȼ���㷨��ȡԽ��ԽС�Ĳ�����������
//	//����������Ϊ1ʱ������������Ϊһ����¼���������������һ��������ͨ�Ĳ����������������
//	vector<int> shellSort(vector<int>& nums)
//	{
//		int n = nums.size(), tmp = 0;
//		int gap = n / 2;// ������У���ϣ�����������ǳ�֮Ϊ��������
//		while (gap)
//		{
//			for (int i = gap; i < n; i++)
//			{// �� gap ��ʼ������˳��ÿ��Ԫ��������ǰ�����Լ����ڵ���
//				tmp = nums[i];//վ��������ʼ��λ��
//				int preIndex = i - gap;// ����ǰһ�����ֵ�����
//				while (preIndex >= 0 && nums[preIndex] > tmp) 
//				{
//					nums[preIndex + gap] = nums[preIndex];// ���Ųλ��
//					preIndex -= gap;
//				}
//				nums[preIndex + gap] = tmp; // tmp�ҵ����Լ���λ�ã�����
//			}
//			gap /= 2;
//		}
//		return nums;
//	}
//
//	//��������ԭ��
//	//1.��������ȡ��һ��������֮Ϊ������pivot��
//	//2.�������飬���Ȼ���������ַŵ������ұߣ��Ȼ���С�����ַŵ�������ߡ�������ɺ����鱻�ֳ���������������
//	//3.����������������Ϊ�������飬�ظ�ǰ�������裬ֱ���������
//	int partition(vector<int>& nums, int low, int high) 
//	{// �� nums �� low �� high �������������Ȼ���С���ұ�����Ȼ�����Ȼ�󷵻��м�ֵ���±�
//		int pivot = nums[low]; // ȡ��һ����Ϊ����
//		while (low < high)
//		{
//			while (low < high and nums[high] >= pivot)
//				--high;// �ҵ���һ��С�ڻ�����λ��
//			nums[low] = nums[high];
//			while (low < high and nums[low] <= pivot)
//				++low;// �ҵ���һ�����ڻ�����λ��
//			nums[high] = nums[low];// ��������������ʹ����߷�����С�ڻ���ڻ������ұ߷������ڻ���ڻ���
//		}
//		nums[low] = pivot;
//		return low;
//	}
//	void QuickSort(vector<int>& nums, int low, int high)
//	{
//		if (low < high) 
//		{
//			int pivotpos = partition(nums, low, high);// �����������������м�ֵ���±�
//			QuickSort(nums, low, pivotpos - 1);// ����������������
//			QuickSort(nums, pivotpos + 1, high);// ���ұ������������
//		}
//	}
//	vector<int> QuicksortArray(vector<int>& nums)
//	{ // ������
//		int n = nums.size();
//		QuickSort(nums, 0, n - 1);
//		return nums;
//	}
//
//	//�鲢����ԭ��
//	//1.�ѳ���Ϊn���������зֳ���������Ϊn / 2�������У�
//	//2.�������������зֱ���ù鲢����
//	//3.����������õ������кϲ���һ�����յ��������С�
//	vector<int> MergesortArray(vector<int>& nums) 
//	{
//		int n = nums.size();
//		MergeSort(nums, 0, n - 1);
//		return nums;
//	}
//	void MergeSort(vector<int>& nums, int low, int high) {
//		if (low >= high)
//			return; // ��ֹ�ݹ�������������г���Ϊ1
//		int mid = low + (high - low) / 2;  // ȡ�������м��Ԫ��
//		MergeSort(nums, low, mid);  // �����ߵݹ�
//		MergeSort(nums, mid + 1, high);  // ���Ұ�ߵݹ�
//		Merge(nums, low, mid, high);  // �ϲ�
//	}
//	void Merge(vector<int>& nums, int low, int mid, int high)
//	{
//		//�ϲ�����������������,ʹ֮��Ϊ�µ���������
//		//lowΪ��1�������ĵ�1��Ԫ�أ�iָ���1��Ԫ��, midΪ��1�����������1��Ԫ��
//		int i = low, j = mid + 1, k = 0;  //mid+1Ϊ��2��������1��Ԫ�أ�jָ���1��Ԫ��
//		//int *temp = new int[high - low + 1]; //temp�����ݴ�ϲ�����������
//		vector<int> temp(high - low + 1);
//		while (i <= mid && j <= high) 
//		{
//			if (nums[i] <= nums[j]) //��С���ȴ���temp��
//				temp[k++] = nums[i++];
//			else
//				temp[k++] = nums[j++];
//		}
//		while (i <= mid)//���Ƚ���֮�󣬵�һ������������ʣ�࣬��ֱ�Ӹ��Ƶ�t������
//			temp[k++] = nums[i++];
//		while (j <= high)//ͬ��
//			temp[k++] = nums[j++];
//		for (i = low, k = 0; i <= high; i++, k++)//���ź���Ĵ��arr��low��high������
//			nums[i] = temp[k];
//		//delete [] temp;//�ͷ��ڴ棬����ָ��������飬������delete []
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
