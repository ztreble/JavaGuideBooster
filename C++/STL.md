1. 什么时候使用insert？什么时候使用operator[]？
对于关联容器，在插入时使用insert将会比使用operator[]效率更高；在更新时则相反。
2. 比较一下vector和set
vector在结尾插入效率很高，set适合于去重和查找。
3. 只有符合设置，查找，重组的时候才考虑用排序的vector代替关联容器
4. 