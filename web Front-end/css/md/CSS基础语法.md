# CSS基础语法

---

## CSS语法

css规则由两个主要部分构成：**选择器** ，**一条或多条声明**。

``` CSS
selector{declaration1;declaration2;... declarationN}
```

每条声明由一个属性和一个值组成

```CSS
selector{property:value}
h1{color:red; font-size:14px;}
```

```CSS
p{color:#ff0000;}
p{color:#f00;}
p{color:rgb(255,0,0);}
p{color:rgb(100%,0%,0%);}
```

每行只描述一个属性，可增强可读性

```CSS
p{
    text-align:center;
    color:black;
    font-family:arial;
}
```

```csss
body {
  color: #000;
  background: #fff;
  margin: 0;
  padding: 0;
  font-family: Georgia, Palatino, serif;
  }

```

是否包含空格不会影响 CSS 在浏览器的工作效果，同样，与 XHTML 不同，CSS 对大小写不敏感。不过存在一个例外：<u>如果涉及到与 HTML 文档一起工作的话，class 和 id 名称对大小写是敏感的</u>。

---

##  CSS派生选择器

派生选择器允许你根据上下文关系来确定某个标签的样式。通过合理的使用派生选择器，我们可以使HTML代码变得更加整洁。

例如，希望列表中的strong元素变为斜体字，而不是通常的粗体字，可以这样定义一个派生选择器：

```CSS
li strong{
    font-style: italic;
    font-weigth: normal;
}
```



```html
<p><strong>我是粗体字，不是斜体字，因为我不在列表当中，所以这个规则对我不起作用</strong></p>

<ol>
<li><strong>我是斜体字。这是因为 strong 元素位于 li 元素内。</strong></li>
<li>我是正常的字体。</li>
</ol>
```

---

## CSS id选择器

<u>id选择器可以为标有特定id的HTML元素指定特定的样式。</u>

id选择器可以“#”来定义。

```CSS
#red{color: red;}
#green{color: green;}

<p id="red"> this paragraf is red. </p>
<p id="green"> this paragraph is green. </p>
```

注意：id属性只能在每个HTML文档中出现一次。

单独的选择器

id选择器即使不被用来创建派生选择器，它也可以独立发挥作用

```CSS
#sidebar{
    border: 1px dotted #000;
    padding: 10px;
}
```

id为sidebar的元素将拥有一个像素宽的黑色点状边框，同时其周围会有10个像素宽的内边距（padding，内部空白）。

---

## CSS类选择器

在CSS中，类选择器以一个点号显示：

```CSS
.center{text-align: center}
```

⬆️所有的center类的HTML元素均为居中。

⬇️h1和p元素都有center类。

```CSS
<h1 class="center">
This heading will be center-aligned
</h>

<p class="center">
This paragraph will also be center-aligned.
</p>
```

注意：类名的第一个字符不能为数字！它无法在Mozilla或Firefox中起作用。

和id一样，class也可被用作派生选择器

```CSS
.fancy td{
    color:#f60;
    background:#666;
}
```

⬆️类名为 fancy 的更大的元素内部的表格单元都会以灰色背景显示橙色文字。（名为 fancy 的更大的元素可能是一个表格或者一个 div）

元素也可以基于他们的类而被选择：

```CSS
td.fancy{
    color: #f60;
    background: #666;
}
```

---

## CSS属性选择器

对带有指定属性的HTML元素设置样式。

可以为拥有指定属性的HTML元素设置样式，而不仅限于class和id属性

注释：只有在规定了！DOCTYPE时，IE7和IE8才支持属性选择器。在IE6及更低版本中，不支持属性选择。

属性选择器

⬇️为带有title属性的所有元素设置样式：

```CSS
[title]
{
    color:red;
}
```

⬇️单独含有hello字符

```CSS
[title~=hello]{color:red;}
```

⬇️包含指定的lang属性

```CSS
[lang|=en]{color:red;}
```

设置表单的样式

```CSS
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
<head>
<style>
input[type="text"]
{
  width:150px;
  display:block;
  margin-bottom:10px;
  background-color:yellow;
  font-family: Verdana, Arial;
}

input[type="button"]
{
  width:120px;
  margin-left:35px;
  display:block;
  font-family: Verdana, Arial;
}
</style>
</head>
<body>

<form name="input" action="" method="get">
<input type="text" name="Name" value="Bill" size="20">
<input type="text" name="Name" value="Gates" size="20">
<input type="button" value="Example Button">

</form>
</body>
</html>

```



---

## CSS 选择器参考手册

| 选择器                                                       | 描述                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [[*attribute*\]](http://www.w3school.com.cn/cssref/selector_attribute.asp) | 用于选取带有指定属性的元素。                                 |
| [[*attribute*=*value*\]](http://www.w3school.com.cn/cssref/selector_attribute_value.asp) | 用于选取带有指定属性和值的元素。                             |
| [[*attribute*~=*value*\]](http://www.w3school.com.cn/cssref/selector_attribute_value_contain.asp) | 用于选取属性值中包含指定词汇的元素。                         |
| [[*attribute*\|=*value*\]](http://www.w3school.com.cn/cssref/selector_attribute_value_start.asp) | 用于选取带有以指定值开头的属性值的元素，该值必须是整个单词。 |
| [[*attribute*^=*value*\]](http://www.w3school.com.cn/cssref/selector_attr_begin.asp) | 匹配属性值以指定值开头的每个元素。                           |
| [[*attribute*$=*value*\]](http://www.w3school.com.cn/cssref/selector_attr_end.asp) | 匹配属性值以指定值结尾的每个元素。                           |
| [[*attribute**=*value*\]](http://www.w3school.com.cn/cssref/selector_attr_contain.asp) | 匹配属性值中包含指定值的每个元素。                           |

---

## 如何创建CSS

### 如何插入样式表

1. 外部样式表

   当样式需要应用于很多页面时，外部样式表将是理想的选择，在使用外部样式表的情况下，可以通过改变一个文件夹改变整个站点的外观。每个页面使用link标签链接到样式表。

   ```css
   <head>
   <link rel="stylesheet" type="text/css" href="mystyle.css"/>
   </head>
   ```

   **不要在属性值和单位之间留有空格。**

2. 内部样式表

   ```CSS
   <head>
   <style type="text/css">
   hr{color:sienna;}
   p{margin-left: 20px;}
   body{background-image:url("image/back40.gif");}
   </style>
   </head>
   ```

3. 内联样式

   **当样式仅需要在一个元素上应用一次时使用**

   ```css
   <p style="color:sienna;margin-left:20px">
   This is a paragraph.
   </p>
   ```

4. 多重样式

   如果某些属性在不同的样式表中被同样的选择器定义，那么属性值将从更具体的样式表中继承过来。

   ```css
   h3{
       color:red;
       text-align:left;
       font-size:8pt;
   }
   ```

   与此同时，内部样式拥有针对h3选择器的两个属性：

   ```css
   h3{
       text-align:right;
       font-size:20pt;
   }
   ```

   同时定义，h3样式为：

   ```css
   color:red;
   text-align:rigth;
   font-size:20pt;
   ```

   **<u>即颜色属性将被继承于外部样式表</u>，而文字排列（text-alignment）和字体尺寸（font-size）会被内部样式表中的规则取代。**



---



   # CSS样式



   ## CSS背景

   **CSS允许应用纯色作为背景，也允许使用背景图像创建相当复杂的效果。**

---

  ### 背景色  <u>background-color</u>

   ```CSS
   p {background-color: gray; padding: 20px}
   ```

可以为所有元素设置背景色，这包括 body 一直到 em 和 a 等行内元素。

background-color不能继承，其默认值是transparent。有透明之意。

### 背景图像  <u>background-image</u>

属性默认值为none，如果需要设置一个背景图像，必须为这个属性这是一个URL值。

```CSS
body{background-image:url(/i/eg_bg_0.gif);}
```

大多数背景都应用到body元素，并不仅限于此。

```css
p.flower{background-image:url(/i/eg_bg_03.gif);}
```

所有的背景属性都不能继承。

### 背景重复	<u>background-repead</u>

```CSS
body{
    background-image:url(/i/eg_bg_03.gif);
    background-repead: repeat-y;
}
```

### 背景定位	<u>background-position</u>

改变图片在背景中的位置

```CSS
body{
    background-image:url('/i/eg_bg_03.gif');
    background-repead:no-repeat;
    background-position:center;
}
```

为 background-position 属性提供值有很多方法。首先，可以使用一些关键字：==top、bottom、left、right 和 center==。通常，这些关键字会成对出现，不过也不总是这样。还可以使用长度值，如 100px 或 5cm，==最后也可以使用百分数值==。不同类型的值对于背景图像的放置稍有差异。

### 关键字

```css
p{
    background-image:url('bgimg.gif');
    background-repead:no-repeat;
    background-position:top;
}
```

| 单一关键字 | 等价的关键字                   |
| ---------- | ------------------------------ |
| center     | center ==center==              |
| top        | top ==center== 或 center top   |
| bottom     | bottom center 或 center bottom |
| right      | right center 或 center right   |
| left       | left center 或 center left     |

默认缺省值为center。

### 百分数值

```css
body{
    background-image:url('/i/eg_bg_03.gif');
    background-repeat:no-repeat;
    background-position:50% 50%;
}
```

这会导致图像适当放置，其中心与其元素的中心对齐。**换句话说，百分数值同时应用于元素和图像。**

### 长度值

Background-position: 50px 100px

### 背景关联

如果文档比较长，那么当文档向下滚动时，背景图像也会随之滚动。当文档滚动到超过图像的位置时，图像就会消失。

您可以通过 [background-attachment 属性](http://www.w3school.com.cn/cssref/pr_background-attachment.asp)防止这种滚动。通过这个属性，可以声明图像相对于可视区是固定的（fixed），因此不会受到滚动的影响：

```CSS
body{
    background-image:url('/i/eg_bg_02.gif');
    background-repeat:no-repeat;
    background-attachment:fixed;
}
```

Background-attachment属性的默认值是scroll。

---



## CSS文本

**CSS文本属性可定义文本的外观。**

通过文本属性，可以改变文本的颜色、字符间距，对齐文本，装饰文本，对文本进行缩进等。

---

#### 缩进文本

第一行进行缩进，CSS提供了 <u>text-indent属性</u>

```CSS
p{text-indent:5em;}
```

**注意**：一般来说，可以为所有块级元素应用 text-indent，但==无法将该属性应用于行内元素==，图像之类的替换元素上也无法应用 text-indent 属性。不过，如果一个块级元素（比如段落）的首行中有一个图像，它会随该行的其余文本移动。

提示：如果想把一个行内元素的第一行“缩进”，==可以用左内边距或外边距创造这种效果。==

在为 text-indent 设置==负值==时要当心，如果对一个段落设置了负值，那么首行的某些文本可能会超出浏览器窗口的左边界。为了避免出现这种显示问题，建议针对负缩进再设置一个外边距或一些内边距：

```css
p{text-indent:-5em; padding-left:5em;}
```

#### 使用百分比值

text-indent 可以使用所有长度单位，包括百分比值。

```css
div{width: 400px;}
p {text-indent: 20%;}

<div>
<p> this is a paragraph.</p>
</div>
```

#### 继承

text-indent属性可以继承。

```css
div#outer {width: 500px;}
div#inner {text-indent: 10%;}
p {width: 200px;}

<div id = "outer">
<div id = "inner">some text. some text. some text.
<p>this is a paragraph.</p>
</div>
</div>
```

#### 水平对齐

<u>text-align</u>是一个基本的属性，他会影响一个元素中的文本行互相之间的对齐方式。前三个值相当直接。

值left、right和center会导致元素中的文本分别左对齐，右对齐和居中。

==西方语言从左向右，希伯来语和阿拉伯语从右向左==

**text-align:center与<CENTER>**

**<CENTER>**不但影响文本，还会把整个元素居中。text-align不会控制元素的对齐，只影响内部内容。元素本身不会从一段移动到另一端，只是其中的文本受影响。

**justify**

最后一个水平对齐属性是justify。使文本两头对齐。

#### 字间隔

<u>word-spacing属性</u>可以改变字（单词）之间的间隔。默认值normal与0是一样的。

```css
p.spread {word-spacing: 30px;}
p.tight {word-spacing: -0.5em;}

<p class = "spread">
This is a paragraph. The spaces between words will be increased.
</p>

<p class = "tight">
This is a paragraoh. The spaces between words will be decreased.
</p>
```

#### 字母间隔

<u>letter-spacing属性</u>与word-spacing的区别：字母间隔修改的是字符或者字母之间的间隔。

```css
h1 {letter-spacing: -0.5em}
h4 {letter-spacing: 20px}

<h1>This is header 1</h1>
<h4>This is header 4</h4>
```

#### 字符转换

<u>text-transform属性</u>处理文本的大小写

- none
- uppercase
- lowercase
- capitalize

默认值none对文本不做改动。uppercase和lowercase将文本转换为全大写和全小写字符。最后，capitalize只对每个单词的首字母大写。

```css
h1 {text-transform: uppercase}
```

```html
<html>

<head>
<style type="text/css">
  h1 {text-transform: uppercase}
  p.uppercase {text-transform: uppercase}
  p.lowercase {text-transform: lowercase}
  p.capitalize {text-transform: capitalize}
</style>
</head>

<body>
<h1>This Is An H1 Element</h1>
<p class="uppercase">This is some text in a paragraph.</p>
<p class="lowercase">This is some text in a paragraph.</p>
<p class="capitalize">This is some text in a paragraph.</p>
</body>

</html>
```

#### 文本装饰

<u>text-decration</u>

- none
- underline
- overline
- line-through
- blink

#### 处理空白符

<u>white-space</u>

```css
p {white-space: normal;}
<p>
This      paragraph has    
many space   in     it.
</p>
```

- normal    忽略空白符
- pre          空白符不会被忽略
- nowrap   防止换行
- pre-line   空白符忽略，允许换行
- pre-wrap  空白符不被忽略，允许换行

#### 文本方向

<u>derection</u>

ltr和rtl，默认ltr

## CSS字体

除了各种特定的字体系列外，CSS 定义了 5 种通用字体系列：

- Serif 字体
- Sans-serif 字体
- Monospace 字体
- Cursive 字体
- Fantasy 字体

使用一种sans-serif字体，不关心是哪一种字体

```css
body {font-family: sans-serif;}
```

指定字体：

```css
h1 {font-family: Georgia;}
```

没有安装Georgia字体

```css
h1 {font-family: Georgia, serif;}
```

如果您对字体非常熟悉，也可以为给定的元素指定一系列类似的字体。要做到这一点，需要把这些字体按照优先顺序排列，然后用逗号进行连接：

```css
p {font-family: Times, TimesNR, 'New Century Schoolbook',Georgia, 'New York', serif;}
```

#### 使用引号

只有当字体名中有一个或多个空格（比如New York），或者如果字体名包括#或$之类的符号，才需要在font-family声明中加引号。

单引号或双引号都可以接受。但是，如果把一个 font-family 属性放在 HTML 的 style 属性中，则需要使用该属性本身未使用的那种引号：

```css
<p style="font-family: Times, TimesNR, 'New Century Schoolbook', Georgia,'New York', serif;">...</p>
```

#### 字体风格

<u>font-style</u>最常用于规定斜体文本

- normal - 文本正常显示
- italic - 文本斜体显示
- oblique - 文本倾斜显示

斜体（italic）是一种简单的字体风格，对每个字母的结构有一些小改动，来反映变化的外观。与此不同，倾斜（oblique）文本则是正常竖直文本的一个倾斜版本。

通常情况下，italic 和 oblique 文本在 web 浏览器中看上去完全一样。

#### 字体变形

<u>font-variant</u>设定小型大写字母

```css
p {font-variant: small-caps;}
```

#### 字体加粗

<u>font-weight</u>设置文本的粗细

100 ~ 900 设置9级加粗度，400等价于normal，700等价于bold。

```css
p.normal {font-weigth: normal;}
p.thick {font-weigth: bold;}
p.thicker {font-weight: 900;}
```

#### 字体大小

<u>font-size</u>

值可以是绝对或者相对

绝对值：

- 将文本设置为指定的大小
- 不允许用户在所有的浏览器中改变文本的大小（不利于可用性）
- 绝对大小在确定了输出的物理尺寸时很有用

相对大小：

- 相对于周围的元素来设置大小
- 允许用户在浏览器改变文本大小

**注意**：如果没有规定字体大小，普通文本的默认大小是16像素（1em）

```css
h1 {font-size: 60px;}
h2 {font-size: 40px;}
p {font-size: 14px;}
```

（注：16 等于父元素的默认字体大小，假设父元素的 font-size 为 20px，那么公式需改为：*pixels*/20=*em*）

```css
h1 {font-size:3.75em;} /* 60px/16=3.75em */
h2 {font-size:2.5em;}  /* 40px/16=2.5em */
p {font-size:0.875em;} /* 14px/16=0.875em */
```

**结合使用百分比和EM**

在所有浏览器中均有效的方案是为 body 元素（父元素）以百分比设置默认的 font-size 值：

```css
body {font-size:100%;}
h1 {font-size:3.75em;}
h2 {font-size:2.5em;}
p {font-size:0.875em;}
```

## CSS链接

#### 设置链接的样式

链接的特殊性在于能够根据他们所处的状态来设置他们的样式。

链接的四种状态：

- a:link - 普通的、未被访问的链接
- a:visited - 用户已访问的链接
- a:hover - 鼠标指针位于链接的上方
- a:active - 链接被点击的时刻

```css
a:link {color: #FF0000;}      /*未被访问的链接*/
a:visited {color: #00FF00;}	  /*已访问*/
a:hover {color: #FF00FF;}	  /*鼠标指针移动到链接上*/
a:active {color: #0000FF;}	  /*点击*/
```

当为链接的不同状态设置样式时，请按照以下次序规则：

- a:hover 必须位于 a:link 和 a:visited 之后
- a:active 必须位于 a:hover 之后

#### 去掉下划线

```css
a:link {text-decoration:none}
```

#### 背景色

```css
a:link {background-color: #B2FF99;}
```



## CSS列表

#### CSS列表属性

| 属性                | 描述                       |
| ------------------- | -------------------------- |
| list-style          | 简写属性                   |
| list-style-image    | 图像设置为列表项标志       |
| list-style-position | 设置列表中列表项标志的位置 |
| list-style-type     | 设置列表项标志的类型       |
|                     |                            |

#### CSS列表实例

**所有的列表样式类型**

```html
<html>
<head>
<style type="text/css">
ul.none {list-style-type: none}
ul.disc {list-style-type: disc}
ul.circle {list-style-type: circle}
ul.square {list-style-type: square}
ul.decimal {list-style-type: decimal}
ul.decimal-leading-zero {list-style-type: decimal-leading-zero}
ul.lower-roman {list-style-type: lower-roman}
ul.upper-roman {list-style-type: upper-roman}
ul.lower-alpha {list-style-type: lower-alpha}
ul.upper-alpha {list-style-type: upper-alpha}
ul.lower-greek {list-style-type: lower-greek}
ul.lower-latin {list-style-type: lower-latin}
ul.upper-latin {list-style-type: upper-latin}
ul.hebrew {list-style-type: hebrew}
ul.armenian {list-style-type: armenian}
ul.georgian {list-style-type: georgian}
ul.cjk-ideographic {list-style-type: cjk-ideographic}
ul.hiragana {list-style-type: hiragana}
ul.katakana {list-style-type: katakana}
ul.hiragana-iroha {list-style-type: hiragana-iroha}
ul.katakana-iroha {list-style-type: katakana-iroha}
</style>
</head>

<body>
<ul class="none">
<li>"none" 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="disc">
<li>Disc 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="circle">
<li>Circle 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="square">
<li>Square 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="decimal">
<li>Decimal 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="decimal-leading-zero">
<li>Decimal-leading-zero 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="lower-roman">
<li>Lower-roman 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="upper-roman">
<li>Upper-roman 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="lower-alpha">
<li>Lower-alpha 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="upper-alpha">
<li>Upper-alpha 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="lower-greek">
<li>Lower-greek 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="lower-latin">
<li>Lower-latin 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="upper-latin">
<li>Upper-latin 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="hebrew">
<li>Hebrew 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="armenian">
<li>Armenian 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="georgian">
<li>Georgian 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="cjk-ideographic">
<li>Cjk-ideographic 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="hiragana">
<li>Hiragana 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="katakana">
<li>Katakana 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="hiragana-iroha">
<li>Hiragana-iroha 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

<ul class="katakana-iroha">
<li>Katakana-iroha 类型</li>
<li>茶</li>
<li>可口可乐</li>
</ul>

</body>
</html>

```



---

## CSS表格

#### 表格边框

border属性设置表格边框

```css
table, th, td
{
    border: 1px solid blue;
}
```

如果需要把表格显示为单线条边框，请使用 border-collapse 属性。

---

#### 折叠边框

border-collapse设置是否将表格边框折叠为单一边框

```css
table{
    border-collapse: collapse;
}
table, th, td
{
    border: 1px solid black;  /*solid  实线*/
}
```



#### 表格宽度和高度

```css
table
{
    width: 100%;
}

th
{
    height: 50px;
}
```

**HTML表单中有两种类型的单元格**

- 表头单元格 - 包含表头信息（由th元素创建）
- 标准单元格 - 包含数据（由td元素创建）

th元素内部的文本通常会呈现为居中加粗，而td元素内的文本通常是左对齐的普通文本。

 **如果要将内容横跨多个行或列，使用colspan和rowspan属性。**

#### 表格文本对齐

text-align和 vertical-align属性设置表格中文本的对齐方式。

text-align设置水平对齐方式

```css
td{
    text-align: right;
}
```

Vergical-align设置垂直对齐方式

```css
td{
    height: 50px;
    vertical-align: bottom;
}
```

#### 表格内边距

padding属性控制

```css
td{
    padding: 15px;
}
```

#### 表格颜色

```css
table, th, td
{
    border: 1px solid green;
}
th
{
    background-color: green;
    color: white;
}
```

---



## CSS轮廓

---

轮廓（outline）是绘制元素周围的一条线，位于边框边缘的外围，可起到突出元素的作用。

---

 **CSS边框属性**

| 属性          | 描述                           |
| ------------- | ------------------------------ |
| outline       | 在一个声明中设置所有的轮廓属性 |
| outline-color | 轮廓颜色                       |
| outline-style | 轮廓样式                       |
| outline-width | 轮廓宽度                       |

---



## CSS框模型

---

**CSS框模型（Box Model）规定了元素框处理元素内容、<u>内边框</u>、<u>边框</u>、<u>外边距</u>的方式。**

![ct_boxmodel](/Users/apple/Documents/GitHub/my_web/web Front-end/material/ct_boxmodel.gif)

- 内边距 - 内边距呈现元素的背景
- 边框 - 内边距的边缘是边框
- 外边距 - 边框以外是外边距，默认是透明的，不会遮挡其后的任何元素。

内边距、边框和外边距都是可选的，默认值是零。

```css
* {
    margin: 0;
    padding: 0;
}
```



![CSS æ¡æ¨¡åå®ä¾](http://www.w3school.com.cn/i/ct_css_boxmodel_example.gif)

```css
#box{
    width:70px;
    padding: 5px;
    margin: 10px;
}
```

**==提示：==**外边距可以是负值，而且在很多情况下都要用到负值的外边距。

**CSS内边距属性**

| 属性                                                         | 描述                                                 |
| ------------------------------------------------------------ | ---------------------------------------------------- |
| [padding](http://www.w3school.com.cn/cssref/pr_padding.asp)  | 简写属性。作用是在一个声明中设置元素的所内边距属性。 |
| [padding-bottom](http://www.w3school.com.cn/cssref/pr_padding-bottom.asp) | 设置元素的下内边距。                                 |
| [padding-left](http://www.w3school.com.cn/cssref/pr_padding-left.asp) | 设置元素的左内边距。                                 |
| [padding-right](http://www.w3school.com.cn/cssref/pr_padding-right.asp) | 设置元素的右内边距。                                 |
| [padding-top](http://www.w3school.com.cn/cssref/pr_padding-top.asp) | 设置元素的上内边距。                                 |

---

## CSS边框

---

**元素的边框（border）是围绕元素内容和内边距的一条或多条线**

**CSS border属性允许你规定元素边框的样式、宽度和颜色。**

---

每个边框有3个方面：宽度、样式以及颜色。

#### 边框与背景

边框绘制在“元素的背景之上”。

#### 边框的样式

border-style属性定义了10个不同的非inherit样式。

| 值      | 描述                                                         |
| ------- | ------------------------------------------------------------ |
| none    | 定义无边框。                                                 |
| hidden  | 与 "none" 相同。不过应用于表时除外，对于表，hidden 用于解决边框冲突。 |
| dotted  | 定义点状边框。在大多数浏览器中呈现为实线。                   |
| dashed  | 定义虚线。在大多数浏览器中呈现为实线。                       |
| solid   | 定义实线。                                                   |
| double  | 定义双线。双线的宽度等于 border-width 的值。                 |
| groove  | 定义 3D 凹槽边框。其效果取决于 border-color 的值。           |
| ridge   | 定义 3D 垄状边框。其效果取决于 border-color 的值。           |
| inset   | 定义 3D inset 边框。其效果取决于 border-color 的值。         |
| outset  | 定义 3D outset 边框。其效果取决于 border-color 的值。        |
| inherit | 规定应该从父元素继承边框样式。                               |

```css
p {border-style: solid solid solid none;}
p {border-style: solid; border-left-style: none;}
```



#### 边框的宽度

<u>border-width</u>为边框指定宽度

```css
p {border-style: solid; border-width: 5px;}
p {border-style: solid; border-width: thick;}
```



#### 单边宽度

```css
p {border-style: solid; border-width: 15px 5px 15px 5px;}
```

```css
p {
  border-style: solid;
  border-top-width: 15px;
  border-right-width: 5px;
  border-bottom-width: 15px;
  border-left-width: 5px;
  }
```

---

#### 边框的颜色

border-color属性，最多接受4个颜色值

```css
p {
  border-style: solid;
  border-color: blue rgb(25%,35%,45%) #909090 red;
  }
```

注释：默认的边框颜色是元素本身的前景色。如果没有为边框声明颜色，它将与元素的文本颜色相同。另一方面，如果元素没有任何文本，假设它是一个表格，其中只包含图像，那么该表的边框颜色就是其父元素的文本颜色（因为 color 可以继承）。这个父元素很可能是 body、div 或另一个 table。

---

CSS2 引入了边框颜色值 transparent。这个值用于创建有宽度的不可见边框。请看下面的例子：

```css
<a href="#">AAA</a>
<a href="#">BBB</a>
<a href="#">CCC</a>
```

我们为上面的链接定义了如下样式：

```css
a:link, a:visited {
  border-style: solid;
  border-width: 5px;
  border-color: transparent;
  }
a:hover {border-color: gray;}
```



从某种意义上说，利用 transparent，使用边框就像是额外的内边距一样；此外还有一个好处，就是能在你需要的时候使其可见。这种透明边框相当于内边距，因为元素的背景会延伸到边框区域（如果有可见背景的话）。

重要事项：在 IE7 之前，IE/WIN 没有提供对 transparent 的支持。在以前的版本，IE 会根据元素的 color 值来设置边框颜色。

**CSS边框属性**

| 属性                                                         | 描述                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [border](http://www.w3school.com.cn/cssref/pr_border.asp)    | 简写属性，用于把针对四个边的属性设置在一个声明。             |
| [border-style](http://www.w3school.com.cn/cssref/pr_border-style.asp) | 用于设置元素所有边框的样式，或者单独地为各边设置边框样式。   |
| [border-width](http://www.w3school.com.cn/cssref/pr_border-width.asp) | 简写属性，用于为元素的所有边框设置宽度，或者单独地为各边边框设置宽度。 |
| [border-color](http://www.w3school.com.cn/cssref/pr_border-color.asp) | 简写属性，设置元素的所有边框中可见部分的颜色，或为 4 个边分别设置颜色。 |
| [border-bottom](http://www.w3school.com.cn/cssref/pr_border-bottom.asp) | 简写属性，用于把下边框的所有属性设置到一个声明中。           |
| [border-bottom-color](http://www.w3school.com.cn/cssref/pr_border-bottom_color.asp) | 设置元素的下边框的颜色。                                     |
| [border-bottom-style](http://www.w3school.com.cn/cssref/pr_border-bottom_style.asp) | 设置元素的下边框的样式。                                     |
| [border-bottom-width](http://www.w3school.com.cn/cssref/pr_border-bottom_width.asp) | 设置元素的下边框的宽度。                                     |
| [border-left](http://www.w3school.com.cn/cssref/pr_border-left.asp) | 简写属性，用于把左边框的所有属性设置到一个声明中。           |
| [border-left-color](http://www.w3school.com.cn/cssref/pr_border-left_color.asp) | 设置元素的左边框的颜色。                                     |
| [border-left-style](http://www.w3school.com.cn/cssref/pr_border-left_style.asp) | 设置元素的左边框的样式。                                     |
| [border-left-width](http://www.w3school.com.cn/cssref/pr_border-left_width.asp) | 设置元素的左边框的宽度。                                     |
| [border-right](http://www.w3school.com.cn/cssref/pr_border-right.asp) | 简写属性，用于把右边框的所有属性设置到一个声明中。           |
| [border-right-color](http://www.w3school.com.cn/cssref/pr_border-right_color.asp) | 设置元素的右边框的颜色。                                     |
| [border-right-style](http://www.w3school.com.cn/cssref/pr_border-right_style.asp) | 设置元素的右边框的样式。                                     |
| [border-right-width](http://www.w3school.com.cn/cssref/pr_border-right_width.asp) | 设置元素的右边框的宽度。                                     |
| [border-top](http://www.w3school.com.cn/cssref/pr_border-top.asp) | 简写属性，用于把上边框的所有属性设置到一个声明中。           |
| [border-top-color](http://www.w3school.com.cn/cssref/pr_border-top_color.asp) | 设置元素的上边框的颜色。                                     |
| [border-top-style](http://www.w3school.com.cn/cssref/pr_border-top_style.asp) | 设置元素的上边框的样式。                                     |
| [border-top-width](http://www.w3school.com.cn/cssref/pr_border-top_width.asp) | 设置元素的上边框的宽度。                                     |



## CSS外边距

---

#### CSS margin属性

margin可以接受任何长度单位，像素、英寸、毫米或em。

margin可以设置auto

```css
h1{margin: 0.25in;}
h2{margin: 10px 0px 15px 5px} /*顺时针*/
p{margin: 10%;} /*%相对于父元素的width计算的*/
```

margin默认是0，如果没有为margin声明一个值，就不会出现外边距。

---

- 如果缺少左外边距的值，则使用右外边距的值。
- 如果缺少下外边距的值，则使用上外边距的值。
- 如果缺少右外边距的值，则使用上外边距的值。

![CSS å¼å¤å¶](http://www.w3school.com.cn/i/ct_css_margin_value.gif)

```css
h1 {margin: 0.25em 1em 0.5em;}	/* 等价于 0.25em 1em 0.5em 1em */
h2 {margin: 0.5em 1em;}		/* 等价于 0.5em 1em 0.5em 1em */
p {margin: 1px;}			/* 等价于 1px 1px 1px 1px */
```

---

#### 单边外边距属性

为元素单边设置外边距，不必使用margin（需要键入很多auto）：

```css
p{margin-left: 20px;}
h2 {
  margin-top: 20px;
  margin-right: 30px;
  margin-bottom: 30px;
  margin-left: 20px;
  }
```

<u>==提示：==</u>Netscape和IE对body标签定义的默认边距都是8px。而opera不是。相反的，Opera将内部填充的默认值定义为8px。

---

## CSS外边距合并

外边距合并是指，当两个垂直外边距相遇时，他们将形成一个外边距。

合并后的外边距的高度等于两个发生合并的外边距的高度中的较大者。

---

![CSS å¤è¾¹è·åå¹¶å®ä¾ 1](http://www.w3school.com.cn/i/ct_css_margin_collapsing_example_1.gif)

当一个元素包含在另一个元素中时（假设没有内边距或边框把外边距分隔开），它们的上和/或下外边距也会发生合并。请看下图：

![CSS å¤è¾¹è·åå¹¶å®ä¾ 2](http://www.w3school.com.cn/i/ct_css_margin_collapsing_example_2.gif)

假设有一个空元素，它有外边距，但是没有边框或填充。在这种情况下，上外边距与下外边距就碰到了一起，它们会发生合并：

![CSS å¤è¾¹è·åå¹¶å®ä¾ 3](http://www.w3school.com.cn/i/ct_css_margin_collapsing_example_3.gif)

如果这个外边距遇到另一个元素的外边距，它还会发生合并：

![CSS å¤è¾¹è·åå¹¶å®ä¾ 4](http://www.w3school.com.cn/i/ct_css_margin_collapsing_example_4.gif)

外边距合并初看上去可能有点奇怪，但是实际上，它是有意义的。以由几个段落组成的典型文本页面为例。第一个段落上面的空间等于段落的上外边距。如果没有外边距合并，后续所有段落之间的外边距都将是相邻上外边距和下外边距的和。这意味着段落之间的空间是页面顶部的两倍。如果发生外边距合并，段落之间的上外边距和下外边距就合并在一起，这样各处的距离就一致了。

![CSS å¤è¾¹è·åå¹¶çå®éæä¹](http://www.w3school.com.cn/i/ct_css_margin_collapsing.gif)

































