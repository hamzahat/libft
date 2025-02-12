int *int_arr_binarySearch(int *arr, int low, int high, int key)
{
	while (low <= high)
	{
		int	mid;

		mid = low + (high - low) / 2;
		if (arr[mid] == key)
			return (&arr[mid]);
		else if (arr[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (NULL);
}