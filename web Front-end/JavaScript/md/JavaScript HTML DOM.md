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

---

## HTML DOM Style对象

```JavaScript
document.getElementById("id").style.property="值"
```

#### Style对象的属性

- 背景
- 边框和边距
- 布局
- 列表
- 杂项
- 定位
- 打印
- 滚动条
- 表格
- 文本
- 规范

---

#### Background属性

| 属性                                                         | 描述                              |
| ------------------------------------------------------------ | --------------------------------- |
| [background](http://www.w3school.com.cn/jsref/prop_style_background.asp) | 在一行中设置所有的背景属性        |
| [backgroundAttachment](http://www.w3school.com.cn/jsref/prop_style_backgroundattachment.asp) | 设置背景图像是否固定或随页面滚动  |
| [backgroundColor](http://www.w3school.com.cn/jsref/prop_style_backgroundcolor.asp) | 设置元素的背景颜色                |
| [backgroundImage](http://www.w3school.com.cn/jsref/prop_style_backgroundimage.asp) | 设置元素的背景图像                |
| [backgroundPosition](http://www.w3school.com.cn/jsref/prop_style_backgroundposition.asp) | 设置背景图像的起始位置            |
| [backgroundPositionX](http://www.w3school.com.cn/jsref/prop_style_backgroundpositionx.asp) | 设置backgroundPosition属性的X坐标 |
| [backgroundPositionY](http://www.w3school.com.cn/jsref/prop_style_backgroundpositiony.asp) | 设置backgroundPosition属性的Y坐标 |
| [backgroundRepeat](http://www.w3school.com.cn/jsref/prop_style_backgroundrepeat.asp) | 设置是否及如何重复背景图像        |

---

#### Border和Margin属性

| 属性                                                         | 描述                                    |
| ------------------------------------------------------------ | --------------------------------------- |
| [border](http://www.w3school.com.cn/jsref/prop_style_border.asp) | 在一行设置四个边框的所有属性            |
| [borderBottom](http://www.w3school.com.cn/jsref/prop_style_borderbottom.asp) | 在一行设置底边框的所有属性              |
| [borderBottomColor](http://www.w3school.com.cn/jsref/prop_style_borderbottomcolor.asp) | 设置底边框的颜色                        |
| [borderBottomStyle](http://www.w3school.com.cn/jsref/prop_style_borderbottomstyle.asp) | 设置底边框的样式                        |
| [borderBottomWidth](http://www.w3school.com.cn/jsref/prop_style_borderbottomwidth.asp) | 设置底边框的宽度                        |
| [borderColor](http://www.w3school.com.cn/jsref/prop_style_bordercolor.asp) | 设置所有四个边框的颜色 (可设置四种颜色) |
| [borderLeft](http://www.w3school.com.cn/jsref/prop_style_borderleft.asp) | 在一行设置左边框的所有属性              |
| [borderLeftColor](http://www.w3school.com.cn/jsref/prop_style_borderleftcolor.asp) | 设置左边框的颜色                        |
| [borderLeftStyle](http://www.w3school.com.cn/jsref/prop_style_borderleftstyle.asp) | 设置左边框的样式                        |
| [borderLeftWidth](http://www.w3school.com.cn/jsref/prop_style_borderleftwidth.asp) | 设置左边框的宽度                        |
| [borderRight](http://www.w3school.com.cn/jsref/prop_style_borderright.asp) | 在一行设置右边框的所有属性              |
| [borderRightColor](http://www.w3school.com.cn/jsref/prop_style_borderrightcolor.asp) | 设置右边框的颜色                        |
| [borderRightStyle](http://www.w3school.com.cn/jsref/prop_style_borderrightstyle.asp) | 设置右边框的样式                        |
| [borderRightWidth](http://www.w3school.com.cn/jsref/prop_style_borderrightwidth.asp) | 设置右边框的宽度                        |
| [borderStyle](http://www.w3school.com.cn/jsref/prop_style_borderstyle.asp) | 设置所有四个边框的样式 (可设置四种样式) |
| [borderTop](http://www.w3school.com.cn/jsref/prop_style_bordertop.asp) | 在一行设置顶边框的所有属性              |
| [borderTopColor](http://www.w3school.com.cn/jsref/prop_style_bordertopcolor.asp) | 设置顶边框的颜色                        |
| [borderTopStyle](http://www.w3school.com.cn/jsref/prop_style_bordertopstyle.asp) | 设置顶边框的样式                        |
| [borderTopWidth](http://www.w3school.com.cn/jsref/prop_style_bordertopwidth.asp) | 设置顶边框的宽度                        |
| [borderWidth](http://www.w3school.com.cn/jsref/prop_style_borderwidth.asp) | 设置所有四条边框的宽度 (可设置四种宽度) |
| [margin](http://www.w3school.com.cn/jsref/prop_style_margin.asp) | 设置元素的边距 (可设置四个值)           |
| [marginBottom](http://www.w3school.com.cn/jsref/prop_style_marginbottom.asp) | 设置元素的底边距                        |
| [marginLeft](http://www.w3school.com.cn/jsref/prop_style_marginleft.asp) | 设置元素的左边距                        |
| [marginRight](http://www.w3school.com.cn/jsref/prop_style_marginright.asp) | 设置元素的右边据                        |
| [marginTop](http://www.w3school.com.cn/jsref/prop_style_margintop.asp) | 设置元素的顶边距                        |
| [outline](http://www.w3school.com.cn/jsref/prop_style_outline.asp) | 在一行设置所有的outline属性             |
| [outlineColor](http://www.w3school.com.cn/jsref/prop_style_outlinecolor.asp) | 设置围绕元素的轮廓颜色                  |
| [outlineStyle](http://www.w3school.com.cn/jsref/prop_style_outlinestyle.asp) | 设置围绕元素的轮廓样式                  |
| [outlineWidth](http://www.w3school.com.cn/jsref/prop_style_outlinewidth.asp) | 设置围绕元素的轮廓宽度                  |
| [padding](http://www.w3school.com.cn/jsref/prop_style_padding.asp) | 设置元素的填充 (可设置四个值)           |
| [paddingBottom](http://www.w3school.com.cn/jsref/prop_style_paddingbottom.asp) | 设置元素的下填充                        |
| [paddingLeft](http://www.w3school.com.cn/jsref/prop_style_paddingleft.asp) | 设置元素的左填充                        |
| [paddingRight](http://www.w3school.com.cn/jsref/prop_style_paddingright.asp) | 设置元素的右填充                        |
| [paddingTop](http://www.w3school.com.cn/jsref/prop_style_paddingtop.asp) | 设置元素的顶填充                        |

---

#### Layout属性

| 属性                                                         | 描述                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [clear](http://www.w3school.com.cn/jsref/prop_style_clear.asp) | 设置在元素的哪边不允许其他的浮动元素                         |
| [clip](http://www.w3school.com.cn/jsref/prop_style_clip.asp) | 设置元素的形状                                               |
| [content](http://www.w3school.com.cn/jsref/prop_style_content.asp) | 设置元信息                                                   |
| counterIncrement                                             | 设置其后是正数的计数器名称的列表。其中整数指示每当元素出现时计数器的增量。默认是1。 |
| counterReset                                                 | 设置其后是正数的计数器名称的列表。其中整数指示每当元素出现时计数器被设置的值。默认是0。 |
| [cssFloat](http://www.w3school.com.cn/jsref/prop_style_cssfloat.asp) | 设置图像或文本将出现（浮动）在另一元素中的何处。             |
| [cursor](http://www.w3school.com.cn/jsref/prop_style_cursor.asp) | 设置显示的指针类型                                           |
| [direction](http://www.w3school.com.cn/jsref/prop_style_direction.asp) | 设置元素的文本方向                                           |
| [display](http://www.w3school.com.cn/jsref/prop_style_display.asp) | 设置元素如何被显示                                           |
| [height](http://www.w3school.com.cn/jsref/prop_style_height.asp) | 设置元素的高度                                               |
| markerOffset                                                 | 设置marker box的principal box距离其最近的边框边缘的距离      |
| marks                                                        | 设置是否cross marks或crop marks应仅仅被呈现于page box边缘之外 |
| [maxHeight](http://www.w3school.com.cn/jsref/prop_style_maxheight.asp) | 设置元素的最大高度                                           |
| [maxWidth](http://www.w3school.com.cn/jsref/prop_style_maxwidth.asp) | 设置元素的最大宽度                                           |
| [minHeight](http://www.w3school.com.cn/jsref/prop_style_minheight.asp) | 设置元素的最小高度                                           |
| [minWidth](http://www.w3school.com.cn/jsref/prop_style_minwidth.asp) | 设置元素的最小宽度                                           |
| [overflow](http://www.w3school.com.cn/jsref/prop_style_overflow.asp) | 规定如何处理不适合元素盒的内容                               |
| [verticalAlign](http://www.w3school.com.cn/jsref/prop_style_verticalalign.asp) | 设置对元素中的内容进行垂直排列                               |
| [visibility](http://www.w3school.com.cn/jsref/prop_style_visibility.asp) | 设置元素是否可见                                             |
| [width](http://www.w3school.com.cn/jsref/prop_style_width.asp) | 设置元素的宽度                                               |

---

#### List属性

| 属性                                                         | 描述                     |
| ------------------------------------------------------------ | ------------------------ |
| [listStyle](http://www.w3school.com.cn/jsref/prop_style_liststyle.asp) | 在一行设置列表的所有属性 |
| [listStyleImage](http://www.w3school.com.cn/jsref/prop_style_liststyleimage.asp) | 把图像设置为列表项标记   |
| [listStylePosition](http://www.w3school.com.cn/jsref/prop_style_liststyleposition.asp) | 改变列表项标记的位置     |
| [listStyleType](http://www.w3school.com.cn/jsref/prop_style_liststyletype.asp) | 设置列表项标记的类型     |

---

#### Positioning属性

| 属性                                                         | 描述                                                   |
| ------------------------------------------------------------ | ------------------------------------------------------ |
| [bottom](http://www.w3school.com.cn/jsref/prop_style_bottom.asp) | 设置元素的底边缘距离父元素底边缘的之上或之下的距离     |
| [left](http://www.w3school.com.cn/jsref/prop_style_left.asp) | 置元素的左边缘距离父元素左边缘的左边或右边的距离       |
| [position](http://www.w3school.com.cn/jsref/prop_style_position.asp) | 把元素放置在static, relative, absolute 或 fixed 的位置 |
| [right](http://www.w3school.com.cn/jsref/prop_style_right.asp) | 置元素的右边缘距离父元素右边缘的左边或右边的距离       |
| [top](http://www.w3school.com.cn/jsref/prop_style_top.asp)   | 设置元素的顶边缘距离父元素顶边缘的之上或之下的距离     |
| [zIndex](http://www.w3school.com.cn/jsref/prop_style_zindex.asp) | 设置元素的堆叠次序                                     |

---

#### Scrollbar属性（IE-only）

| 属性                                                         | 描述                                               |
| ------------------------------------------------------------ | -------------------------------------------------- |
| [scrollbar3dLightColor](http://www.w3school.com.cn/jsref/prop_style_scrollbar3dlightcolor.asp) | 设置箭头和滚动条左侧和顶边的颜色                   |
| [scrollbarArrowColor](http://www.w3school.com.cn/jsref/prop_style_scrollbararrowcolor.asp) | 设置滚动条上的箭头颜色                             |
| [scrollbarBaseColor](http://www.w3school.com.cn/jsref/prop_style_scrollbarbasecolor.asp) | 设置滚动条的底色                                   |
| [scrollbarDarkShadowColor](http://www.w3school.com.cn/jsref/prop_style_scrollbardarkshadowcolor.asp) | 设置箭头和滚动条右侧和底边的颜色                   |
| [scrollbarFaceColor](http://www.w3school.com.cn/jsref/prop_style_scrollbarfacecolor.asp) | 设置滚动条的表色                                   |
| [scrollbarHighlightColor](http://www.w3school.com.cn/jsref/prop_style_scrollbarhighlightcolor.asp) | 设置箭头和滚动条左侧和顶边的颜色，以及滚动条的背景 |
| [scrollbarShadowColor](http://www.w3school.com.cn/jsref/prop_style_scrollbarshadowcolor.asp) | 设置箭头和滚动条右侧和底边的颜色                   |
| [scrollbarTrackColor](http://www.w3school.com.cn/jsref/prop_style_scrollbartrackcolor.asp) | 设置滚动条的背景色                                 |

---

#### Table属性

| 属性                                                         | 描述                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [borderCollapse](http://www.w3school.com.cn/jsref/prop_style_bordercollapse.asp) | 设置表格边框是否合并为单边框，或者像在标准的HTML中那样分离。 |
| [borderSpacing](http://www.w3school.com.cn/jsref/prop_style_borderspacing.asp) | 设置分隔单元格边框的距离                                     |
| [captionSide](http://www.w3school.com.cn/jsref/prop_style_captionside.asp) | 设置表格标题的位置                                           |
| [emptyCells](http://www.w3school.com.cn/jsref/prop_style_emptycells.asp) | 设置是否显示表格中的空单元格                                 |
| [tableLayout](http://www.w3school.com.cn/jsref/prop_style_tablelayout.asp) | 设置用来显示表格单元格、行以及列的算法                       |

---

#### Text属性

| 属性                                                         | 描述                             |
| ------------------------------------------------------------ | -------------------------------- |
| [color](http://www.w3school.com.cn/jsref/prop_style_color.asp) | 设置文本的颜色                   |
| [font](http://www.w3school.com.cn/jsref/prop_style_font.asp) | 在一行设置所有的字体属性         |
| [fontFamily](http://www.w3school.com.cn/jsref/prop_style_fontfamily.asp) | 设置元素的字体系列。             |
| [fontSize](http://www.w3school.com.cn/jsref/prop_style_fontsize.asp) | 设置元素的字体大小。             |
| [fontSizeAdjust](http://www.w3school.com.cn/jsref/prop_style_fontsizeadjust.asp) | 设置/调整文本的尺寸              |
| [fontStretch](http://www.w3school.com.cn/jsref/prop_style_fontstretch.asp) | 设置如何紧缩或伸展字体           |
| [fontStyle](http://www.w3school.com.cn/jsref/prop_style_fontstyle.asp) | 设置元素的字体样式               |
| [fontVariant](http://www.w3school.com.cn/jsref/prop_style_fontvariant.asp) | 用小型大写字母字体来显示文本     |
| [fontWeight](http://www.w3school.com.cn/jsref/prop_style_fontweight.asp) | 设置字体的粗细                   |
| [letterSpacing](http://www.w3school.com.cn/jsref/prop_style_letterspacing.asp) | 设置字符间距                     |
| [lineHeight](http://www.w3school.com.cn/jsref/prop_style_lineheight.asp) | 设置行间距                       |
| [quotes](http://www.w3school.com.cn/jsref/prop_style_quotes.asp) | 设置在文本中使用哪种引号         |
| [textAlign](http://www.w3school.com.cn/jsref/prop_style_textalign.asp) | 排列文本                         |
| [textDecoration](http://www.w3school.com.cn/jsref/prop_style_textdecoration.asp) | 设置文本的修饰                   |
| [textIndent](http://www.w3school.com.cn/jsref/prop_style_textindent.asp) | 缩紧首行的文本                   |
| textShadow                                                   | 设置文本的阴影效果               |
| [textTransform](http://www.w3school.com.cn/jsref/prop_style_texttransform.asp) | 对文本设置大写效果               |
| unicodeBidi                                                  |                                  |
| [whiteSpace](http://www.w3school.com.cn/jsref/prop_style_whitespace.asp) | 设置如何设置文本中的折行和空白符 |
| [wordSpacing](http://www.w3school.com.cn/jsref/prop_style_wordspacing.asp) | 设置文本中的词间距               |

---

#### 标准属性

| 属性                                                     | 描述                         |
| -------------------------------------------------------- | ---------------------------- |
| [dir](http://www.w3school.com.cn/jsref/prop_dir.asp)     | 设置或返回文本的方向         |
| [lang](http://www.w3school.com.cn/jsref/prop_lang.asp)   | 设置或返回元素的语言代码     |
| [title](http://www.w3school.com.cn/jsref/prop_title.asp) | 设置或返回元素的咨询性的标题 |

---

## JavaScript HTML DOM事件

---

**HTML DOM使JavaScript有能力对HTML事件作出反应。**

---

#### HTML事件的例子

- 当用户点击鼠标时
- 当网页已加载时
- 当图像已加载时
- 当鼠标移动到元素上时
- 当输入字段被改变时
- 当提交HTML表单时
- 当用户触发按键时

```html
<!DOCTYPE html>
<html>
<body>

<h1 onclick="this.innerHTML='谢谢!'">请点击该文本</h1>

</body>
</html>
```

---

#### 使用HTML DOM来分配事件

```javascript
//向button元素分配onclick事件：
<script>
document.getElementById("myBtn").onclick=function(){displayDate()};
</script>
```

---

#### onload和onunload事件

onload和onunload事件会在用户进入或离开页面时被触发。

onload事件可用于检测访问者的浏览器类型和浏览器版本，并基于这些信息来加载网页的正确版本。

onload和onunload事件可以处理cookie。

```JavaScript
<body onload="checkCookies()">
```

---

#### onchange事件

onchange事件常结合对输入字段的验证来使用。

```javascript
<input type="text" id="fname" onchange="upperCase()">
```

---

#### onmouseover和onmouseout事件

onmoouseover和onmouseout事件可用于在用户的鼠标移至HTML元素上方或移出元素时触发函数。

---

## HTML DOM Event对象

**Event对象**

Event对象代表事件的状态，比如事件在其中发生的元素、键盘按键的状态、鼠标的位置、鼠标按钮的状态。

事件通常与函数结合使用，函数不会在事件发生前被执行！

---

#### 事件句柄（Event Handlers）

HTML 4.0 的新特性之一是能够使 HTML 事件触发浏览器中的行为，比如当用户点击某个 HTML 元素时启动一段 JavaScript。下面是一个属性列表，可将之插入 HTML 标签以定义事件的行为。

| 属性                                                         | 此事件发生在何时...                  |
| ------------------------------------------------------------ | ------------------------------------ |
| [onabort](http://www.w3school.com.cn/jsref/event_onabort.asp) | 图像的加载被中断。                   |
| [onblur](http://www.w3school.com.cn/jsref/event_onblur.asp)  | 元素失去焦点。                       |
| [onchange](http://www.w3school.com.cn/jsref/event_onchange.asp) | 域的内容被改变。                     |
| [onclick](http://www.w3school.com.cn/jsref/event_onclick.asp) | 当用户点击某个对象时调用的事件句柄。 |
| [ondblclick](http://www.w3school.com.cn/jsref/event_ondblclick.asp) | 当用户双击某个对象时调用的事件句柄。 |
| [onerror](http://www.w3school.com.cn/jsref/event_onerror.asp) | 在加载文档或图像时发生错误。         |
| [onfocus](http://www.w3school.com.cn/jsref/event_onfocus.asp) | 元素获得焦点。                       |
| [onkeydown](http://www.w3school.com.cn/jsref/event_onkeydown.asp) | 某个键盘按键被按下。                 |
| [onkeypress](http://www.w3school.com.cn/jsref/event_onkeypress.asp) | 某个键盘按键被按下并松开。           |
| [onkeyup](http://www.w3school.com.cn/jsref/event_onkeyup.asp) | 某个键盘按键被松开。                 |
| [onload](http://www.w3school.com.cn/jsref/event_onload.asp)  | 一张页面或一幅图像完成加载。         |
| [onmousedown](http://www.w3school.com.cn/jsref/event_onmousedown.asp) | 鼠标按钮被按下。                     |
| [onmousemove](http://www.w3school.com.cn/jsref/event_onmousemove.asp) | 鼠标被移动。                         |
| [onmouseout](http://www.w3school.com.cn/jsref/event_onmouseout.asp) | 鼠标从某元素移开。                   |
| [onmouseover](http://www.w3school.com.cn/jsref/event_onmouseover.asp) | 鼠标移到某元素之上。                 |
| [onmouseup](http://www.w3school.com.cn/jsref/event_onmouseup.asp) | 鼠标按键被松开。                     |
| [onreset](http://www.w3school.com.cn/jsref/event_onreset.asp) | 重置按钮被点击。                     |
| [onresize](http://www.w3school.com.cn/jsref/event_onresize.asp) | 窗口或框架被重新调整大小。           |
| [onselect](http://www.w3school.com.cn/jsref/event_onselect.asp) | 文本被选中。                         |
| [onsubmit](http://www.w3school.com.cn/jsref/event_onsubmit.asp) | 确认按钮被点击。                     |
| [onunload](http://www.w3school.com.cn/jsref/event_onunload.asp) | 用户退出页面。                       |

---

#### 鼠标、键盘属性

| 属性                                                         | 描述                                         |
| ------------------------------------------------------------ | -------------------------------------------- |
| [altKey](http://www.w3school.com.cn/jsref/event_altkey.asp)  | 返回当事件被触发时，"ALT" 是否被按下。       |
| [button](http://www.w3school.com.cn/jsref/event_button.asp)  | 返回当事件被触发时，哪个鼠标按钮被点击。     |
| [clientX](http://www.w3school.com.cn/jsref/event_clientx.asp) | 返回当事件被触发时，鼠标指针的水平坐标。     |
| [clientY](http://www.w3school.com.cn/jsref/event_clienty.asp) | 返回当事件被触发时，鼠标指针的垂直坐标。     |
| [ctrlKey](http://www.w3school.com.cn/jsref/event_ctrlkey.asp) | 返回当事件被触发时，"CTRL" 键是否被按下。    |
| [metaKey](http://www.w3school.com.cn/jsref/event_metakey.asp) | 返回当事件被触发时，"meta" 键是否被按下。    |
| [relatedTarget](http://www.w3school.com.cn/jsref/event_relatedtarget.asp) | 返回与事件的目标节点相关的节点。             |
| [screenX](http://www.w3school.com.cn/jsref/event_screenx.asp) | 返回当某个事件被触发时，鼠标指针的水平坐标。 |
| [screenY](http://www.w3school.com.cn/jsref/event_screeny.asp) | 返回当某个事件被触发时，鼠标指针的垂直坐标。 |
| [shiftKey](http://www.w3school.com.cn/jsref/event_shiftkey.asp) | 返回当事件被触发时，"SHIFT" 键是否被按下。   |

---

#### IE属性

| 属性            | 描述                                                         |
| --------------- | ------------------------------------------------------------ |
| cancelBubble    | 如果事件句柄想阻止事件传播到包容对象，必须把该属性设为 true。 |
| fromElement     | 对于 mouseover 和 mouseout 事件，fromElement 引用移出鼠标的元素。 |
| keyCode         | 对于 keypress 事件，该属性声明了被敲击的键生成的 Unicode 字符码。对于 keydown 和 keyup 事件，它指定了被敲击的键的虚拟键盘码。虚拟键盘码可能和使用的键盘的布局相关。 |
| offsetX,offsetY | 发生事件的地点在事件源元素的坐标系统中的 x 坐标和 y 坐标。   |
| returnValue     | 如果设置了该属性，它的值比事件句柄的返回值优先级高。把这个属性设置为 fasle，可以取消发生事件的源元素的默认动作。 |
| srcElement      | 对于生成事件的 Window 对象、Document 对象或 Element 对象的引用。 |
| toElement       | 对于 mouseover 和 mouseout 事件，该属性引用移入鼠标的元素。  |
| x,y             | 事件发生的位置的 x 坐标和 y 坐标，它们相对于用CSS动态定位的最内层包容元素。 |

---

#### 标准Event属性

| 属性                                                         | 描述                                           |
| ------------------------------------------------------------ | ---------------------------------------------- |
| [bubbles](http://www.w3school.com.cn/jsref/event_bubbles.asp) | 返回布尔值，指示事件是否是起泡事件类型。       |
| [cancelable](http://www.w3school.com.cn/jsref/event_cancelable.asp) | 返回布尔值，指示事件是否可拥可取消的默认动作。 |
| [currentTarget](http://www.w3school.com.cn/jsref/event_currenttarget.asp) | 返回其事件监听器触发该事件的元素。             |
| [eventPhase](http://www.w3school.com.cn/jsref/event_eventphase.asp) | 返回事件传播的当前阶段。                       |
| [target](http://www.w3school.com.cn/jsref/event_target.asp)  | 返回触发此事件的元素（事件的目标节点）。       |
| [timeStamp](http://www.w3school.com.cn/jsref/event_timestamp.asp) | 返回事件生成的日期和时间。                     |
| [type](http://www.w3school.com.cn/jsref/event_type.asp)      | 返回当前 Event 对象表示的事件的名称。          |



---

#### 标准Event方法

| 方法                                                         | 描述                                     |
| ------------------------------------------------------------ | ---------------------------------------- |
| [initEvent()](http://www.w3school.com.cn/jsref/event_initevent.asp) | 初始化新创建的 Event 对象的属性。        |
| [preventDefault()](http://www.w3school.com.cn/jsref/event_preventdefault.asp) | 通知浏览器不要执行与事件关联的默认动作。 |
| [stopPropagation()](http://www.w3school.com.cn/jsref/event_stoppropagation.asp) | 不再派发事件。                           |

---

## JavaScript HTML DOM元素（节点）

---

**添加和删除节点（HTML元素）**

---

#### 创建新的HTML元素

这段代码创建新的 <p> 元素：

```JavaScript
var para=document.createElement("p");
```

如需向 <p> 元素添加文本，您必须首先创建文本节点。这段代码创建了一个文本节点：

```JavaScript
var node=document.createTextNode("这是新段落。");
```

然后您必须向 <p> 元素追加这个文本节点：

```JavaScript
para.appendChild(node);
```

最后您必须向一个已有的元素追加这个新元素。

这段代码找到一个已有的元素：

```JavaScript
var element=document.getElementById("div1");
```

这段代码向这个已有的元素追加新元素：

```JavaScript
element.appendChild(para);
```

---

#### 删除已有的HTML元素

这个 HTML 文档含有拥有两个子节点（两个 <p> 元素）的 <div> 元素：

```javascript
<div id="div1">
<p id="p1">这是一个段落。</p>
<p id="p2">这是另一个段落。</p>
</div>
```

找到 id="div1" 的元素：

```javascript
var parent=document.getElementById("div1");
```

找到 id="p1" 的 <p> 元素：

```javascript
var child=document.getElementById("p1");
```

从父元素中删除子元素：

```javascript
parent.removeChild(child);
```

提示：如果能够在不引用父元素的情况下删除某个元素，就太好了。

不过很遗憾。DOM 需要清楚您需要删除的元素，以及它的父元素。

这是常用的解决方案：找到您希望删除的子元素，然后使用其 parentNode 属性来找到父元素：

```javascript
var child=document.getElementById("p1");
child.parentNode.removeChild(child);
```

---

























































































