public class RetailItem
	 {
		 private String description;
		 private int unitsOnHand;
		 private double price;
		 public RetailItem(String desc, int units, double pri)
		 {
			 description = desc;
			 unitsOnHand = units;
			 price = pri;
		 }
		 public void setDescription(String desc)
		 {
			 description = desc;
		 }
		 public void setUnits(int units)
		 {
			 unitsOnHand = units;
		 }
		 public void setPrice(double pri)
		 {
			 price = pri;
		 }
		 public String getDescription()
		 {
			 return description;
		 }
		 public int getUnits()
		 {
			 return unitsOnHand;
		 }
		 public double getPrice()
		 {
			 return price;
		 }
	 }