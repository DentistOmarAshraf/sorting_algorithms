#!/usr/bin/env node
//This Function is printing Array Function
//You Can console.log(arr) Dierctl
let print_array = (arr, low, high)=>{
    str = ""
    for (i = low ; i <= high ; i++){
         // this mean add to string when its not at start
	    if (i != low){
		    str +=', '
        }
        str += arr[i];
    }
    console.log('['+ str +']')
    console.log("------------------------------------")
}
//Bub_sort: the sorting Function
let Bub_sort = (arr, size)=>{
    do{
        swap = false;
        for (i = 0 ; i < size ; i++){
            for (j = 0 ; j < size - 1 - i ; j++){
                if (arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swap = true;
            }
        }
    }
    }while (swap)
}

let main = ()=>{
    let arr = [9, 4, 1, 3, 2, 7, 0, 6, 5, 8]
    console.log("Befor Sort");
    print_array(arr, 0, arr.length - 1);
    Bub_sort(arr, arr.length);
    console.log("After Sorting");
    print_array(arr, 0, arr.length -1)
}
main()