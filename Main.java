import java.time.Year;
public class Main{
    public static void main(String[] args) {
        Car[] cars= {
            new Car(1, "Toyota", "Sprinter Trueno", 1986, "White", 2500000, "M268TF49"),
            new Car(2, "Mazda", "RX-7 FD3s", 1995, "yellow", 3000000, "R157SS25"),
            new Car(3, "Honda", "NSX", 1999, "red", 2700000, "T497DF99"),
            new Car(4, "Subaru", "WRX Impeza", 2007, "blue", 1600000,"U120PO56"),
            new Car(5, "Mitsubishi", "Lancer Evolution X", 2008, "black", 3700000, "S715VO77"),
        };//Welcome to Tokyo Full of sensation New generation Open your mind to reality Everyone, everywhere Is so beautiful, like a woman - desire Full of energy filled with energy! Go for yourself, and see what I mean! Boom Boom Japan, that's what I say And see what I mean Boom Boom Japan, happening night and day Night and day you will see and love it! Boom Boom Japan, that's what I say (c'mon) Go and see what I mean Boom Boom Japan, happening night and day Night and day you will see and love the land I wanna let you know It is a pleasure, finding my treasure Inside a place filled with harmony 
        Car[] mazdaCars=getCarByBrand(cars, "Mazda");
        System.out.println("Mazda cars found"+mazdaCars.length);
        Car[] oldSubaruCars = getCarByBrandAndYearOperational(cars, "Subaru", 5);
        System.out.println("Subaru cars older then 5 years:"+oldSubaruCars.length);
    }
    public static Car[] getCarByBrand(Car[] cars, String brand){
        int count=0;
        for (Car car : cars){
            if (car.getBrand().equalsIgnoreCase(brand)){
                count++;
            }
        }
        Car[] result = new Car[count];
        int index=0;
        for (Car car:cars){
            if(car.getBrand().equalsIgnoreCase(brand)){
                result[index++]=car;
            }
        }
        return result;
    }
    public static Car[] getCarByBrandAndYearOperational(Car[] cars, String brand, int years){
        int currentYear=Year.now().getValue();
        int count=0;
        for (Car car : cars){
            int carAge=currentYear - car.getYear();
            if (car.getBrand().equalsIgnoreCase(brand)&&carAge>years){
                result[index++]=car;
            }
        }
        return result;
    }
}