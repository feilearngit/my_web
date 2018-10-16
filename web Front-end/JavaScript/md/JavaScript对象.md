# JS对象

## JavaScript对象

---

**JavaScript中所有事物都是对象：字符串、数值、数组、函数**

**此外，JavaScript允许自定义对象。**

---

#### JavaScript对象

JavaScript提供多个内建对象，如String、Date、Array等等。

对象只是带有属性和方法的特殊数据类型。

---

#### 访问对象的属性

```javascript
var message = "Hello World!";
var x = message.length;
```

```javascript
var message="Hello world!";
var x=message.toUpperCase();
```

---

#### 创建JavaScript对象

1. 定义并创建对象的实例
2. 使用函数来定义对象，然后创建新的对象实例

```javascript
person=new Object();
person.firstname="Bill";
person.lastname="Gates";
person.age=56;
preson.eyecolor="blue";

person={firstname:"John",lastname:"Doe",age:50,eyecolor:"blue"};
```

```javascript
function person(firstname,lastname,age,eyecolor)
{
this.firstname=firstname;
this.lastname=lastname;
this.age=age;
this.eyecolor=eyecolor;
}
```

----

#### JavaScript类

JavaScript 是面向对象的语言，但 JavaScript 不使用类。

在 JavaScript 中，不会创建类，也不会通过类来创建对象（就像在其他面向对象的语言中那样）。

JavaScript 基于 ==prototype==，而不是基于类的。

---

## JavaScript Number对象

JavaScript只有一种数字类型，可以使用也可以不使用小数点来书写数字。

---

```javascript
var y=123e5;    // 12300000
var z=123e-5;   // 0.00123
```

#### 所有JavaScript数字均为64位

JavaScript 不是类型语言。与许多其他编程语言不同，JavaScript 不定义不同类型的数字，比如整数、短、长、浮点等等。

JavaScript 中的所有数字都存储为根为 10 的 64 位（8 比特），浮点数。

---

####  精度

整数（不使用小数点或指数计数法）最多为 15 位。

小数的最大位数是 17，但是浮点运算并不总是 100% 准确：

```JavaScript
var x=0.2+0.1;   //0.2 + 0.1 = 0.30000000000000004
```

---

#### 八进制和十六进制

​        如果前缀为 0，则 JavaScript 会把数值常量解释为八进制数，如果前缀为 0 和 "x"，则解释为十六进制数。

```javascript
var y=0377;
var z=0xFF;
```

==提示：==        绝不要在数字前面写零，除非您需要进行八进制转换。

---

#### 数字属性和方法

**属性**

- MAX VALUE
- MIN VALUE
- NEGATIVE INFINITIVE
- POSITIVE INFINITIVE
- NaN
- prototype
- constructor

**方法**

- toExponential()
- toFixed()
- toPrecision()
- toString()
- valueOf()

---

## JavaScript字符串对象

























