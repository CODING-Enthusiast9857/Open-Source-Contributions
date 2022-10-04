import requests

API_KEY = "e71574ad3141d05d2f6c17cedc918abb"
BASE_URL = "http://api.openweathermap.org/data/2.5/weather"

city=input("Enter a city name: ")
request_url=f"{BASE_URL}?appid={API_KEY}&q={city}"
response=requests.get(request_url)
#200 means request succes
if response.status_code==200:
    data=response.json()
    #print(data)
    weather=data['weather'][0]['description']
    temperature=round(data["main"]["temp"] - 273.15,2)
    print("Weather at",city,"is",weather)
    print("Temperature at",city,"is",temperature,"Celcius")
else:
    print("An error Occured. ")
