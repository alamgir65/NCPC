/** Problem 05 - ( PH Email Generator )  */
var student= { name: "mewo" , roll: 96 ,department: "cse"  };
//write your code here

var email = student.name + student["roll"] + '.' + student.department + "@ph.ac.bd";

var emailAnotherWay = `${student.name}${student.roll}.${student.department}@ph.ac.bd`;

// Output the email
// console.log(emailAnotherWay);
console.log(email);