package Multithreading;
import java.util.*;

public class Loan {
	private double loanAmount;
	private double interest;
	private int years;
	
	public Loan() {
		this(0.0, 0.0, 0);
	}

	public Loan(double loanAmount, double interest, 
			int years) {
		this.interest = interest;
		this.loanAmount = loanAmount;
		this.years = years;
	}

	public double getLoanAmount() {
		return loanAmount;
	}

	public void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}

	public double getinterest() {
		return interest;
	}

	public void setinterest(double interest) {
		this.interest = interest;
	}

	public int getYears() {
		return years;
	}

	public void setYears(int years) {
		this.years = years;
	}
	
	public double getMonthlyPayment() {
		double monthlyInterest = interest / 1200;
		double monthlyPayment = loanAmount * monthlyInterest /
				(1 - Math.pow(1 / (1 + monthlyInterest), years * 12));
		return monthlyPayment;
	}
	
	public double getTotalPayment() {
		double totalPayment = getMonthlyPayment() * years * 12;
		return totalPayment;
	}

}
