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

#### String对象属性

| 属性                                                         | 描述                       |
| ------------------------------------------------------------ | -------------------------- |
| constructor                                                  | 对创建该对象的函数的引用   |
| [length](http://www.w3school.com.cn/jsref/jsref_length_string.asp) | 字符串的长度               |
| prototype                                                    | 允许您向对象添加属性和方法 |

---

#### String对象方法

| 方法                                                         | 描述                                                 |
| ------------------------------------------------------------ | ---------------------------------------------------- |
| [anchor()](http://www.w3school.com.cn/jsref/jsref_anchor.asp) | 创建 HTML 锚。                                       |
| [big()](http://www.w3school.com.cn/jsref/jsref_big.asp)      | 用大号字体显示字符串。                               |
| [blink()](http://www.w3school.com.cn/jsref/jsref_blink.asp)  | 显示闪动字符串。                                     |
| [bold()](http://www.w3school.com.cn/jsref/jsref_bold.asp)    | 使用粗体显示字符串。                                 |
| [charAt()](http://www.w3school.com.cn/jsref/jsref_charAt.asp) | 返回在指定位置的字符。                               |
| [charCodeAt()](http://www.w3school.com.cn/jsref/jsref_charCodeAt.asp) | 返回在指定的位置的字符的 Unicode 编码。              |
| [concat()](http://www.w3school.com.cn/jsref/jsref_concat_string.asp) | 连接字符串。                                         |
| [fixed()](http://www.w3school.com.cn/jsref/jsref_fixed.asp)  | 以打字机文本显示字符串。                             |
| [fontcolor()](http://www.w3school.com.cn/jsref/jsref_fontcolor.asp) | 使用指定的颜色来显示字符串。                         |
| [fontsize()](http://www.w3school.com.cn/jsref/jsref_fontsize.asp) | 使用指定的尺寸来显示字符串。                         |
| [fromCharCode()](http://www.w3school.com.cn/jsref/jsref_fromCharCode.asp) | 从字符编码创建一个字符串。                           |
| [indexOf()](http://www.w3school.com.cn/jsref/jsref_indexOf.asp) | 检索字符串。                                         |
| [italics()](http://www.w3school.com.cn/jsref/jsref_italics.asp) | 使用斜体显示字符串。                                 |
| [lastIndexOf()](http://www.w3school.com.cn/jsref/jsref_lastIndexOf.asp) | 从后向前搜索字符串。                                 |
| [link()](http://www.w3school.com.cn/jsref/jsref_link.asp)    | 将字符串显示为链接。                                 |
| [localeCompare()](http://www.w3school.com.cn/jsref/jsref_localeCompare.asp) | 用本地特定的顺序来比较两个字符串。                   |
| [match()](http://www.w3school.com.cn/jsref/jsref_match.asp)  | 找到一个或多个正则表达式的匹配。                     |
| [replace()](http://www.w3school.com.cn/jsref/jsref_replace.asp) | 替换与正则表达式匹配的子串。                         |
| [search()](http://www.w3school.com.cn/jsref/jsref_search.asp) | 检索与正则表达式相匹配的值。                         |
| [slice()](http://www.w3school.com.cn/jsref/jsref_slice_string.asp) | 提取字符串的片断，并在新的字符串中返回被提取的部分。 |
| [small()](http://www.w3school.com.cn/jsref/jsref_small.asp)  | 使用小字号来显示字符串。                             |
| [split()](http://www.w3school.com.cn/jsref/jsref_split.asp)  | 把字符串分割为字符串数组。                           |
| [strike()](http://www.w3school.com.cn/jsref/jsref_strike.asp) | 使用删除线来显示字符串。                             |
| [sub()](http://www.w3school.com.cn/jsref/jsref_sub.asp)      | 把字符串显示为下标。                                 |
| [substr()](http://www.w3school.com.cn/jsref/jsref_substr.asp) | 从起始索引号提取字符串中指定数目的字符。             |
| [substring()](http://www.w3school.com.cn/jsref/jsref_substring.asp) | 提取字符串中两个指定的索引号之间的字符。             |
| [sup()](http://www.w3school.com.cn/jsref/jsref_sup.asp)      | 把字符串显示为上标。                                 |
| [toLocaleLowerCase()](http://www.w3school.com.cn/jsref/jsref_toLocaleLowerCase.asp) | 把字符串转换为小写。                                 |
| [toLocaleUpperCase()](http://www.w3school.com.cn/jsref/jsref_toLocaleUpperCase.asp) | 把字符串转换为大写。                                 |
| [toLowerCase()](http://www.w3school.com.cn/jsref/jsref_toLowerCase.asp) | 把字符串转换为小写。                                 |
| [toUpperCase()](http://www.w3school.com.cn/jsref/jsref_toUpperCase.asp) | 把字符串转换为大写。                                 |
| toSource()                                                   | 代表对象的源代码。                                   |
| [toString()](http://www.w3school.com.cn/jsref/jsref_toString_string.asp) | 返回字符串。                                         |
| [valueOf()](http://www.w3school.com.cn/jsref/jsref_valueOf_string.asp) | 返回某个字符串对象的原始值。                         |

---

## JavaScript Date（日期）对象

## JavaScript RegExp对象

RegExp对象用于规定在文本中检索的内容。

---

#### 定义RegExp

通过new关键词来定义RegExp对象。

````javascript
var patt1 = new RegExp("e");
````















