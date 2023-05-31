int getLargest(int arr[] , int n){
	int largest = 0;
	for(int i=1; i<n; i++)
	if(arr[i] > arr[largest])
	largest = i;
	return largest;
}

int secondlargest(int arr[] , int n){
	int largest = getLargest(arr , n);
	// kyoki aisa bhi ho sakta hai ki koi
	// second largest ho hi na
	int res=-1;
	for(int i=0 ; i<n ; i++){
		if(arr[i] != arr[largest]){
			if(res == -1)
			res = i;
			else if(arr[i]>arr[res])
			res = i;
		}
	}
	return res;
}
