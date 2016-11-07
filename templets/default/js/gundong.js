$(function(){
	
	$(window).on('load',function(){
		var ib1_li = $(".ib1_list li"),
			ib1_idx = 0,
			ib1_max = ib1_li.length -1,
			bf_en = $(".bf_en"),
			bf_cn = $(".bf_cn");
			
		//banner文字效果
		
		bf_en.animate({top:'0'},1000);	
		bf_cn.animate({bottom:'0'},1000);
		
		
		
		
		//banner下方标题图片效果
		if(ib1_idx <= ib1_max){				
						setInterval(function(){					
							ib1_li.eq(ib1_idx).stop(true,false).animate({marginTop:'0'},300);
							ib1_idx++;
						},150);
					}		
	});
	
	//圆圈效果
	function win_effect(){
		var circle_box = $(".circle_box"),
			circle = $("#index_circle");
				
			function circle_move(){//圆圈动画		
				circle.stop(true,false).animate({top:'43px'},600,function(){
					circle.stop(true,false).animate({top:'0'},500);
				});		
			}
							
			circle_box.hover(function(){
				clearInterval(circle_auto_move);
			},function(){
				
				circle_move();
				
				circle_auto_move =  setInterval(function(){			
					circle_move();
			},1100);
				
			}).trigger('mouseleave');
			
			circle_box.on('click',function(e){	
							
				$("html,body").stop(false,true).animate({"scrollTop":910},1200,'easeInOutExpo');			
			});
								
	};
	
	//窗口滚动对应效果
	$(window).on('scroll',function(){
				
			 	var wint  = $(window).scrollTop(),
			 		ib2_h1 = $(".ib2_h1"),
					ib2_h2 = $(".ib2_h2"),
					ib2_li = $(".ib2_nav li")//项目类型li
					ib2_idx = 0,//项目类型li数量
					ib2_max = ib2_li.length - 1,//项目类型li最大数量
					pro_box = $(".ib2_list_box");	
				
				
				if(wint >= 200){
					ib2_h1.animate({top:'0'},1200);//地产开发标题效果
					ib2_h2.animate({bottom:'0'},1200);//地产开发标题效果
				}
				
				if(wint >= 300){
																
					if(ib2_idx <= ib2_max){				
						setInterval(function(){					
							ib2_li.eq(ib2_idx).stop(true,false).animate({marginTop:'0'},300);
							ib2_idx++;
						},150);
					}
				}
						
			});
	
	//四项目小图hover效果
	function ib1_hover(){
		var ib1_li = $(".ib1_list li");
			
			ib1_li.hover(function(){
				$(this).find(".ib1_mask").css({opacity:'1'});
				$(this).find("h1").css({color:'#ffffff'});
				$(this).find("h2").css({color:'#ffffff'});
			},function(){
				$(this).find(".ib1_mask").css({opacity:'0'});
				$(this).find("h1").css({color:'#ff6000'});
				$(this).find("h2").css({color:'#202020'});
			});
	}
			
	
	//项目切换
	function project_slider(){
		var navli = $(".ib2_nav li"),//项目分类选择
			ul = $(".ib2_list_box ul"),//项目集合
			nowul = $(".ib2_list_box ul").eq(0),//当前项目集合
			len = nowul.children().length,//项目数
			idx = 0,//项目下标
			pidx = 0,//索引值
			prebtn = $(".container a#idx_left_btn"),
			nextbtn = $(".container a#idx_right_btn"),
			delay = 800,
			ulmargin = 0;//项目集合margin值
			
			navli.eq(0).addClass("on");//初始化项目分类第一个开启
			nowul.fadeIn(delay);//初始化显示第一个项目分类
			
			len = Math.ceil(len/4);//切换四个算法
			
			navli.on('click',function(){					
				$(this).addClass("on").siblings().removeClass("on");
				idx = $(this).index();
				ul.eq(idx).fadeIn(delay).siblings().fadeOut(delay);
				ul.animate({left:'0'},delay);//切换时全场重置位置
				nowul = ul.eq(idx);
				len = nowul.children().length;
				len = Math.ceil(len/4);//切换四个算法
				pidx = 0;
			});
								
			nextbtn.on('click',function(){
				if(len > 0){
					
					if(pidx == len - 1 ){
						return false;
					}else{
						pidx++;
						nowul.stop(true,true).animate({left:'-=1066px'},delay,'easeInOutQuad');

					}
				}
					return false;						
			});
			
			prebtn.on('click',function(){
				if(pidx == 0){
					return false;
				}else{
					pidx --;
					nowul.stop(true,true).animate({left:'+=1066px'},delay,'easeInOutQuad');
				}
					return false;
			});
	};
	
	//新闻折叠
	function business_pro_slider(){
		var pro_box = $(".business_pro_box"),
			navli = $(".business_pro_nav li"),//项目分类选择
			ul = $(".business_pro_list"),//项目集合
			nowul = ul.eq(0),//当前项目集合
			len = nowul.children().length,//项目数
			idx = 0,//项目下标
			pidx = 0,//索引值
			prebtn = $(".business_probtn a#probtn_left"),
			nextbtn = $(".business_probtn a#probtn_right"),
			delay = 600;
			
			navli.eq(0).addClass("on");//初始化项目分类第一个开启
			nowul.fadeIn(delay);//初始化显示第一个项目分类
			
			len = Math.ceil(len/4);
			
			//加载动画
			pro_box.animate({marginLeft:'0'},1200,'easeOutBack');
			
			navli.on('click',function(){					
				$(this).addClass("on").siblings().removeClass("on");
				idx = $(this).index();
				ul.eq(idx).fadeIn(delay).siblings().fadeOut(delay);
				ul.animate({left:'0'},delay);//切换时全场重置位置
				nowul = ul.eq(idx);
				len = nowul.children().length;
				len = Math.ceil(len/4);//切换四个算法
				pidx = 0;
				return false;
			});
								
			nextbtn.on('click',function(){
				if(len > 0){
					if(pidx == len - 1 ){
						return false;
					}else{
						pidx++;
						nowul.animate({left:'-=712px'},delay);

					}
				}
				return false;						
			});
			
			prebtn.on('click',function(){
				if(pidx == 0){
					return false;
				}else{
					pidx --;
					nowul.animate({left:'+=712px'},delay);
				}
					return false;
			});
	};
	
	ib1_hover();//四项目小图hover效果
	win_effect();//窗口滚动对应效果
	project_slider();//加载项目切换
    business_pro_slider();
});
	