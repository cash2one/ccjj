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
$z[6]=Array("include","",611,646);
$z[6][4]['filename']="head.htm";
$z[7]=Array("global","",676,708);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("field","",716,775);
$z[8][4]['name']="typeid";
$z[8][4]['function']="GetTopTypename(@me)";
$z[9]=Array("type","\r\n<script language='javascript'>\r\nlocation='[field:typedir /]';\r\n</script>\r\n",825,924);
$z[10]=Array("channelartlist","\r\n    <div class=\"main1\">\r\n    <div class=\"yshow\">\r\n   <!--  <img src=\"{dede:global.cfg_templets_skin/}/images/{dede:field name='typename'/}.jpg\" alt=\"\" class=\"aboutimg\"> -->\r\n    <img src=\"{dede:global.cfg_templets_skin/}/images/img-3.jpg\" alt=\"\" class=\"aboutimg\">\r\n    <a href=\"{dede:field name='typeurl' /}\">\r\n              <h3>{dede:field name='typename'/}</h3>\r\n        </a>      \r\n    </div>\r\n    <div class=\"abouttext\">\r\n    <h2>{dede:field name='typename'/}</h2>\r\n    <p>\r\n    {dede:field name='content' function=\"htmlspecialchars(cn_substr(Html2text(@me),300))\"/}...\r\n    </p>\r\n    <a href=\"{dede:field name='typeurl' /}\" class=\"more\">more</a></div>\r\n  </div>\r\n  ",977,1692);
$z[11]=Array("include","",1714,1751);
$z[11][4]['filename']="footer.htm";

?>