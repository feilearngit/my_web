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

```JavaScript
var cars=new Array();
cars[0] = "Audi";
cars[1] = "BMW";
cars[2] = "Mercedes-Benz";

var cars=new Array("Audi","BMW","Mercedes-Benz");

var cars=["Audi","BMW","Volvo"];
```

---

#### JavaScript对象

```javascript
var person={firstname:"Bill", lastname:"Gates", id:5566};

var person={
firstname : "Bill",
lastname  : "Gates",
id        :  5566
};

name=person.lastname;
name=person["lastname"];
```

---

#### undefined和Null

```javascript
cars = null;
person = null;
```

---

#### 声明变量类型

```javascript
var carname=new String;
var x=      new Number;
var y=      new Boolean;
var cars=   new Array;
var person= new Object;
```

JavaScript变量均为对象，当声明一个变量时，就创建了一个新的对象。

---

## JavaScript对象

JavaScript中所有的事物都是对象：字符串、数字、数组、日期等等。

在JavaScript中，对象是拥有属性和方法的数据。

---

#### 属性和方法

属性是与对象相关的值。颜色、重量。

方法是能够在对象上执行的动作。drive()  run()  stop()

---

#### JavaScript中的对象

对象是数据（变量），拥有属性和方法。

```html

<!DOCTYPE html>
<html>
<body>

<script>
person=new Object();
person.firstname="Bill";
person.lastname="Gates";
person.age=56;
person.eyecolor="blue";
document.write(person.firstname + " is " + person.age + " years old.");
</script>

</body>
</html>
```

---

#### 访问对象属性

```javascript
var message="Hello World!";
var x = message.length;   //12
```

---

#### 访问对象的方法

```javascript
var message = "Hello World!";
var x = message.toUpperCase();  //HELLO WORLD!
```



---

## JavaScript函数

函数是由事件驱动的或者当它被调用时执行的可重复使用的代码块。

#### 调用带参数的函数

```html
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<script type="text/javascript">
		function myFunction_1(name, job)
		{
			alert("Welcome" + name + ", the" + job);
		}
	</script>
<button onclick="myFunction_1('Bill Gates', 'CEO')">click here</button>
    <!--function中传参需要用单引号-->
</body>
</html>
```

---

#### 带返回值的函数

```JavaScript
function myFunction()
{
var x=5;
return x;
}
```

---

## JavaScript运算符



| 运算符 | 描述              | 例子  | 结果  |
| ------ | ----------------- | ----- | ----- |
| +      | 加                | x=y+2 | x=7   |
| -      | 减                | x=y-2 | x=3   |
| *      | 乘                | x=y*2 | x=10  |
| /      | 除                | x=y/2 | x=2.5 |
| %      | 求余数 (保留整数) | x=y%2 | x=1   |
| ++     | 累加              | x=++y | x=6   |
| --     | 递减              | x=--y | x=4   |

| 运算符 | 例子 | 等价于 | 结果 |
| ------ | ---- | ------ | ---- |
| =      | x=y  |        | x=5  |
| +=     | x+=y | x=x+y  | x=15 |
| -=     | x-=y | x=x-y  | x=5  |
| *=     | x*=y | x=x*y  | x=50 |
| /=     | x/=y | x=x/y  | x=2  |
| %=     | x%=y | x=x%y  | x=0  |

---

```javascript
x=5+5;
document.write(x);

x="5"+"5";
document.write(x);

x=5+"5";    //数字与字符串想加，自动变成字符串   55
document.write(x);

x="5"+5;
document.write(x);
```



---

## JavaScript比较和逻辑运算符

#### 比较运算符

x = 5

| 运算符 | 描述             | 例子                               |
| ------ | ---------------- | ---------------------------------- |
| ==     | 等于             | x==8 为 false                      |
| ===    | 全等（值和类型） | x===5 为 true；x = = ="5" 为 false |
| !=     | 不等于           | x!=8 为 true                       |
| >      | 大于             | x>8 为 false                       |
| <      | 小于             | x<8 为 true                        |
| >=     | 大于或等于       | x>=8 为 false                      |
| <=     | 小于或等于       | x<=8 为 true                       |

---

#### 逻辑运算符

x = 6, y = 3

| 运算符 | 描述 | 例子                       |
| ------ | ---- | -------------------------- |
| &&     | and  | (x < 10 && y > 1) 为 true  |
| \|\|   | or   | (x= =5 \|\| y==5) 为 false |
| !      | not  | !(x==y) 为 true            |

```javascript
variablename=(condition)?value1:value2 

greeting=(visitor=="PRES")?"Dear President ":"Dear ";
```

​        如果变量 visitor 中的值是 "PRES"，则向变量 greeting 赋值 "Dear President "，否则赋值 "Dear"。

---

## JavaScript循环

#### For/IN循环

for/in循环遍历对象的属性：

```javascript
var person={fname:"john", lname:"doe", age:25};

for(x in person)
{
    txt = txt + person[x];
}
```

---

## Break和Continue

break用于跳出循环

continue用于跳过循环中的一个迭代

#### 标签

````html
<!DOCTYPE html>
<html>
<body>

<script>
cars=["BMW","Volvo","Saab","Ford"];
list:
{
document.write(cars[0] + "<br>"); 
document.write(cars[1] + "<br>"); 
document.write(cars[2] + "<br>"); 
break list;
document.write(cars[3] + "<br>"); 
document.write(cars[4] + "<br>"); 
document.write(cars[5] + "<br>"); 
}
</script>

</body>
</html>

````

​        通过标签引用，break 语句可用于跳出任何 JavaScript 代码块。

---

## JavaScript错误 - Throw、Try、Catch

try 语句测试代码块的错误

catch语句处理错误

throw语句创建自定义错误

---

#### JavaScript测试和捕捉

```JavaScript
try
  {
  //在这里运行代码
  }
catch(err)
  {
  //在这里处理错误
  
```

---

#### Throw语句

throw语句允许我们创建自定义错误。

创建或抛出异常（exception）。

把throw与try和catch一起使用，可以控制程序流，生成自定义的错误消息。

异常可以是 JavaScript 字符串、数字、逻辑值或对象。

---

## JavaScript表单验证

JavaScript可用来在数据被送往服务器前对HTML表单中的输入数据进行验证。

---

#### JavaScript表单验证

被验证的典型表单数据有：

- 用户是否已填写表单中的必填项目
- 用户输入的邮件地址是否合法
- 用户是否已输入合法的日期
- 用户是否在数据域（numeric field）中输入了文本

---

#### 必填（或必选）项目

假如必填或必选项目为空，弹框警告，并且函数返回值为false，否则返回值为true。

```html

<html>
<head>
<script type="text/javascript">

function validate_required(field,alerttxt)
{
with (field)
  {
  if (value==null||value=="")
    {alert(alerttxt);return false}
  else {return true}
  }
}

function validate_form(thisform)
{
with (thisform)
  {
  if (validate_required(email,"Email must be filled out!")==false)
    {email.focus();return false}
  }
}
</script>
</head>

<body>
<form action="submitpage.htm" onsubmit="return validate_form(this)" method="post">
Email: <input type="text" name="email" size="30">
<input type="submit" value="Submit"> 
</form>
</body>

</html>

```



























