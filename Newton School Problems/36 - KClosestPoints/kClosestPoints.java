// import java.util.ArrayList;
import java.util.*;

import javax.tools.Diagnostic;

import java.io.*;

public class kClosestPoints{

class pair
{
    
    int first;
    int second;
    pair(int f, int s)
    {
        this.first = f;
        this.second = s;
    }
}

static int distance(pair p1,pair p2){

    return (int)Math.sqrt(Math.pow((p1.first-p2.first),2)+Math.sqrt(Math.pow((p1.second-p2.second), 2)));
}


public static ArrayList<pair> kNeighbourPoints(ArrayList<pair> points, pair P, int K)
    {
        ArrayList<pair> ans = new ArrayList<>();
        ArrayList<pair1> dist = new ArrayList<>();
        for(int i = 0; i < points.size(); i++)
        {
            long point1 = (points.get(i).first - P.first);
            long point2 = (points.get(i).second - P.second);
            long val = point1*point1 + point2*point2;
            dist.add(new pair1(val, points.get(i)));
            
         }
         Collections.sort(dist, new Comparator<pair1>(){
             @Override
             public int compare(pair1 p1, pair1 p2)
             {
                 return p1.third < p2.third? -1:1;
             }
         });
        
       for(int i= 0; i < K; i++)
       {
           ans.add(dist.get(i).p);
       }
       return ans; 
    }




static class pair1
{
    long third;
    pair p;
    pair1(long t, pair p)
    {
        this.third = t;
        this.p = p;
    }
}

    public static void main(String[] args) {
        
    }
}