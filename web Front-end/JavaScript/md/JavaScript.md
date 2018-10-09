# JavaScript教程

## JavaScript简介

---

## JavaScript使用

---

**HTML中的脚本必须位于<script>与</script>标签之间。**

**脚本可被放置在HTML页面的<body>和<head>部分中。**

---

#### <script>标签

如需在 HTML 页面中插入 JavaScript，请使用 <script> 标签。

<script> 和 </script> 会告诉 JavaScript 在何处开始和结束。

<script> 和 </script> 之间的代码行包含了 JavaScript：

```html
<script>
alert("My first JavaScript");
</script>
```

#### <body>中的JavaScript

```html
<!DOCTYPE html>
<html>
<body>
.
.
<script>
document.write("<h1>This is a heading</h1>");
document.write("<p>This is a paragraph</p>");
</script>
.
.
</body>
</html>

```

---

#### JavaScript函数和事件

把JavaScript代码放入函数中，就可以在事件发生时调用该函数。

---

#### <head>或<body>中的JavaScript

您可以在 HTML 文档中放入不限数量的脚本。

脚本可位于 HTML 的 <body> 或 <head> 部分中，或者同时存在于两个部分中。

通常的做法是把函数放入 <head> 部分中，或者放在页面底部。这样就可以把它们安置到同一处位置，不会干扰页面的内容。

---

```html
<!DOCTYPE html>
<html>

<head>
<script>
function myFunction()
{
document.getElementById("demo").innerHTML="My First JavaScript Function";
}
</script>
</head>

<body>

<h1>My Web Page</h1>

<p id="demo">A Paragraph</p>

<button type="button" onclick="myFunction()">Try it</button>

</body>
</html>
```

```html
<!DOCTYPE html>
<html>
<body>

<h1>My Web Page</h1>

<p id="demo">A Paragraph</p>

<button type="button" onclick="myFunction()">Try it</button>

<script>
function myFunction()
{
document.getElementById("demo").innerHTML="My First JavaScript Function";
}
</script>

</body>
</html>
```

---

#### 外部的JavaScript

外部JavaScript文件的文件扩展名是.js

如需使用外部文件，在<script>标签的“src”属性中设置该.js文件：

```html
<script src="myScript.js">

</script>
```

<u>==外部脚本不能包含<script>标签==</u>

---

## JavaScript输出

**警告**

请使用document.write() 仅仅向文档输出内容。

如果在文档已完成加载后执行document.write，整个HTML页面将被覆盖。

```html
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<h1>my first web page</h1>

	<p id="demo"> my first paragraph</p>

	<button onclick="myFunction()">click here</button>

	<script type="text/javascript">
		document.getElementById("demo").innerHTML="my first javascript";
		document.write("<p>my first paragraph JavaScript</p>");
		document.write("oh my gosh");

		function myFunction()
		{
			document.write("oh shit");
            //页面内容被覆盖。
		}
	</script>
</body>
</html>
```

---

## JavaScript语句

---

#### 分号

用于分隔JavaScript语句。

通常在每条可执行语句结尾添加分号。

使用分号的另一用处是在一行中编写多条语句。

---

#### JavaScript对大小写敏感

---

#### 空格

JavaScript会忽略多余的空格。

var name = "Hello";

var name="Hello";

---

#### 对代码行进行折行

```javascript
document.write("Hello \
World");
```

---

#### JavaScript注释

单行注释以//开头

多行注释/* */

---

#### JavaScript变量

var x = 2;

var y = 3;

var z = x + y;

变量可以使用短名称（比如 x 和 y），也可以使用描述性更好的名称（比如 age, sum, totalvolume）。

- 变量必须以字母开头
- 变量也能以 $ 和 _ 符号开头（不过我们不推荐这么做）
- 变量名称对大小写敏感（y 和 Y 是不同的变量）

==提示：==avaScript 语句和 JavaScript 变量都对大小写敏感。

---

#### JavaScript数据类型

```javascript
var pi = 3.14;
var name="Bill Gates";
var answer='Yes I am!';
```

```javascript
<p id="demo"></p>
var carname="Volvo";
document.getElementById("demo").innerHTML=carname;
```

```html
<!DOCTYPE html>
<html>
<body>

<p>点击这里来创建变量，并显示结果。</p>

<button onclick="myFunction()">点击这里</button>

<p id="demo"></p>

<script>
function myFunction()
{
var carname="Volvo";
document.getElementById("demo").innerHTML=carname;
}
</script>

</body>
</html>
```

---

#### Value = undefined

var carname; 实际上是undefined。

---

## JavaScript数据类型

---

**字符串、数字、布尔、数组、对象、Null、Undefined**

---







