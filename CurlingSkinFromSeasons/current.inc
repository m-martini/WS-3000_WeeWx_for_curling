## current module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo
#encoding UTF-8

<div id='current_widget' class="widget">
  <div class="widget_title">
    Current Conditions
    <a class="widget_control"
      onclick="toggle_widget('current')">&diams;</a>
  </div>

  <div class="widget_contents">
  <table>
    <tbody>
      <tr>
        <td class="label">$obs.label.extraTemp1</td>
        <td class="data">$current.extraTemp1<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid1</td>
        <td class="data">$current.extraHumid1<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp2</td>
        <td class="data">$current.extraTemp2<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid2</td>
        <td class="data">$current.extraHumid2<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp3</td>
        <td class="data">$current.extraTemp3<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid3</td>
        <td class="data">$current.extraHumid3<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp4</td>
        <td class="data">$current.extraTemp4<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid4</td>
        <td class="data">$current.extraHumid4<td>
      </tr>
      <tr>
        <td class="label">$obs.label.outTemp</td>
        <td class="data">$current.outTemp</td>
      </tr>
      <tr>
        <td class="label">$obs.label.outHumidity</td>
        <td class="data">$current.outHumidity</td>
      </tr>
      <tr>
        <td class="label">$obs.label.heatindex</td>
        <td class="data">$current.heatindex</td>
      </tr>
      <tr>
        <td class="label">$obs.label.dewpoint</td>
        <td class="data">$current.dewpoint</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp6</td>
        <td class="data">$current.extraTemp6<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid6</td>
        <td class="data">$current.extraHumid6<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp7</td>
        <td class="data">$current.extraTemp7<td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid7</td>
        <td class="data">$current.extraHumid7<td>
      </tr>
      <tr>
        <td class="label">$obs.label.inTemp</td>
        <td class="data">$current.inTemp<td>
      </tr>
      <tr>
        <td class="label">$obs.label.inHumidity</td>
        <td class="data">$current.inHumidity<td>
      </tr>
    </tbody>
  </table>
  </div>

</div>
