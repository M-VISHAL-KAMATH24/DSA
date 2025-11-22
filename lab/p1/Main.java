// Abstract class
abstract class Vehicle {

    // Abstract method (no body) — must be implemented by subclasses
    abstract void start();

    // Concrete (non-abstract) method — shared by all subclasses
    void fuel() {
        System.out.println("Fueling vehicle...");
    }
}

// Concrete subclass
class Car extends Vehicle {

    // Implementation of abstract method
    void start() {
        System.out.println("Car started");
    }
}

// Main class to test abstraction
public class Main {
    public static void main(String[] args) {
        // We cannot create an object of an abstract class
        // Vehicle v = new Vehicle(); ❌ (Not allowed)

        // Create object of subclass
        Car myCar = new Car();

        // Call methods
        myCar.start(); // Calls overridden abstract method
        myCar.fuel();  // Calls concrete method from abstract class
    }
}
