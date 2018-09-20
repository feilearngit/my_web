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

### 缩进文本

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

