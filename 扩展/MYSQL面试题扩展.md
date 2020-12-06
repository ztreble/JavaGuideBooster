- 什么叫聚集函数？都有哪几个？
  运行在行组上，计算和返回单个值的函数
  包括：
  AVG（）返回某列的平均值
  COUNT（）返回某列的行数
  MAX（）返回某列的最大值
  MIN（）返回某列最小值
  SUM（）返回某列之和
- count的两种用法了解吗？
  count(*)用于统计所有行数
  count(column)对于特定列中不为null的值进行统计
- 过滤的方法有几个？有什么不同？
  where：where指定过滤行而非分组
  having：having用于过滤分组
  on：用于连接时确定查询条件
- 说一下GROUP BY和ORDER BY的区别？
  ORDER BY给出的是排序的输出，GROUP BY则是分组后的输出（不一定排好！）
- 如何使得UNION不过滤掉重复的行？
  使用UNION ALL
- 如何进行全文本搜索？
  首先使用FULLTEXT标记索引列，之后使用Match()和Against()进行匹配
- 说一下全文本搜索是如何进行排序的？
  全文本索引使用Match()和Against()维护一个rank值，这个值由搜索到的字符频率和重要度划分，决定了全文本搜索的排序。
- 更新sql发生错误，但是仍然继续更新的关键字是什么?
  Ignore
- 如何在一次查询中将两个字段组合到一起？
  使用concat
- 视图了解吗？说一下如何创建视图
  CREATE VIEW viewname AS
- 视图可以被更新吗？
  视情况而定。在使用了分组，连结，并，子查询等条件下，视图不会被更新。
- 了解存储过程吗？存储过程如何定义？如何调用？如何删除？
  创建：
  CREATE PROCEDURE procedure_name(参数列表)
  BEGIN
    PROCESS
  END;
  调用：
  call procedure_name;
  删除：
  drop procedure_name;
- 了解游标吗？
  用于存储过程的
- 触发器名字如何规范？
  sql要求每一个表中有唯一的触发器名字，但是为了规范和可复用，建议每个数据库一个触发器名
- 如何在事务中设置保留点？
  使用SAVEPOINT
  