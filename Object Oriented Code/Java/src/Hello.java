import java.io.*;
import java.util.*;

public class Solution {

    public static void mhttp://marketplace.eclipse.org/marketplace-client-intro?mpc_install=1403812ain(String[] args) {
        scanner input=new scanner(System.in);
        String twelve_hour=input.nextLine();
        String twenty_four="";
        String arr[]=twelve_hour.split(":");
        char am_pm=arr[2].charAt(2);
        
        if(am_pm=='a'||am_pm=='A'){
            if(arr[0].equals("12")){
                String am12="00";
                am12+=":"+arr[1]+":"+arr[2].charAt(0)+arr[2].charAt(1);
                System.out.println(am12);
            }
            else{
                System.out.println(arr[0]+":"+arr[1]+":"+arr[2].charAt(0)+arr[2].charAt(1));}
            }         
        else{
            int time=Integer.parseInt(arr[0]);
            if(time<12){
                time+=12;
                swenty_four+=time+":"+arr[1]+":"+arr[2].charAt(0)+arr[2].charAt(1);
                System.out.println(twenty_four);
            }
            else{
                System.out.println(arr[0]+":"+arr[1]+":"+arr[2].charAt(0)+arr[2].charAt(1));}
                }
    }
}