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













