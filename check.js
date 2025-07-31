var person = {};
person.name = "alam";
person.age = 22;
console.log(person);
delete person.age;
console.log(person);

var st = "name";
var s = st + 5;
console.log(s);
var t = st.toUpperCase(st);
console.log(t);

console.log(person.khalu);


const myObject = {
 a: 1,
 b: 2,
 c: 3
};

for (let prop in myObject) {
 console.log(myObject[prop]);
}

const x = ""
if(!x.length){
console.log("Hey")
}else{
console.log("Hi")
}

const str = "Hello";
str[0] = "h";
console.log(str);