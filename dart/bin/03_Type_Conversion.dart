void main() {

  // =====================================================
  // Question 1 — Type Conversion (Data Type)
  // 1- runtimeType
  // 2- parse()
  // 3- toInt() / toDouble() / toString()
  // =====================================================

  String age = '25';

  print(age.runtimeType);              // Output => String
  print(int.parse(age).runtimeType);   // Convert String → int


  // =====================================================
  // Question 2 — String To Number
  // =====================================================

  String name = '23.4';

  double myname = double.parse(name);  // String → double

  // int myname2 = int.parse(name);
  // ❌ Error because 23.4 is NOT integer


  // =====================================================
  // Question 3 — double To int
  // =====================================================

  double w = 10.25;

  int r = w.toInt();      // remove decimal part
  print(r);               // Output => 10


  // =====================================================
  // Question 4 — int To double
  // =====================================================

  int x = 20;

  double y = x.toDouble();
  print(y);               // Output => 20.0
}


// =====================================================
// 🔥 Type Conversion Summary
// =====================================================

// From String → int
// int.parse()

// From String → double
// double.parse()

// From int → double
// toDouble()

// From double → int
// toInt()

// From double or int → String
// toString()


// =====================================================
// Multi Line Comment
/*
   Any text here
   Used for explanation
*/


// Escape Characters
// \n  => New Line
// \t  => Tab