package InheritancePractice;
import java.util.Date;

public class GeometricObject {
	
	private String color;
	private boolean filled;
	private Date dateCreated;
	
	public GeometricObject() {
		
	}
	
	public String getColor() {
		return color;
		
	}
	
	public void setColor(String color) {
		
	}
	
	public boolean isFilled() {
		return filled;
	}
	
	public void setFilled(boolean filled) {
		
	}
	
	public Date getDateCreated() {
		return dateCreated;
	}
	
	public String toString() {
		String description;
		description = "Color: " + color + "\nFilled?: "
				+ filled + "\nDate created: " + dateCreated;
		return description;
		
	}
}