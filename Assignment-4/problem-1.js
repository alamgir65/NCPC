function totalFine( fare ) {
    if(fare <= 0 || (typeof fare !== 'number'))
    {
        return "Invalid";
    }

    const fine = fare + (fare * 0.2) + 30;
    return fine;
}



function  onlyCharacter( str ) {
    if(typeof str !== 'string'){
        return "Invalid";
    }

    let newStr="";
    for(let i = 0; i < str.length; i++){
        if(str[i] !== ' '){
            newStr = newStr + str[i].toUpperCase();
        }
    }
    return newStr;
}



function  bestTeam( player1, player2 ) {
    if(typeof player1 !== 'object' || typeof player2 !== 'object'){
        return "Invalid";
    }

    let player1Occurrence = player1.foul + player1.cardY + player1.cardR;
    let player2Occurrence = player2.foul + player2.cardY + player2.cardR;

    return (player1Occurrence === player2Occurrence) ? "Tie" : ((player1Occurrence > player2Occurrence ? player2.name : player1.name));

}



function  isSame(arr1 , arr2 ) {

    if(!Array.isArray(arr1) || !Array.isArray(arr2)){
        return "Invalid";
    }

    if(arr1.length !== arr2.length){
        return false;
    }

    for(let i = 0; i < arr1.length; i++){
        if(arr1[i] !== arr2[i]){
            return false;
        }
    }

    return true;
}



function  resultReport( marks ) {

    if(!Array.isArray(marks)){
        return "Invalid";
    }

    let sum = 0, failCount = 0, average = 0;
    for(let i = 0; i < marks.length; i++){

        if(marks[i] < 40){
            failCount++;
        }

        sum += marks[i];
    }

    average = sum / marks.length;

    const resultObj = {
        finalScore: (marks.length === 0) ? 0 : Math.round(average),
        pass: marks.length - failCount,
        fail: failCount
    };

    return resultObj;
}





