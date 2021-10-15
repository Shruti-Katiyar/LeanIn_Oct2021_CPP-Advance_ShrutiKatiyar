//Intersection of two arrays
class Solution {
  public:
    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
      
        set <int> s;
    
    int ans=0; 
    
    if(n<m)
    {
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        
        for(int i =0;i<m;i++)
        {
            if(s.find(b[i])!=s.end())
            {
                ans++;
                s.erase(b[i]);
            }
        }
        return ans;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        
        for(int i =0;i<n;i++)
        {
            if(s.find(a[i])!=s.end())
            {
                ans++;
                s.erase(a[i]);
            }
        }
        return ans;
   
    }
    
    }
};
