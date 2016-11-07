<?php
$z[0]=Array("field","",143,162);
$z[0][4]['name']="title";
$z[1]=Array("global","",163,189);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",230,259);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",299,357);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",375,407);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",491,523);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",629,664);
$z[6][4]['filename']="head.htm";
$z[7]=Array("global","",716,748);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("field","",756,815);
$z[8][4]['name']="typeid";
$z[8][4]['function']="GetTopTypename(@me)";
$z[9]=Array("field","",956,985);
$z[9][4]['name']="position";
$z[10]=Array("field","",1068,1127);
$z[10][4]['name']="typeid";
$z[10][4]['function']="GetTopTypename(@me)";
$z[11]=Array("channel","\r\n      <li>\r\n        <a href='[field:typeurl/]'>[field:typename/]</a>\r\n      </li>",1142,1338);
$z[11][4]['type']="son";
$z[11][4]['currentstyle']="<li class='hover'><a href='~typelink~'>~typename~</a></li>";
$z[12]=Array("list","\r\n<ul class='newsul'> \r\n  <li>\r\n    <img src=\"[field:litpic /]\" alt=\"[field:title /]\">\r\n    <div class=\"aboutnews\">\r\n      <div class=\"top\">\r\n        <div class=\"title\"><a href=\"[field:arcurl /]\">[field:title /]</a></div>\r\n        <div class=\"date\">\r\n          20[field:pubdate function=\"MyDate('y-m-d',@me)\"/]\r\n        </div>\r\n      </div>\r\n      <p>[field:description function='cn_substr(@me,210)' /]...</p>\r\n        <a href=\"[field:arcurl /]\">详情&nbsp;&gt;&nbsp;&gt;</a>\r\n    </div>\r\n  </li>\r\n</ul>\r\n",1427,1969);
$z[12][4]['pagesize']="5";
$z[13]=Array("pagelist","",2007,2073);
$z[13][4]['listsize']="5";
$z[13][4]['listitem']="index,end,pre,next,pageno";
$z[14]=Array("include","",2112,2149);
$z[14][4]['filename']="footer.htm";

?>