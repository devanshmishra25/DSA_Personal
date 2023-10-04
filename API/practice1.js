const axios = require("axios");

async function findCountry(region, keyword) {
  let response = await axios.get(
    `https://jsonmock.hackerrank.com/api/countries/search?region=${region}&name=${keyword}&page=1`
  );
  let data = response.data;
  let total = data["total_pages"];
  let count = 1;

  let final = [];
  final = [...final, ...data.data]

  
  //while loop till the last page
  while (count !== total) {
    count++;
    response = await axios.get(
      `https://jsonmock.hackerrank.com/api/countries/search?region=${region}&name=${keyword}&page=${count}`
    );
    data = response.data;
    final = [...final, ...data.data]
  }

  for(var i = 0; i < final.length; i++){
    for(var j = 0; j < ( final.length - i -1 ); j++){
      if(final[j].population > final[j+1].population || (final[j].population === final[j+1].population && final[j].name > final[j+1].name)){
        var temp = final[j]
        final[j] = final[j + 1]
        final[j+1] = temp
      }
    }
  }

  for (var i = 0; i < final.length; i++) {
    console.log(final[i].name + "," + final[i].population)
  }
}

findCountry("Europe", "de");