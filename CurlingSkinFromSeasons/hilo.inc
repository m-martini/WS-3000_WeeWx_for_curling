## hilo module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo
#encoding UTF-8

#set $archive_data = [('day', $day), ('week', $week), ('month', $month), ('year', $year), ('rainyear', $rainyear)]

<div id='hilo_widget' class="widget">
  <div class="widget_title">
    <a href="statistics.html">High/Low</a>
    <a class="widget_control"
      onclick="toggle_widget('hilo')">&diams;</a>
  </div>

  <div class="widget_contents">
  <table>
    <tbody>
      <tr>
        <td></td>
        <th>&nbsp;<br/>Today</th>
        <th class="hilo_week">&nbsp;<br/>Week</th>
        <th class="hilo_month">&nbsp;<br/>Month</th>
        <th class="hilo_year">
            <a onclick="toggle_rainyear()">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br/>Year</a>
        </th>
        <th class="hilo_rainyear">
            <a onclick="toggle_rainyear()">Rain<br/>Year</a>
        </th>
        <td></td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp1</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp1.maxtime">
            $archive[1].extraTemp1.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp1.mintime">
            $archive[1].extraTemp1.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp1</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid1</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid1.maxtime">
            $archive[1].extraHumid1.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid1.mintime">
            $archive[1].extraHumid1.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid1</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp2</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp2.maxtime">
            $archive[1].extraTemp2.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp2.mintime">
            $archive[1].extraTemp2.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp2</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid2</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid2.maxtime">
            $archive[1].extraHumid2.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid2.mintime">
            $archive[1].extraHumid2.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid2</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp3</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp3.maxtime">
            $archive[1].extraTemp3.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp3.mintime">
            $archive[1].extraTemp3.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp3</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid3</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid3.maxtime">
            $archive[1].extraHumid3.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid3.mintime">
            $archive[1].extraHumid3.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid3</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp4</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp4.maxtime">
            $archive[1].extraTemp4.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp4.mintime">
            $archive[1].extraTemp4.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp4</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid4</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid4.maxtime">
            $archive[1].extraHumid4.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid4.mintime">
            $archive[1].extraHumid4.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid4</td>
      </tr>
      <tr>
        <td class="label">$obs.label.outTemp</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].outTemp.maxtime">
            $archive[1].outTemp.max.format(add_label=False)</span><br/>
          <span title="$archive[1].outTemp.mintime">
            $archive[1].outTemp.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.outTemp</td>
      </tr>
      <tr>
        <td class="label">$obs.label.outHumidity</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].outHumidity.maxtime">
            $archive[1].outHumidity.max.format(add_label=False)</span><br/>
          <span title="$archive[1].outHumidity.mintime">
            $archive[1].outHumidity.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.outHumidity</td>
      </tr>
      <tr>
        <td class="label">$obs.label.dewpoint</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].dewpoint.maxtime">
            $archive[1].dewpoint.max.format(add_label=False)</span><br/>
          <span title="$archive[1].dewpoint.mintime">
            $archive[1].dewpoint.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.dewpoint</td>
      </tr>
      <tr>
        <td class="label">$obs.label.heatindex</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].heatindex.maxtime">
            $archive[1].heatindex.max.format(add_label=False)</span><br/>
          <span title="$archive[1].heatindex.mintime">
            $archive[1].heatindex.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.heatindex</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp6</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp6.maxtime">
            $archive[1].extraTemp6.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp6.mintime">
            $archive[1].extraTemp6.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp6</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid6</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid6.maxtime">
            $archive[1].extraHumid6.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid6.mintime">
            $archive[1].extraHumid6.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid6</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraTemp7</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraTemp7.maxtime">
            $archive[1].extraTemp7.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraTemp7.mintime">
            $archive[1].extraTemp7.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraTemp7</td>
      </tr>
      <tr>
        <td class="label">$obs.label.extraHumid7</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].extraHumid7.maxtime">
            $archive[1].extraHumid7.max.format(add_label=False)</span><br/>
          <span title="$archive[1].extraHumid7.mintime">
            $archive[1].extraHumid7.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.extraHumid7</td>
      </tr>

      #if $day.inTemp.has_data
      <tr>
        <td class="label">$obs.label.inTemp</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].inTemp.maxtime">
            $archive[1].inTemp.max.format(add_label=False)</span><br/>
          <span title="$archive[1].inTemp.mintime">
            $archive[1].inTemp.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.inTemp</td>
      </tr>
      #end if

      #if $day.inHumidity.has_data
      <tr>
        <td class="label">$obs.label.inHumidity</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].inHumidity.maxtime">
            $archive[1].inHumidity.max.format(add_label=False)</span><br/>
          <span title="$archive[1].inHumidity.mintime">
            $archive[1].inHumidity.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.inHumidity</td>
      </tr>
      #end if

    </tbody>
  </table>
  </div>
</div>
