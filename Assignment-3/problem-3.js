/** Problem -03 ( Medicine Planner ) */
var lastDay = 6;
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