#!/usr/bin/env node
function print_array(arr, low, high)
{
    str = ""
    for (i = low ; i <= high ; i++)
    {
	    if (i != low)
		    str +=', '
        str += arr[i];
    }
    console.log('['+ str +']')
    console.log("------------------------------------")
}

function binsrch(arr, search)
{
    let low = 0;
    let high = arr.length - 1;

    while (low <= high)
    {
        print_array(arr, low, high)
        mid = Math.floor((high + low) / 2)
        guees = arr[mid]
        if (guees === search)
        {
            return mid
        }
        if (guees > search)
        {
            high = mid - 1;
        }else{
            low = mid + 1
        }
    }
    return ("NONE")
}

testarr = []
for (i = 0;i < 100; i++){
    testarr.push(i)
}

src =  9;
x = binsrch(testarr, src)
console.log(x)
console.log('the arr ' + testarr[x])
