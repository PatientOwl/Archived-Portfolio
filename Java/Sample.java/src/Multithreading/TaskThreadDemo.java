/**
 * The main purpose of multithreading is to provide 
 * simultaneous execution of two or more parts of a 
 * program to utilize maximum CPU time.
 */
package Multithreading;

public class TaskThreadDemo {

	public static void main(String[] args) {

		// Create tasks
		Runnable printA = new PrintChar('a', 100);
		Runnable printB = new PrintChar('b', 100);
		Runnable print100 = new PrintNum(100);

		// Create threads
		Thread thread1 = new Thread(printA);
		Thread thread2 = new Thread(printB);
		Thread thread3 = new Thread(print100);

		// Start threads
		thread1.start();
		thread2.start();
		thread3.start();
	}
}

// The task for printing a specified character in specified times
class PrintChar implements Runnable {

	private char charToPrint; // The character to print
	private int times; // The times to repeat

	/**
	 * Construct a task with specified character and number of times to print the
	 * character
	 */

	public PrintChar(char c, int t) { // TaskClass()
		charToPrint = c;
		times = t;
	}

	/**
	 * Override the run() method to tell the system what the task to perform
	 */

	public void run() { // Tell system how to run custom thread
		for (int i = 0; i < times; i++) {
			System.out.print(charToPrint);
		}
	}
}

// The task class for printing number from 1 to n for a given n
class PrintNum implements Runnable {

	private int lastNum;

	/** Construct a task for printing 1, 2, ... i */
	public PrintNum(int n) {
		lastNum = n;
	}

	/** Tell the thread how to run */
	/*
	 * 'join()' method forces one thread to wait for 
	 * another thread to finish.
	 */
  public void run() {
	  Thread thread4 = new Thread(new PrintChar('c',40));
	  try {
		  for (int i = 1; i <= lastNum; i++) {
	      System.out.print(" " + i);
	      if(i == 50) thread4.join();
		  }
	  }
    catch (InterruptedException ex) {
    	
    }
      /*
       * Every time a number is printed, the 'print100'
       * thread is yielded. So, the numbers are printed
       * after the characters.
       * 
       * 'yield()' method temporarily releases time for 
       * other threads. Delete comment below and
       * execute.
       */
      // Thread.yield();
      
      /*
       * 'sleep(long mills)' method puts the thread to
       * sleep for the specified time in milliseconds.
       * Delete comments below and execute.
       */
      /* try {
    	  if(i >= 50) Thread.sleep(1);
      }
      catch (InterruptedException ex) {
      
      } 
      
      
    }*/
  }
}