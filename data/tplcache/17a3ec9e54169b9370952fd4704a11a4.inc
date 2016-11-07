<div class="container">
  
    <div class="main1">
      <!-- <div class="titleh1">
        <b></b>
        <span>{dede:field name='typename'/}<br />{dede:field name='typename1'/}</span>
        <b></b>
      </div> -->
      <div class="content1">
        {dede:field name='content' function="htmlspecialchars(cn_substr(Html2text(@me),450))"/}...
      </div>
      <a href="{dede:field name='typeurl' /}" class="more">more</a>     
    </div>
    
  </div>