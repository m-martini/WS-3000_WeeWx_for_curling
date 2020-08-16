## statistics module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo
#encoding UTF-8

#set $archive_data = [$day, $week, $month, $year, $rainyear]

<div id="statistics_widget" class="widget">
  <div class="widget_title">
    Statistics
  </div>
  <div class="widget_contents">

    <table>
      <tbody>
        <tr>
          <td></td>
          <td></td>
          <th>Today</th>
          <th class="hilo_week">Week</th>
          <th class="hilo_month">Month</th>
          <th class="hilo_year">Year</th>
          <th class="hilo_rainyear">Rain year</th>
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp1</td>
          <td class="units">$unit.label.extraTemp1</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp1.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp1.maxtime</span><br/>
            $archive.extraTemp1.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp1.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid1</td>
          <td class="units">$unit.label.extraHumid1</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid1.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid1.maxtime</span><br/>
            $archive.extraHumid1.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid1.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp2</td>
          <td class="units">$unit.label.extraTemp2</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp2.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp2.maxtime</span><br/>
            $archive.extraTemp2.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp2.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid2</td>
          <td class="units">$unit.label.extraHumid2</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid2.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid2.maxtime</span><br/>
            $archive.extraHumid2.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid2.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp3</td>
          <td class="units">$unit.label.extraTemp3</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp3.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp3.maxtime</span><br/>
            $archive.extraTemp3.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp3.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid3</td>
          <td class="units">$unit.label.extraHumid3</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid3.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid3.maxtime</span><br/>
            $archive.extraHumid3.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid3.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp4</td>
          <td class="units">$unit.label.extraTemp4</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp4.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp4.maxtime</span><br/>
            $archive.extraTemp6.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp4.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid4</td>
          <td class="units">$unit.label.extraHumid4</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid4.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid4.maxtime</span><br/>
            $archive.extraHumid4.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid4.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.outTemp</td>
          <td class="units">$unit.label.outTemp</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.outTemp.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.outTemp.maxtime</span><br/>
            $archive.outTemp.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.outTemp.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.outHumid</td>
          <td class="units">$unit.label.outHumid</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.outHumid.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.outHumid.maxtime</span><br/>
            $archive.outHumid.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.outHumid.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp6</td>
          <td class="units">$unit.label.extraTemp6</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp6.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp6.maxtime</span><br/>
            $archive.extraTemp6.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp6.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid6</td>
          <td class="units">$unit.label.extraHumid6</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid6.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid6.maxtime</span><br/>
            $archive.extraHumid6.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid6.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraTemp7</td>
          <td class="units">$unit.label.extraTemp7</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraTemp7.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp7.maxtime</span><br/>
            $archive.extraTemp7.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp7.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.extraHumid7</td>
          <td class="units">$unit.label.extraHumid7</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.extraHumid7.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid7.maxtime</span><br/>
            $archive.extraHumid7.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraHumid6.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.inTemp</td>
          <td class="units">$unit.label.inTemp</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.inTemp.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.inTemp.maxtime</span><br/>
            $archive.inTemp.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.inTemp.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.inHumid</td>
          <td class="units">$unit.label.inHumid</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.inHumid.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.inHumid.maxtime</span><br/>
            $archive.inHumid.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.inHumid.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.heatindex</td>
          <td class="units">$unit.label.heatindex</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.heatindex.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.heatindex.maxtime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.dewpoint</td>
          <td class="units">$unit.label.dewpoint</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.dewpoint.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.dewpoint.maxtime</span><br/>
            $archive.dewpoint.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.dewpoint.mintime</span>
          </td>
          #end for
        </tr>

        #if $day.inTemp.has_data
        <tr>
          <td class="label">$obs.label.inTemp</td>
          <td class="units">$unit.label.inTemp</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.inTemp.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.inTemp.maxtime</span><br/>
            $archive.inTemp.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.inTemp.mintime</span>
          </td>
          #end for
        </tr>
        #end if

        #if $day.inHumidity.has_data
        <tr>
          <td class="label">$obs.label.inHumidity</td>
          <td class="units">$unit.label.inHumidity</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.inHumidity.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.inHumidity.maxtime</span><br/>
            $archive.inHumidity.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.inHumidity.mintime</span>
          </td>
          #end for
        </tr>
        #end if

        #if $day.extraTemp1.has_data
        <tr>
          <td class="label">$obs.label.extraTemp1</td>
          <td class="units">$unit.label.extraTemp1</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.extraTemp1.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp1.maxtime</span><br/>
            $archive.extraTemp1.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp1.mintime</span>
          </td>
          #end for
        </tr>
        #end if

        #if $day.extraTemp2.has_data
        <tr>
          <td class="label">$obs.label.extraTemp2</td>
          <td class="units">$unit.label.extraTemp2</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.extraTemp2.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp2.maxtime</span><br/>
            $archive.extraTemp2.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp2.mintime</span>
          </td>
          #end for
        </tr>
        #end if

        #if $day.extraTemp3.has_data
        <tr>
          <td class="label">$obs.label.extraTemp3</td>
          <td class="units">$unit.label.extraTemp3</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.extraTemp3.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp3.maxtime</span><br/>
            $archive.extraTemp3.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.extraTemp3.mintime</span>
          </td>
          #end for
        </tr>
        #end if
      </tbody>
    </table>

  </div>
</div>
