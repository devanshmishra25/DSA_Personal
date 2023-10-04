const axios = require("axios");

async function findCountry(region, keyword) {
    let response = await axios.get(
        'https://jsonmock.hackerrank.com/api/countries/search?region=${region}&name=${keyword}&page=1`'
    );

    let data = response.data;
    let total = data["total_pages"];
    let count = 1;

    let finl = [];
    final = [...final, ...data.data]

    while(count!== total) {
        count++;
        response = await axios.get(
            'https://jsonmock.hackerrank.com/api/countries/search?region=${region}&name=${keyword}&page=$`'
        );
        data = response.data;
        final = [...final, ...data.data]
    }

    for()
}


const { data } = await axios.post('https://jsonmock.hackerrank.com/api/countries/search', {
    username: "username",
    password: "password",
});

c