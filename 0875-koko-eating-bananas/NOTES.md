take two pointer one is low=1 and other is h= max of piles.
take the mid and divide the pile with and sum the value
if sum is greater then mid then decrement right pointer  h=mid -1
if sum is smaller then mid the increment left pointer with low=mid+1
at the same time store the minimum value of mid as ans and return it at the end​