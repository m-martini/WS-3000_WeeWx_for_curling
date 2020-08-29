## titlebar for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo
#encoding UTF-8

<div id="title_bar">
  <div id="title">
    <h1 class="page_title">$station.location</h1>
    <p class="lastupdate">$current.dateTime</p>
  </div>
  <div id="contents">
    <h1 class="page_title"><a href="https://forecast.weather.gov/MapClick.php?lat=41.548560&lon=-70.598845">Local Forecast</a></h1>
    ##<h1 class="page_title"><a href=$station.local_forecast>Local Forecast</a></h1>
  </div>
</div>
