//Common elements
class Solution
{
    public:    
       vector <int> commonElements (int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
        {
           int i=0,j=0,k=0;
           vector<int>ans;
           
           int prev1,prev2,prev3;
           
           prev1=prev2=prev3=INT_MIN;
           
           while(i<n1 and j<n2 and k<n3){
               
               while(arr1[i]==prev1 and i<n1)
               i++;
               
               while(arr2[j]==prev2 and j<n2)
               j++;
               
               while(arr3[k]==prev3 and k<n3)
               k++;
               
               if(arr1[i]==arr2[j] and arr2[j]==arr3[k]){
                   ans.push_back(arr1[i]);
                   prev1=arr1[i];
                   prev2=arr2[j];
                   prev3=arr3[k];
                   i++;
                   j++;
                   k++;
                   
               }
               else if(arr1[i]<arr2[j]){
                   prev1=arr1[i];
                   i++;
               }
                else if(arr2[j]<arr3[k]){
                   prev2=arr2[j];
                   j++;
               }
               else {
                   prev3=arr3[k];
                   k++;
               }
           }
           return ans;
            
        }

};
