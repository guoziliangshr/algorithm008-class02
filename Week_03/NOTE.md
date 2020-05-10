## 递归

盗梦空间

> * 向下进入到不同梦境中；向上又回到原来一层
> * 通过声音同步到上一层
> * 每一层的环境和周围的人都是一份拷贝，主角等人穿越不同层级的梦境(发生和携带变化)

Java代码模板

```java
public void recur(int level, int param) {
    
    // recursion terminator 递归终结条件
    if (level > MAX_LEVEL) {
        // process result
        return;
    }
    
    // process logic in current level 处理当前层逻辑
    process(level, param);
    
    // drill down 下探到下一层
    recur(level: level + 1; newParam);
    
    // reverse the current level status if needed 清理当前层
}
```

思维要点

1. 不要人肉进行递归(最大误区)
2. 找到最近最简方法，将其拆解成可重复解决的问题(重复子问题)
3. 数学归纳法思维

## 分治

代码模板

```java
public void divide_conquer(problem, param1, param2, ...) {
    // recursion terminator
    if (problem == null) {
        print_result();
        return;
    }
    // prepare data
    data = prepare_data(proble);
    subproblems = split_problem(problem, data);
    // conquer subproblems
    subresult1 = divide_conquer(subproblems[0], p1, ...);
    subresult2 = divide_conquer(subproblems[1], p1, ...);
    subresult3 = divide_conquer(subproblems[2], p1, ...);
    // process and generate the final result
    result = process_result(subresult1, subresult2, subresult3, ...);
    // revert the current level states
}
```

