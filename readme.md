WHU计算机学院C++大作业
# How to use Window Manage System?

输入指令`insert`/`remove`/`resize`/`quit`根据进一步提示输入窗口坐标
Input order insert/remove/resize/quit according to prompt further input window coordinates

### insert:
	输入`top`, `left`, `bottom`, `right`和z轴大小`z_order`(注意⚠️：bottom大于top，right大于left,目前上限设置的是20)
	Input the `top`, `bottom`, `left`, `right` and z axis size `z_order` (note ⚠️ ️ : `bottom` is greater than the `top`, `right` is greater than `left`, the upper is 20 for now)
	输入组成窗口的字符（如 % ^ * $）
	Input character of window (e.g., % ^ * $)
![insert](https://github.com/Chuhan1112/Window-Manage-System/raw/master/imgfiles/2018-12-26_9.19.17.png)
![insert(重叠)](https://github.com/Chuhan1112/Window-Manage-System/raw/master/imgfiles/2018-12-26_9.20.19.png)

### remove:
	输入窗口方位top, left, bottom, right和z轴大小z_order
	Input the `top`, `bottom`, `left`, `right` and z axis size `z_order`
	输入该窗口的字符
	Input character of window
![remove](https://github.com/Chuhan1112/Window-Manage-System/raw/master/imgfiles/2018-12-26_9.21.35.png)
### resize：
	输入原来窗口的方位（top, left, bottom, right)和z_order
	Input the `top`, `bottom`, `left`, `right` and z axis size `z_order`
	输入该窗口的字符
	Input character of window
	输入调整后窗口的方位（新的top,left,bottom,right)
	Input the orientation of the adjusted window (new top,left,bottom,right)
![resize](https://github.com/Chuhan1112/Window-Manage-System/raw/master/imgfiles/2018-12-26_9.21.05.png)
### quit：
	输入`quit`，退出程序
	Input `quit` to quit the program
