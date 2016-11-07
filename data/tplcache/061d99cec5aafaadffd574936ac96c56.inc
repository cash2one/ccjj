<div class="main1">
    <div class="yshow">
    <img src="{dede:global.cfg_templets_skin/}/images/{dede:field name='typename'/}.jpg" alt="" class="aboutimg">
    <a href="{dede:field name='typeurl' /}">
              <h3>{dede:field name='typename'/}</h3>
        </a>      
    </div>
    <div class="abouttext">
    <h2>{dede:field name='typename'/}</h2>
    <p>
    {dede:field name='content' function="htmlspecialchars(cn_substr(Html2text(@me),450))"/}...
    </p>
    <a href="{dede:field name='typeurl' /}">[more]</a></div>
  </div>