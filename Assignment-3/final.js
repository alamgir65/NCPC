/** Problem -01 ( Divide the Asset ) */
var area = 2060;
//write your code here

var eachBrotherHave = area / 2;
console.log(eachBrotherHave);




/** Problem -02 ( Cycle or Laptop ) */
var money = 9999;
//write your code here

if(money >= 25000){
    console.log("Laptop");
}
else if(money >= 10000){
    console.log("Cycle");
}
else{
    console.log("Chocolate");
}




/** Problem -03 ( Medicine Planner ) */
var lastDay = 16;
//write your code here

for(var i = 1; i <= lastDay; i++)
{
    if(i % 3 === 0)
    {
        console.log(`${i} - medicine`);
    }
    else
    {
        console.log(`${i} - rest`);
    }
}





/** Problem 04 - (Delete / Store) */
var fileName= "slipdf.txt";
//write your code here

if(fileName[0] === "#" || fileName.includes(".pdf") || fileName.includes(".docx"))
{
    console.log("Store");
}
else
{
    console.log("Delete");
}




/** Problem 05 - ( PH Email Generator )  */
var student= { name: "mewo" , roll: 96 ,department: "cse"  };
//write your code here

var email = student.name + student["roll"] + '.' + student.department + "@ph.ac.bd";

var emailAnotherWay = `${student.name}${student.roll}.${student.department}@ph.ac.bd`;


// console.log(emailAnotherWay);
console.log(email);





/** Problem 06 :  (Current Salary )  */
var experience = 30;
var startingSalary = 45000;
//write your code here

var currentSalary = startingSalary;

for(var i = 1; i <= experience; i++)
{
    currentSalary += currentSalary * 0.05;
}
L
console.log(currentSalary.toFixed(2));



// Hudai 