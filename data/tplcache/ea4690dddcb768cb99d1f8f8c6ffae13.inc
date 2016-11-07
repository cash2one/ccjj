<div class="main1">
    <div class="yshow">
    <img src="{dede:global.cfg_templets_skin/}/images/img-3.jpg" alt="" class="aboutimg">
    <a href="{dede:field name='typeurl' /}">
              <h3>{dede:field name='typename'/}</h3>
        </a>      
    </div>
    <div class="abouttext">{dede:field name='content' function="htmlspecialchars(cn_substr(Html2text(@me),450))"/}</div>
  </div>