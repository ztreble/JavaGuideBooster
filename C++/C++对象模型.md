- 封装对象之后，C++的布局成本增加了多少？
没有增加。
对于每一个non-inline member function,只会诞生一个函数实例，对于拥有零个或者一个定义的inline function则会在其每一个使用者上产生一个函数实例。
在布局上的主要成本是由virtual带来的，包括：
virtual function机制，用于支持“执行期绑定”和virtual base class机制，用于实现多次出现在继承中的base class，有一个单一而被共享的实例。
- 对象模型有哪些？
简单对象模型：members全部由slot中的指针指向
表格驱动对象模型：有两个指针指向两个表格，第一个表格是data member table，第二个表格是member function table。函数表格内含函数地址。
C++对象模型：
vtbl：每个类产生的指向virtual functions的指针，放在称为vtbl的表格之中
vptr：每个class object产生一个指针，指向相关的virtual table
- C++如何支持多继承的？
使用bptr指向一个表格，表格中存放了父类地址
- c++如何实现多态的？
1.隐式的转换操作
2.虚函数
3.经过dynamic_cast和typeid运算符 if(circle *pc = dynamic_cast<circle*>(ps))
- c++子类对于父类的非虚同名函数，如何处理？
子类将会隐藏父类的同名函数，因此用户无法通过子类调用父类同名函数；同时，在原来的位置上，子类使bptr指向自己的函数，此时通过该实例调用函数会调用子类自己的函数；如果进行对父类的强制类型转换，会将子类裁剪并且暴露父类。

