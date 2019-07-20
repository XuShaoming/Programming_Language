// File Name : URLDemo.java
import java.net.*;
import java.io.*;

public class URLDemo {

   public static void main(String [] args) {
      try {
         URL url = new URL("https://www.amrood.com/index.htm?language=en#j2se");

         System.out.println("URL is " + url.toString());
         System.out.println("protocol is " + url.getProtocol());
         System.out.println("authority is " + url.getAuthority());
         System.out.println("file name is " + url.getFile());
         System.out.println("host is " + url.getHost());
         System.out.println("path is " + url.getPath());
         System.out.println("port is " + url.getPort());
         System.out.println("default port is " + url.getDefaultPort());
         System.out.println("query is " + url.getQuery());
         System.out.println("ref is " + url.getRef());
      } catch (IOException e) {
         e.printStackTrace();
      }
   }
}

/**
xu-Macbook:Networking xushaoming$ java URLDemo
URL is https://www.amrood.com/index.htm?language=en#j2se
protocol is https
authority is www.amrood.com
file name is /index.htm?language=en
host is www.amrood.com
path is /index.htm
port is -1
default port is 443
query is language=en
ref is j2se
*/
