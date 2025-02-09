# chibicc_with_history: 记录学习chibicc的代码、笔记...

## 编译测试环境
	win10 vs2022 连接linux虚拟机开发
	VMware Workstation 17 Player + Centos7 + gcc + cmake



# chibicc README.md 翻译

[chibicc README.md 原文件](https://github.com/rui314/chibicc/blob/main/README.md)

# chibicc: 一个小型C编译器

（旧的主版本已经移动到
[历史/旧](https://github.com/rui314/chibicc/tree/historical/old)
分支。这是2020年9月上传的新版本。）

chibicc 是另一个小型的C编译器，实现了大部分C11特性。
尽管它可能仍然属于“玩具编译器”类别，就像其他小型编译器一样，
chibicc 能够编译包括 [Git](https://git-scm.com/),
[SQLite](https://sqlite.org),
[libpng](http://www.libpng.org/pub/png/libpng.html) 和 chibicc
本身在内的几个真实世界的程序，而无需对编译的程序进行修改。
这些程序生成的可执行文件通过了它们相应的测试套件。
所以，chibicc 实际上支持了广泛的C11特性，
并能够正确编译成千上万行的真实世界C代码。

chibicc 是我目前正在编写的关于C编译器和低级编程的书籍的参考实现。
该书以增量方式覆盖了广泛的主题；在第一章中，
读者将实现一个“编译器”，它只接受单个数字作为“语言”，
然后在书的每个部分中逐一增加一个特性，直到编译器接受的语言与C11规范所指定的语言匹配。
我从 [the paper](http://scheme2006.cs.uchicago.edu/11-ghuloum.pdf) by Abdulaziz Ghuloum 中获得了这种增量方法。

这个项目的每次提交都对应书中的一个章节。
为了这个目的，不仅是项目的最终状态，每次提交都经过精心编写，以便易于阅读。
读者应该能够仅通过阅读这个项目的一次或几次提交来了解如何实现一个C语言特性。
例如，这就是如何实现
[while](https://github.com/rui314/chibicc/commit/773115ab2a9c4b96f804311b95b20e9771f0190a),
[[]](https://github.com/rui314/chibicc/commit/75fbd3dd6efde12eac8225d8b5723093836170a5),
[?:](https://github.com/rui314/chibicc/commit/1d0e942fd567a35d296d0f10b7693e98b3dd037c),
和 [thread-local
variable](https://github.com/rui314/chibicc/commit/79644e54cc1805e54428cde68b20d6d493b76d34)
的方式。如果你有大量空闲时间，从 [first
commit](https://github.com/rui314/chibicc/commit/0522e2d77e3ab82d3b80a5be8dbbdc8d4180561c) 开始阅读可能会很有趣。

如果你喜欢这个项目，请考虑在书籍出版时购买一本！😀 我在这里发布源代码，是为了让人们提前访问它，因为我计划在出版书后以宽松的开源许可证发布它。如果我不为源代码收费，对我来说把它保密没有多大意义。我希望在2021年出版这本书。
你可以在 [here](https://forms.gle/sgrMWHGeGjeeEJcX7) 注册，以便在免费章节在线或书籍出版时收到通知。

我把 chibicc 发音为 _chee bee cee cee_。"chibi" 在日语中意味着 "迷你" 或 "小"。"cc" 代表C编译器。

## 状态



chibicc 几乎支持了所有C11的必要特性和大多数可选特性，以及一些GCC语言扩展。

通常在小型编译器中缺失但chibicc支持的特性包括（但不限于）：

- 预处理器
- float, double 和 long double (x87 80位浮点数)
- 位域
- alloca()
- 可变长度数组
- 复合字面量
- 线程局部变量
- 原子变量
- 公共符号
- 指定初始化器
- L, u, U 和 u8 字符串字面量
- 如x86-64 SystemV ABI规定的，接受或返回结构体值的函数

chibicc 不支持复数、K&R风格的函数原型和GCC风格的内联汇编。故意省略了Digraphs和trigraphs。

chibicc 在源代码中找到错误时会输出简单但漂亮的错误消息。

没有优化过程。chibicc 发出的代码可能比GCC的输出慢两倍或更多。一旦前端完成，我计划增加一个优化过程。

我使用Ubuntu 20.04 for x86-64作为开发平台。我做了一些小改动，以便chibicc可以在Ubuntu 18.04, Fedora 32和Gentoo 2.6上工作，但目前可移植性不是我的目标。它可能在Ubuntu 20.04以外的系统上工作，也可能不工作。

## 内部原理

chibicc 包括以下阶段：

- 词法分析：词法分析器将字符串作为输入，将其拆分成一个令牌列表并返回。

- 预处理：预处理器接受令牌列表作为输入，并输出一个新的宏展开后的令牌列表。它在展开宏的同时解释预处理指令。

- 解析：递归下降解析器从预处理器的输出中构建抽象语法树。它还为每个AST节点添加了类型。

- 代码生成：代码生成器为给定的AST节点发出汇编文本。

## 贡献

当我在这个编译器中发现一个错误时，我会回到引入该错误的原始提交，并重写提交历史，好像从一开始就没有这样的错误一样。这是修复错误的一种不寻常的方式，但作为一本书的一部分，保持每个提交无错误是很重要的。

因此，我不接受这个仓库的拉取请求。如果你发现一个错误，你可以向我发送拉取请求，但很可能我会阅读你的补丁，然后通过重写历史将其应用到我之前的提交上。我会在某个地方记下你的名字，但你的更改将在提交到这个仓库之前被我重写。

另外，请假设我会不时地将我的本地仓库强制推送到这个公共仓库以重写历史。如果你克隆了这个项目并在其上进行了本地提交，当我强制推送新提交时，你的更改将不得不手动进行变基。

## 设计原则

chibicc 的核心价值是其简单性和源代码的可读性。为了实现这个目标，我在编写代码时小心不要太聪明。让我解释这意味着什么。

通常，当你习惯了代码库时，你会被诱惑去使用更多的抽象和聪明的技巧来 _改进_ 代码。但是这种类型的 _改进_ 并不总是提高初次读者的可读性，实际上可能会损害它。我尽可能

地避免了这个陷阱。我写这些代码不是为了我自己，而是为了初次读者。

如果你看一下源代码，你会发现一些看起来很愚蠢的代码。这些是有意这样写的（但在某些地方我可能确实遗漏了一些东西）。以下是一些值得注意的例子：

- 递归下降解析器包含许多看起来相似的函数，用于相似的生成语法规则。你可能会被诱惑去使用高阶函数或宏来 _改进_ 它，以减少重复，但我认为那太复杂了。允许小的重复更好。

- chibicc 不会过于努力地节省内存。例如，在词法分析器开始之前，整个输入源文件首先被读入内存。

- 如果我们知道n不是太大，慢速算法就可以。例如，我们在预处理器中使用链表作为集合，所以成员检查需要O(n)时间，其中n是集合的大小。但这没关系，因为我们知道n通常很小。即使n可以很大，我也会坚持使用简单的慢速算法，直到基准测试证明那是一个瓶颈。

- 每个AST节点类型只使用了 `Node` 结构的几个成员。其他未使用的 `Node` 成员在运行时只是浪费内存。我们可以使用联合来节省内存，但我决定简单地把所有东西都放在同一个结构体中。我相信这种低效是可以忽略的。即使它有影响，我们也可以随时更改代码以使用联合。我想避免过早优化。

- chibicc 总是使用 `calloc` 分配堆内存，这是一个 `malloc` 的变体，它用零清除内存。`calloc` 比 `malloc` 稍慢，但应该是可以忽略的。

- 最后但同样重要的是，chibicc 使用 `calloc` 分配内存，但从不调用 `free`。分配的堆内存在进程退出之前不会被释放。我确信，这种内存管理政策（或者说是缺乏政策）看起来非常奇怪，但对于编译器这样的短暂程序来说是有意义的。例如，D编程语言的编译器DMD使用相同的内存管理方案，原因相同 [1]。

## 关于作者

我是Rui Ueyama。我是[8cc](https://github.com/rui314/8cc)的创建者，它是一个业余C编译器，也是当前版本的[LLVM lld](https://lld.llvm.org)链接器的原始创造者，这是一个生产质量的链接器，被各种操作系统和大规模构建系统使用。

## 参考文献

- [tcc](https://bellard.org/tcc/): 由Fabrice Bellard编写的一个小型C编译器。我从这个编译器学到了很多，但tcc和chibicc的设计不同。特别是，tcc是一个一次性编译器，而chibicc是一个多次性编译器。

- [lcc](https://github.com/drh/lcc): 另一个小型C编译器。创建者为lcc的内部编写了一本[书](https://sites.google.com/site/lccretargetablecompiler/)，我发现它是看一个编译器是如何实现的很好的资源。

- [一种渐进式的编译器
  构建方法](http://scheme2006.cs.uchicago.edu/11-ghuloum.pdf)

- [Rob Pike的5条

编程规则](https://users.ece.utexas.edu/~adnan/pike.html)

[1] https://www.drdobbs.com/cpp/increasing-compiler-speed-by-over-75/240158941

> DMD在内存分配方面有一点狡猾。因为编译器是短暂的程序，速度至关重要，DMD只是随意地malloc，并且从不释放。