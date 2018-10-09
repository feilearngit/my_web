# CSS高级语法

## CSS水平对齐

#### 对齐块元素

/****/

---

#### 使用margin属性来水平对齐

可通过将左和右外边距设置为auto，来对齐块元素。

注释：==除非已经声明了！DOCTYPE==，否则IE8不支持margin:auto。

把左和右外边距设置为auto，规定的是均等地分配可用的外边距。结果就是居中的元素：

```css
.center
{
    margin-left:auto;
    margin-right:auto;
    width:70%;
    background-color:#b0e0e6;
}
```

==提示：==如果宽度是100%，则对齐没有效果。

---

#### 使用position属性进行左和右对齐

对齐元素的方法之一是使用绝对定位：

```css
.right
{
    position:absolute;
    right:0px;
    width:300px;
    background-color:#b0e0e6;
}
```

**注释：**绝对定位元素会被从正常流中删除，并且能够交叠元素。

---

#### 使用float属性来进行左和右对齐

```css
.right
{
    float:right;
    width:300px;
    background-color:#b0e0e6;
}
```

**跨浏览器兼容性问题**

当像这样对齐元素时，对<body>元素的外边距和内边距进行预定义是一个好主意。==可以避免在不同的浏览器中出现可见的差异。==

```html
body
{
margin:0;
padding:0;
}
.right
{
float:right;
width:300px;
background-color:#b0e0e6;
}
```

---

## CSS尺寸（Dimension）

**CSS尺寸（Dimension）属性允许控制元素的高度和宽度。允许增加行间距。**

#### CSS尺寸属性

CSS 尺寸属性允许你控制元素的高度和宽度。同样，还允许你增加行间距。

| 属性                                                         | 描述                 |
| ------------------------------------------------------------ | -------------------- |
| [height](http://www.w3school.com.cn/cssref/pr_dim_height.asp) | 设置元素的高度。     |
| [line-height](http://www.w3school.com.cn/cssref/pr_dim_line-height.asp) | 设置行高。           |
| [max-height](http://www.w3school.com.cn/cssref/pr_dim_max-height.asp) | 设置元素的最大高度。 |
| [max-width](http://www.w3school.com.cn/cssref/pr_dim_max-width.asp) | 设置元素的最大宽度。 |
| [min-height](http://www.w3school.com.cn/cssref/pr_dim_min-height.asp) | 设置元素的最小高度。 |
| [min-width](http://www.w3school.com.cn/cssref/pr_dim_min-width.asp) | 设置元素的最小宽度。 |
| [width](http://www.w3school.com.cn/cssref/pr_dim_width.asp)  | 设置元素的宽度。     |

---

## CSS分类（Classification）

**CSS分类允许你规定如何以及在何处显示元素。**

#### CSS 分类属性 (Classification)

CSS 分类属性允许你控制如何显示元素，设置图像显示于另一元素中的何处，相对于其正常位置来定位元素，使用绝对值来定位元素，以及元素的可见度。

| 属性                                                         | 描述                                                     |
| ------------------------------------------------------------ | -------------------------------------------------------- |
| [clear](http://www.w3school.com.cn/cssref/pr_class_clear.asp) | 设置一个元素的侧面是否允许其他的浮动元素。               |
| [cursor](http://www.w3school.com.cn/cssref/pr_class_cursor.asp) | 规定当指向某元素之上时显示的指针类型。                   |
| [display](http://www.w3school.com.cn/cssref/pr_class_display.asp) | 设置是否及如何显示元素。                                 |
| [float](http://www.w3school.com.cn/cssref/pr_class_float.asp) | 定义元素在哪个方向浮动。                                 |
| [position](http://www.w3school.com.cn/cssref/pr_class_position.asp) | 把元素放置到一个静态的、相对的、绝对的、或固定的位置中。 |
| [visibility](http://www.w3school.com.cn/cssref/pr_class_visibility.asp) | 设置元素是否可见或不可见。                               |

---

## CSS导航栏

导航栏基本上是一个链接列表，因此使用 <ul> 和 <li> 元素是非常合适的：

```html
<ul>
<li><a href="default.asp">Home</a></li>
<li><a href="news.asp">News</a></li>
<li><a href="contact.asp">Contact</a></li>
<li><a href="about.asp">About</a></li>
</ul>
```

去掉圆点和外边距：

```css
ul
{
list-style-type:none;
margin:0;
padding:0;
}
```

- list-style-type:none - 删除圆点。导航栏不需要列表项标记。
- 把外边距和内边距设置为 0 可以去除浏览器的默认设定。

**垂直导航栏**

```css
a
{
    display:block;
    width:60px;
}
```

- display:block - 把链接显示为块元素可使整个链接区域可点击（不仅仅是文本），同时也允许我们规定宽度。
- width:60px - 块元素默认占用全部可用宽度。我们需要规定 60 像素的宽度。

---

**水平导航栏**

两种创建水平导航栏的方法：行内或浮动列表项

如果希望链接拥有相同的尺寸，就必须使用浮动方法。

**行内列表项**

构建水平导航栏的方法之一是将<li>元素规定为行内元素：

```css
li
{
    display:inline;
}
```

display:inline: - 默认地，<li>元素是块元素。在这里，我们去除了每个列表项前后的换行，以便在一行中显示。

```html
<!DOCTYPE html>
<html>
<head>
<style>
ul
{
list-style-type:none;
margin:0;
padding:0;
padding-top:6px;
padding-bottom:6px;
}
li
{
display:inline;
}
a:link,a:visited
{
font-weight:bold;
color:#FFFFFF;
background-color:#98bf21;
text-align:center;
padding:6px;
text-decoration:none;
text-transform:uppercase;
}
a:hover,a:active
{
background-color:#7A991A;
}

</style>
</head>

<body>
<ul>
<li><a href="#home">Home</a></li>
<li><a href="#news">News</a></li>
<li><a href="#contact">Contact</a></li>
<li><a href="#about">About</a></li>
</ul>

<p><b>注释：</b>如果您只为 a 元素设置内边距（而不设置 ul 元素），那么链接会出现在 ul 元素之外。所以，我们为 ul 元素添加了 top 和 bottom 内边距。</p>
</body>
</html>

```

**对列表项进行浮动**

让所有的链接拥有相同的宽度，浮动<li>元素并规定a元素的宽度。

```css
li
{
    float:left;
}
a
{
    display:block;
    width:60px;
}
```

- float:left - 使用float来把块元素滑向彼此。
- display：block - 把链接显示为块元素可使整个链接区域可点击（不仅仅是文本），同时也允许我们规定宽度。
- width：60px - 由于块元素默认占用全部可用宽度，链接无法滑动至彼此相邻。需要规定60像素的宽度。

```html
<!DOCTYPE html>
<html>
<head>
<style>
ul
{
list-style-type:none;
margin:0;
padding:0;
overflow:hidden;
}
li
{
float:left;
}
a:link,a:visited
{
display:block;
width:120px;
font-weight:bold;
color:#FFFFFF;
background-color:#bebebe;
text-align:center;
padding:4px;
text-decoration:none;
text-transform:uppercase;
}
a:hover,a:active
{
background-color:#cc0000;
}

</style>
</head>

<body>
<ul>
<li><a href="#home">Home</a></li>
<li><a href="#news">News</a></li>
<li><a href="#contact">Contact</a></li>
<li><a href="#about">About</a></li>
</ul>
</body>
</html>

```

---

## CSS图片库

```html
<!doctype html>
<html>
<head>
<style>
div.img
  {
  margin:3px;
  border:1px solid #bebebe;
  height:auto;
  width:auto;
  float:left;
  text-align:center;
  }
div.img img
  {
  display:inline;
  margin:3px;
  border:1px solid #bebebe;
  }
div.img a:hover img
  {
  border:1px solid #333333;
  }
div.desc
  {
  text-align:center;
  font-weight:normal;
  width:150px;
  font-size:12px;
  margin:10px 5px 10px 5px;
  }
</style>
</head>
<body>

<div class="img">
  <a target="_blank" href="/i/tulip_ballade.jpg">
  <img src="/i/tulip_ballade_s.jpg" alt="Ballade" width="160" height="160">
  </a>
  <div class="desc">在此处添加对图像的描述</div>
</div>

<div class="img">
  <a target="_blank" href="/i/tulip_flaming_club.jpg">
  <img src="/i/tulip_flaming_club_s.jpg" alt="Ballade" width="160" height="160">
  </a>
  <div class="desc">在此处添加对图像的描述</div>
</div>

<div class="img">
  <a target="_blank" href="/i/tulip_fringed_family.jpg">
  <img src="/i/tulip_fringed_family_s.jpg" alt="Ballade" width="160" height="160">
  </a>
  <div class="desc">在此处添加对图像的描述</div>
</div>

<div class="img">
  <a target="_blank" href="/i/tulip_peach_blossom.jpg">
  <img src="/i/tulip_peach_blossom_s.jpg" alt="Ballade" width="160" height="160">
  </a>
  <div class="desc">在此处添加对图像的描述</div>
</div>

</body>
</html>

```

---

## CSS图片透明

#### 创建透明图像

定义透明效果的CSS3属性是opacity.

```css
img
{
    opacity:0.4;
    filter:alpha(opacity=40);/* 针对 IE8 以及更早的版本 */

}
```

IE9, Firefox, Chrome, Opera 和 Safari 使用属性 *opacity* 来设定透明度。opacity 属性能够设置的值从 0.0 到 1.0。值越小，越透明。

IE8 以及更早的版本使用滤镜 *filter:alpha(opacity=x)*。x 能够取的值从 0 到 100。值越小，越透明。

#### 图像透明度 - Hover效果

```css
img
{
    opacity:0.4;
    filter:alpha(opacuty=40);
}
img
{
    opacity:1.0;
	filter:alpha(opacity=100); /* 针对 IE8 以及更早的版本 */

}
```

第一个 CSS 代码块类似实例 1 中的代码。此外，我们已经设置了当鼠标指针位于图像上时的样式。在这个例子中，当指针移动到图像上时，我们希望图像是不透明的。

对应的 CSS 是：*opacity=1*。

IE8 以及更早的浏览器：*filter:alpha(opacity=100)*。

当鼠标指针移出图像后，图像会再次透明。

---

## CSS媒介类型

#### 不同的媒介类型

注释：媒介类型名称对大小写不敏感。

| 媒介类型   | 描述                                                   |
| ---------- | ------------------------------------------------------ |
| all        | 用于所有的媒介设备。                                   |
| aural      | 用于语音和音频合成器。                                 |
| braille    | 用于盲人用点字法触觉回馈设备。                         |
| embossed   | 用于分页的盲人用点字法打印机。                         |
| handheld   | 用于小的手持的设备。                                   |
| print      | 用于打印机。                                           |
| projection | 用于方案展示，比如幻灯片。                             |
| screen     | 用于电脑显示器。                                       |
| tty        | 用于使用固定密度字母栅格的媒介，比如电传打字机和终端。 |
| tv         | 用于电视机类型的设备。                                 |

---

## CSS 注意事项

---

## Internet Explorer Behaviors

*它是什么？*Internet Explorer 5 引入了行为 (behaviors)。behaviors 是一种通过使用 CSS 向 HTML 元素添加行为的方法。

*为什么要避免它？*只有 Internet Explorer 支持 behavior 属性。

*用什么代替？*请使用 [JavaScript](http://www.w3school.com.cn/js/index.asp) 和 [HTML DOM](http://www.w3school.com.cn/jsref/dom_obj_style.asp) 取而代之。

---

















