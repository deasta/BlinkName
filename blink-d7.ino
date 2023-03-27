// Dan Eastaugh blinkName app
//Adapted from blink-d7 Particle tutorial for SIT 210 at Deakin University
//assign LED pin D7 to variable
const pin_t MY_LED = D7;

// Runs without connecting to cloud
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop() {
    
	// DAN == -.. .- -. in morse where . is a short blink of 1 second and - is a long blink of 3 seconds
	// we wait 1 second between parts of a letter and 3 seconds between latters
	// D = -..
	//DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
    //DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	//DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	// Delay between letter
	delay(3000);
	
	//A = .-
	//DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	//DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	// Delay between letter
	delay(3000);
	
	//N = -.
    //DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
    //DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
    //delay between word
    delay(7000);
	// And repeat!
}

