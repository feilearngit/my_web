# JavaScript HTML DOM

---

**通过HTML DOM，可访问JavaScript HTML文档的所有元素。**

---

#### HTML DOM 树

![HTML DOM 树](../../material/ct_htmltree.gif)



通过可编程的对象模型，JavaScript获得了足够的能力来创建动态的HTML。

- JavaScript能够改变页面中的所有HTML元素
- JavaScript能够改变页面中的所有HTML属性
- JavaScript能够改变页面中的所有CSS样式
- JavaScript能够对页面中所有的事件作出反应

---

## 查找HTML元素

- 通过id找到HTML元素
- 通过标签名找到HTML元素
- 通过类名找到HTML元素

---

#### 通过id查找HTML元素

```JavaScript
var x=document.getElementById("intro");
```

---

#### 通过标签名找到HTML元素

```JavaScript
var x=document.getElementById("main");
var y=x.getElementsByTagName("p");
```

---

<u>==通过类名查找HTML元素在IE5,6,7,8中无效==</u>

---

## JavaScript HTML DOM - 改变HTML

#### 改变HTML输出流











































































































