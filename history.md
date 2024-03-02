# chibicc: A Small C Compiler

history of commits.

|	index	|	SHA	|	commit msg	|	chinese msg(中文说明)	|
|	---	|	---	|	---	|	---	|
|	1	|	0522e2d77e3ab82d3b80a5be8dbbdc8d4180561c	|	Compile an integer to an exectuable that exits with the given number	|	将整数编译为退出时返回给定数字的可执行文件	|
|	2	|	bf7081fba7d8c6b1cd8a12eb329697a5481c604e	|	Add + and - operators	|	添加+和-运算符	|
|	3	|	a1ab0ff26f23c82f15180051204eeb6279747c9a	|	Add a tokenizer to allow space characters between tokens	|	添加词法分析器以允许令牌之间有空格字符	|
|	4	|	cc5a6d978144bda90220bd10866c4fd908d07546	|	Improve error message	|	改进错误消息	|
|	5	|	84cfcaf98f3d19c8f0f316e22a61725ad201f0f6	|	Add *, / and ()	|	添加*、/和()运算符	|
|	6	|	bf9ab52860c1cbbeeca40df515468f42300ff429	|	Add unary plus and minus	|	添加一元加和减	|
|	7	|	25b4b85b887c643e337a9fbcd1b0220b413952bf	|	Add ==, !=, <= and >= operators	|	添加==、!=、<=和>=运算符	|
|	8	|	725badfb494544b7c7f1d4c4690b9bc033c6d051	|	Split main.c into multiple small files	|	将main.c分割为多个小文件	|
|	9	|	76cae0ad05b6ba3e3e927b2b749ccddda23f0c51	|	Accept multiple statements separated by semicolons	|	接受由分号分隔的多条语句	|
|	10	|	1f9f3adf324af1432a380b41c7690834e649e346	|	Support single-letter local variables	|	支持单字母局部变量	|
|	11	|	482c26b536f8e5c998af6210470cd3d97a47ee9a	|	Support multi-letter local variables	|	支持多字母局部变量	|
|	12	|	6cc1c1f0643ce0f1af0857e024a0a438ddb45853	|	Add "return" statement	|	添加"return"语句	|
|	13	|	18ac283a5d19c19f1e1a7020a50fe34c2160a0f8	|	Add { ... }	|	添加{ ... }	|
|	14	|	ff8912c68e877744f8b15070e098af786e7bd296	|	Add null statement	|	添加空语句	|
|	15	|	72b841508f562c65b427a502fe6b270c3717319b	|	Add "if" statement	|	添加"if"语句	|
|	16	|	f5d480f139592cc2670c2b05076c39b2fd6fe9b3	|	Add "for" statement	|	添加"for"语句	|
|	17	|	1f3eb34f637520b01e6b8cd10a9026d05036db6d	|	Add "while" statement	|	添加"while"语句	|
|	18	|	5b142b1dcf6561df3c44a743965af3bd4e619112	|	Add LICENSE and README.md	|	添加LICENSE和README.md	|
|	19	|	3d8627719be00e39070eaca0ee5b599f2a877c5c	|	Add a representative node to each Node to improve error messages	|	为每个节点添加代表节点以改进错误消息	|
|	20	|	863e2b8de25fdf43a4a63b93d0f57718e9edaa47	|	Add unary & and *	|	添加一元&和*	|
|	21	|	a6bc4ab101c20b6398fd6bbfe124665bb7db5d25	|	Make pointer arithmetic work	|	使指针算术工作	|
|	22	|	b4e82cf7ce1cbfff8dd30f20fdad73fd3f1d5ccb	|	Add keyword "int" and make variable definition mandatory	|	添加关键字"int"并使变量定义成为必须	|
|	23	|	30a39926272a8341c52018654ca18d2c86ba662b	|	Support zero-arity function calls	|	支持零参数函数调用	|
|	24	|	964b1d2a0e3e46882743f16703cb12b51e724179	|	Support function call with up to 6 arguments	|	支持最多6个参数的函数调用	|
|	25	|	6cb4220f339e7d2a894e44b61c90c576a482914b	|	Support zero-arity function definition	|	支持零参数函数定义	|
|	26	|	aacc0cfec24e0aef1e884ac8b657e182a33a7b1c	|	Support function definition up to 6 parameters	|	支持最多6个参数的函数定义	|
|	27	|	8b6395d0f2be4024bd7e7921157a6496951eb162	|	Add one dimensional arrays	|	添加一维数组	|
|	28	|	3ce1b2d067164f754dcb4216c193dc98e164b3ce	|	Add arrays of arrays	|	添加数组的数组	|
|	29	|	648646bba704745274fcd4fef3b7029c7f7e0fcd	|	Add [] operator	|	添加[]运算符	|
|	30	|	3e55cafef80f0fc9d74bb06ea174de4b53e2ef94	|	Add sizeof	|	添加sizeof	|
|	31	|	0b7663481d0513067e0c0af04765b8578ae2a498	|	Merge Function with Var	|	将函数与变量合并	|
|	32	|	a4d3223a7215712b86076fad8aaf179d8f768b14	|	Add global variables	|	添加全局变量	|
|	33	|	be38d63d1b9cd236ef3ec884eedad8112bb6e6f9	|	Add char type	|	添加char类型	|
|	34	|	4cedda2dbeca6bd81d2bd00032f7cff46e0a985e	|	Add string literal	|	添加字符串字面量	|
|	35	|	35a0bcd366163168bf3337975130f62fc1c30235	|	Refactoring: Add a utility function	|	重构：添加一个实用函数	|
|	36	|	ad7749f2fad87a4b1df644d4e1c345b3f87d386d	|	Add \a, \b, \t, \n \v, \f, \r and \e	|	添加\a、\b、\t、\n、\v、\f、\r和\e	|
|	37	|	699d2b7e3f4ea4ba6ec2d5080f87e243989a5835	|	Add \<octal-sequence>	|	添加\<八进制序列>	|
|	38	|	c2cc1d3c4500caa34da5e68eb62b7474caf96fe2	|	Add \x<hexadecimal-sequence>	|	添加\x<十六进制序列>	|
|	39	|	9dae23461eb6250865f4ee727a0e727a6a4e03ba	|	[GNU] Add statement expression	|	[GNU] 添加语句表达式	|
|	40	|	d9ea59757e2710e34f105e98230f30f578e0e662	|	Read code from a file instead of argv[1]	|	从文件读取代码而不是argv[1]	|
|	41	|	7b8528f71c78a01e8ff41a76a83a320d1ef80e93	|	Refactor -- no functionality change	|	重构 -- 功能无变化	|
|	42	|	a0388bada4016bc0c3be6154c159faf80ce18d01	|	Add -o and --help options	|	添加-o和--help选项	|
|	43	|	6c0a42926a10ea5abc781c9db89b105e007512b1	|	Add line and block comments	|	添加行注释和块注释	|
|	44	|	ca8b2434c97fc37c14eddcb3a4e831d030ebb041	|	Handle block scope	|	处理块作用域	|
|	45	|	cd832a311e56bda981c9c957ba45f1bc1f6cc737	|	Rewrite tests in shell script in C	|	用C语言脚本重写测试	|
|	46	|	6647ad9b843768968db0a331ff7077904c6f58ee	|	Precompute line number for each token	|	为每个令牌预计算行号	|
|	47	|	1c91d1943a8ee07034224dd950412c3c87ef3276	|	Emit .file and .loc assembler directives	|	发出.file和.loc汇编指令	|
|	48	|	e6307ad374eeecd6474286b1b6fda5b3dda89d9a	|	Add comma operator	|	添加逗号运算符	|
|	49	|	f814033d04c4cefdbcf8174d65011d484d69303c	|	Add struct	|	添加结构体	|
|	50	|	9443e4b8bc587b670f9b448b03842530cd355760	|	Align struct members	|	对齐结构体成员	|
|	51	|	dfec1157b41bb86c8cb66eee0b0cbdb9dcccb6f4	|	Align local variables	|	对齐局部变量	|
|	52	|	e1e831ea3ee46ed7d4c975822f418d60d3050e1b	|	Support struct tags	|	支持结构体标签	|
|	53	|	f0a018a7d6f5e3847d7e66e324c5f71a55c8b5ef	|	Add -> operator	|	添加->运算符	|
|	54	|	11e3841832697c8ba4a1d68f5daa05045f70a716	|	Add union	|	添加联合体	|
|	55	|	bef05432c9d3289636ed1d360ca9b863a0698dc7	|	Add struct assignment	|	添加结构体赋值	|
|	56	|	5831edaab3eb6d56126c08f01f5639222602f7e5	|	Change size of int from 8 to 4	|	将int的大小从8改为4	|
|	57	|	43c2f0829f7d4ec3b96132b9964a778ff816b2eb	|	Add long type	|	添加long类型	|
|	58	|	9d48eef58b964551350fe0c1f641a57f5da40529	|	Add short type	|	添加short类型	|
|	59	|	a817b23da3c6f39f22bc57c0a53169978d97d7fa	|	Add nested type declarators	|	添加嵌套类型声明符	|
|	60	|	74e3acc296d90d6d16ae70803196e967564fb16a	|	Add function declaration	|	添加函数声明	|
|	61	|	8c3503bb94bd6b2d57e1f979d9fc1d84383b2961	|	Add void type	|	添加void类型	|
|	62	|	287906abb85081b961e118bb80b30decb93fba6f	|	Handle complex type declarations correctly	|	正确处理复杂类型声明	|
|	63	|	f46370ef98adec5d3a840d69a6b34a03d80b0699	|	Add long long as an alias for long	|	添加long long作为long的别名	|
|	64	|	a6b82da1ae9eefa44dada0baa885c283823ad59a	|	Add typedef	|	添加typedef	|
|	65	|	67543ea113c5cc2b15881e2bbb85ffd44feaef1f	|	Make sizeof to accept not only an expression but also a typename	|	使sizeof不仅接受表达式还接受类型名	|
|	66	|	cb81a379d9f7aef32fb1bbebd18f8618e1617a3f	|	Use 32 bit registers for char, short and int	|	对于char、short和int使用32位寄存器	|
|	67	|	cfc4fa94c1eb17f37466571f74bbdfae03a6e11f	|	Add type cast	|	添加类型转换	|
|	68	|	8b430a6c5fd6d33a637f2c615f8e5ec59e7be30e	|	Implement usual arithmetic conversion	|	实现通常的算术转换	|
|	69	|	9e211cbf1d459babf035fd6b3407c2bd184cb639	|	Report an error on undefined/undeclared functions	|	报告未定义/未声明的函数错误	|
|	70	|	818352acc07d0a982076b4b49345b42be706f5e1	|	Handle return type conversion	|	处理返回类型转换	|
|	71	|	fdc80bc6b5faa058b88d838332c71b7101712896	|	Handle function argument type conversion	|	处理函数参数类型转换	|
|	72	|	44bba965cbe3827be2b68651e541b33fa040bb72	|	Add _Bool type	|	添加_Bool类型	|
|	73	|	aa0accc75e9358d313fef0a6d4005103e2ce25f5	|	Add character literal	|	添加字符字面量	|
|	74	|	48ba2656fecc646ec4eb7f943fa94b02ed9725c7	|	Add enum	|	添加枚举	|
|	75	|	736232f3d672dae9a1ddae800909204c17fbe37c	|	Support file-scope functions	|	支持文件作用域函数	|
|	76	|	a4fea2ba3edeb8ab5a0812a09f14c2a771aa196c	|	Allow for-loops to define local variables	|	允许for循环定义局部变量	|
|	77	|	01a94c04aa2b5a95ac4038bd0d6fd5334fcbf882	|	Add +=, -=, *= and /=	|	添加+=、-=、*=和/=	|
|	78	|	47f19371f75db9029ea1b8b3783624fb7838d2db	|	Add pre ++ and --	|	添加前置++和--	|
|	79	|	e8ca48cf41f5f3113cadfb23acfedad7b9fa2e63	|	Add post ++ and --	|	添加后置++和--	|
|	80	|	7df934d2b63727d67d1c054975893930fa6aff44	|	Add hexadecimal, octal and binary number literals	|	添加十六进制、八进制和二进制数字字面量	|
|	81	|	6b88bcb306ef80b65d7f99c081ba83283b4ffac5	|	Add ! operator	|	添加!运算符	|
|	82	|	46a96d6862e4c1317ff48df69391fd98a1ae5e3d	|	Add ~ operator	|	添加~运算符	|
|	83	|	daa739817c58baa8dcd0c23bb403d27d5907abfb	|	Add % and %=	|	添加%和%=	|
|	84	|	86440068b43d6f9c93fdb07c1c2279cbab579e73	|	Add &, \|, ^, &=, \|= and ^=	|	添加&、\|、^、&=、\|=和^=	|
|	85	|	f30f78175c1fd50c8cdd132ca804573ae0d18453	|	Add && and \|\|	|	添加&&和\|\|	|
|	86	|	29ed294906ebc271c32a755e1aefc360df4d3863	|	Add a notion of an incomplete array type	|	添加不完整数组类型的概念	|
|	87	|	79632219d0991aae83e1de3c56df7d664205c2b6	|	Decay an array to a pointer in the func param context	|	在函数参数上下文中将数组衰减为指针	|
|	88	|	61a10551209a0d3770449862152e1b73b584d771	|	Add a notion of an incomplete struct type	|	添加不完整结构体类型的概念	|
|	89	|	6116cae4c4b98ef9ed55736f3a6c1d872de97767	|	Add goto and labeled statement	|	添加goto和标签语句	|
|	90	|	a4be55b333c9f712c334aac81e7ef4e076c2bc9b	|	Resolve conflict between labels and typedefs	|	解决标签和typedef之间的冲突	|
|	91	|	b3047f2317b74f19fb44dfe5e577d586d93dfa3c	|	Add break statement	|	添加break语句	|
|	92	|	3c83dfd8af045ae6923d4ccb3a3a5a50f4012346	|	Add continue statement	|	添加continue语句	|
|	93	|	044d9ae07ba700c52d8342e4eee26e07eea11619	|	Add switch-case	|	添加switch-case	|
|	94	|	d0c0cb74b21f431c62f7eeb8dbc0d6e14c1eff14	|	Add <<, >>, <<= and >>=	|	添加<<、>>、<<=和>>=	|
|	95	|	447ee098c51f6f615ef560b35d429f32f0cb5a35	|	Add ?: operator	|	添加?:运算符	|
|	96	|	79f5de21eb706ea5486fd682a83ffbde7e4d16a9	|	Add constant expression	|	添加常量表达式	|
|	97	|	22dd560ecf06e9ac4a4c1be33be74bac7924f06a	|	Support local variable initializers	|	支持局部变量初始化器	|
|	98	|	ae0a37dc4b39018a95616836ae4aaf4c8bfd779b	|	Initialize excess array elements with zero	|	用零初始化超出数组元素	|
|	99	|	a754732c046939cd87ac9fc8e9483ae9b3369449	|	Skip excess initializer elements	|	跳过多余的初始化元素	|
|	100	|	0d717373cc9e247fc6f6a0e02b0bbd424f0d70b0	|	Add string literal initializer	|	添加字符串字面量初始化器	|
|	101	|	5b955336032881edf835a50fb63f9581af1efd73	|	Allow to omit array length if an initializer is given	|	如果给定初始化器，则允许省略数组长度	|
|	102	|	e9d2c46ab3cc8b8518df289a4fc24a9e3fc9b3fe	|	Handle struct initializers for local variables	|	处理局部变量的结构体初始化器	|
|	103	|	aca19dd35027a12e245bfa52e6a98968e0cd2a9c	|	Allow to initialize a struct with other struct	|	允许使用其他结构体初始化结构体	|
|	104	|	483b194a80e904c11c5c6d855303596145adacee	|	Handle union initializers for local variables	|	处理局部变量的联合体初始化器	|
|	105	|	bbfe3f4369e1dd2266b827c81d7d9078ab1d301f	|	Add global initializer for scalar and string	|	为标量和字符串添加全局初始化器	|
|	106	|	eeb62b6dd547da5742f3ed74f8c8ae534d883dd9	|	Add struct initializer for global variable	|	为全局变量添加结构体初始化器	|
|	107	|	1eae5ae3678d079efc7d2807f10439e53932f811	|	Handle union initializers for global variable	|	处理全局变量的联合体初始化器	|
|	108	|	efa0f3366ddb914cc29f96fcdf10f99ded61775c	|	Allow parentheses in initializers to be omitted	|	允许在初始化器中省略括号	|
|	109	|	a58958ccb40a127a83e3383ef3887e4721352238	|	Allow extraneous braces for scalar initializer	|	允许对标量初始化器使用多余的大括号	|
|	110	|	fde464c47cb69e030b58d8d204a508d6babd3e09	|	Allow extraneous comma at the end of enum or initializer list	|	允许在枚举或初始化列表的末尾使用多余的逗号	|
|	111	|	3d216e3e06eee7ea3679503867a619c28458e8a7	|	Emit uninitialized global data to .bss instead of .data	|	将未初始化的全局数据发到.bss而不是.data	|
|	112	|	824543bb2f2b2e4f445d8c58b32f53bf1eec63ce	|	Add flexible array member	|	添加灵活数组成员	|
|	113	|	cd688a89b8a57e9614f278e29a9267709494d236	|	Allow to initialize struct flexible array member	|	允许初始化结构体灵活数组成员	|
|	114	|	7a1f816783064a12156807fe0a4d760c2e212d4e	|	Accept void as a parameter list	|	接受void作为参数列表	|
|	115	|	157356c769d777b1721da8218724608081137fe2	|	Align global variables	|	对齐全局变量	|
|	116	|	006a45ccd475296ee19ec87891523d89ce3f2f24	|	Add extern	|	添加extern	|
|	117	|	27647455e4cb7db1545a7b69c3a324aa025a471a	|	Handle extern declarations in a block	|	在块中处理extern声明	|
|	118	|	9df51789e7fd36fc1580bcd80676f9bcc4e24be1	|	Add _Alignof and _Alignas	|	添加_Alignof和_Alignas	|
|	119	|	310a87e15e98bb5abfd86ea7bb2a1cca1f5243c7	|	[GNU] Allow a variable as an operand of _Alignof	|	[GNU] 允许变量作为_Alignof的操作数	|
|	120	|	319772b42ebc2311a56ef54e1e9a60c5583971b1	|	Add static local variables	|	添加静态局部变量	|
|	121	|	127056dc1de6ddad280f6cf09cb15538dca22f43	|	Add compound literals	|	添加复合字面量	|
|	122	|	30b3e216cd4eca3b8a13cb0a0613f053ac1d4925	|	Add return that doesn't take any value	|	添加不带任何值的return	|
|	123	|	eb85527656f77b9532f3a78cefde7a2eb739189e	|	Add static global variables	|	添加静态全局变量	|
|	124	|	ee252e6ce79d752526504cf034fd41f070191824	|	Add do ... while	|	添加do ... while	|
|	125	|	6a0ed71107670b404af04bc20a2461165483f390	|	Align stack frame to 16 byte boundaries	|	将栈帧对齐到16字节边界	|
|	126	|	dcd45792264795a32f19581a904dda8bf6d3ad06	|	Handle a function returning bool, char or short	|	处理返回bool、char或short的函数	|
|	127	|	58fc86137c23adc3d98be40117087c645a9d7e4e	|	Allow to call a variadic function	|	允许调用可变参数函数	|
|	128	|	754a24fafcea637cab8bc01bb2702069109a0358	|	Add va_start to support variadic functions	|	添加va_start以支持可变参数函数	|
|	129	|	197689a22b38df2ced90e03117914a2248238c20	|	Check the number of function arguments	|	检查函数参数数量	|
|	130	|	3f59ce79554fcbccd15d42ff4b4ddb91812c7045	|	Add signed keyword	|	添加signed关键字	|
|	131	|	34ab83bdf49a23a47bc90354a5a4d22686d8d92a	|	Add unsigned integral types	|	添加无符号整型类型	|
|	132	|	aaf10459d93fb6c0f4539cb792c02a8d15cb0299	|	Add U, L and LL suffixes	|	添加U、L和LL后缀	|
|	133	|	8b8f3de48bba31ccfa84e3573075b2125bc130c3	|	Use long or ulong instead of int for some expressions	|	对于某些表达式，使用long或ulong而不是int	|
|	134	|	6880a39d2a5aec8e5ed32c276109936ed503d0bb	|	When comparing two pointers, treat them as unsigned	|	比较两个指针时，将它们视为无符号	|
|	135	|	7ba6fe8d94af2a232a9da82b815502513f52e465	|	Handle unsigned types in the constant expression	|	在常量表达式中处理无符号类型	|
|	136	|	b77355427575385b6f0b6c0a914600b79b4e4412	|	Ignore const, volatile, auto, register, restrict or _Noreturn.	|	忽略const、volatile、auto、register、restrict或_Noreturn。	|
|	137	|	93d12771d009924fb598b088dc4bd9b67fd9a09a	|	Ignore "static" and "const" in array-dimensions	|	忽略数组维度中的"static"和"const"	|
|	138	|	1fad2595d6fa67e57cd795d4faac4306e42e72c5	|	Allow to omit parameter name in function declaration	|	允许在函数声明中省略参数名	|
|	139	|	1e57f72d8adf15937856a3ca3ca0e16ccb37421e	|	Add floating-point constant	|	添加浮点常量	|
|	140	|	29de46aed47e5308db9a0aef6e13610dea8fb389	|	Add "float" and "double" local variables and casts	|	添加"float"和"double"局部变量和类型转换	|
|	141	|	cf9ceecb2f8cad2fb694b15c14ca1cf98e9524e7	|	Add flonum ==, !=, < and <=	|	添加flonum ==、!=、<和<=	|
|	142	|	83f76ebb66712a2560b2993e92265b574b1ab7ed	|	Add flonum +, -, * and /	|	添加flonum +、-、*和/	|
|	143	|	0ce109302715f8186b90671a53517a63a2741022	|	Handle flonum for if, while, do, !, ?:, \|\| and &&	|	处理if、while、do、!、?:、\|\|和&&的flonum	|
|	144	|	8ec1ebf176b88522fc4ec3980d20c78e13fdd526	|	Allow to call a function that takes/returns flonums	|	允许调用接受/返回flonums的函数	|
|	145	|	c6b30568b407e7b60b6fc2929801669434e4f91a	|	Allow to define a function that takes/returns flonums	|	允许定义接受/返回flonums的函数	|
|	146	|	8b14859f63a8389882bdb9330de592a112affa18	|	Implement default argument promotion for float	|	对float实现默认参数提升	|
|	147	|	e452cf721511dbf0d7f8c8f469f2dd67d8a5ee93	|	Support variadic function with floating-point parameters	|	支持带有浮点参数的可变参数函数	|
|	148	|	ffea4219b1f4ebe7c06cecc6c221cb0aab3a03ea	|	Add flonum constant expression	|	添加flonum常量表达式	|
|	149	|	9bf96124ba1e0cb95f491bd0c91d4e9c7a9850da	|	Add "long double" as an alias for "double"	|	将"long double"作为"double"的别名添加	|
|	150	|	5d15431df1abab3a5cf596fabe0a77c030a10791	|	Add stage2 build	|	添加stage2构建	|
|	151	|	d06a8ac6e6120861c9c79acb15b9a18693e4ee47	|	Add function pointer	|	添加函数指针	|
|	152	|	c5953ba1328fa86f906406843eb9f23cd596ef04	|	Decay a function to a pointer in the func param context	|	在函数参数上下文中将函数衰减为指针	|
|	153	|	53e81033ce18fd94fcdcde9010b7c9d41f30aa2c	|	Add usual arithmetic conversion for function pointer	|	为函数指针添加通常的算术转换	|
|	154	|	f3d96136f292dea83fd760098d189a6884f59eb0	|	Split cc1 from compiler driver	|	将cc1从编译器驱动程序中分离	|
|	155	|	140b43358c33fb5e9f86789541dbca306bb64fcc	|	Run "as" command unless -S is given	|	除非给定-S，否则运行"as"命令	|
|	156	|	b833cd0f297ba7979c23cff1b88c27beb4f2f737	|	Accept multiple input files	|	接受多个输入文件	|
|	157	|	8b726b54893e11427533fcceb7206b97c25f50a6	|	Run "ld" unless -c is given	|	除非给定-c，否则运行"ld"命令	|
|	158	|	1e1ea39dadd0035443f1d15c651deaf979341879	|	Add a do-nothing preprocessor	|	添加一个不做任何事的预处理器	|
|	159	|	146c7b3dd47bb65da2da86cce7f4d75d8efa157d	|	Add the null directive	|	添加null指令	|
|	160	|	d367510fcc1396fa252c4b87439c2f9fcd0abbe7	|	Add #include "..."	|	添加#include "..."	|
|	161	|	ec149f64d2f5c41a2080c0b4e42e4ef64444b382	|	Skip extra tokens after #include "..."	|	跳过#include "..."后的额外令牌	|
|	162	|	d138864a2a99849e43d81ca071b7a799edc0e65a	|	Add -E option	|	添加-E选项	|
|	163	|	bf6ff928ad17d98d07f68f619e6cbe29829d0a20	|	Add #if and #endif	|	添加#if和#endif	|
|	164	|	aa570f3086ce3e2c5ac8bf6107c051fed5aabf89	|	Skip nested #if in a skipped #if-clause	|	跳过被跳过的#if子句中的嵌套#if	|
|	165	|	c6e81d22f8189cd7bfcfcc33e4ac462529418192	|	Add #else	|	添加#else	|
|	166	|	e7a1857a31fc0c0012773c021639a6297f5b208f	|	Add #elif	|	添加#elif	|
|	167	|	97d33ad3bdc21c26356253046902d4b166bd115b	|	Add objlike #define	|	添加objlike #define	|
|	168	|	9ad60e41d512158d942d1bf3808682ede6ef5118	|	Add #undef	|	添加#undef	|
|	169	|	2651448084a56dd0b960989798772e71e12e6c30	|	Expand macros in the #if and #elif argument context	|	在#if和#elif参数上下文中扩展宏	|
|	170	|	acce00228b842af35df5af8c97398765a386ab1e	|	Do not expand a token more than once for the same objlike macro	|	不为同一个objlike宏多次扩展一个令牌	|
|	171	|	1f80f581e517ae4a5df6ab38af48a0d2a1089c73	|	Add #ifdef and #ifndef	|	添加#ifdef和#ifndef	|
|	172	|	dec3b3fa02ffb343c37f82d36ae02be6bb30eb03	|	Add zero-arity funclike #define	|	添加零参数funclike #define	|
|	173	|	b9ad3e43cf7479712972514aa3f2c55a0f650f76	|	Add multi-arity funclike #define	|	添加多参数funclike #define	|
|	174	|	dd4306cdd8158f76f094fc699530311228536adb	|	Allow empty macro arguments	|	允许空宏参数	|
|	175	|	c7d7ce0f0cbd5869259a3365211ab92126a27ff6	|	Allow parenthesized expressions as macro arguments	|	允许将括号表达式作为宏参数	|
|	176	|	1313fc6d3a77cedbca18fa0ffee1a86d0903ad7f	|	Do not expand a token more than once for the same funclike macro	|	不为同一个funclike宏多次扩展一个令牌	|
|	177	|	8f6f7925a04ca070167a38b8952a1a0bb7b63d23	|	Add macro stringizing operator (#)	|	添加宏字符串化操作符(#)	|
|	178	|	8f561aed9b7a47c38afd8c1cc75bc9a700ae97b5	|	Add macro token-pasting operator (##)	|	添加宏令牌粘合操作符(##)	|
|	179	|	769b5a0941694ccdcfe61528053c3d93cb53de80	|	Use chibicc's preprocessor for all tests	|	对所有测试使用chibicc的预处理器	|
|	180	|	5cb2f89e6a49cac8ddb16f46df92c31fa2507b9a	|	Add defined() macro operator	|	添加defined()宏操作符	|
|	181	|	a8d76ad435891deee9deebbc3a825062fd6cd45a	|	Replace remaining identifiers with 0 in macro constexpr	|	在宏constexpr中用0替换剩余的标识符	|
|	182	|	8075582c21496530e3b1847f5bad11c42941066e	|	Preserve newline and space during macro expansion	|	在宏扩展中保留换行符和空格	|
|	183	|	b33fe0ea828e6a8ff3ec2d8bd5845da2b337afa5	|	Support line continuation	|	支持行续接	|
|	184	|	d85fc4ffcfb8875aa191481e5c153a1e07066f8e	|	Add #include <...>	|	添加#include <...>	|
|	185	|	a1dd6213c85dfa6f36f74fd00ade09ed9fa3e467	|	Add -I<dir> option	|	添加-I<dir>选项	|
|	186	|	a939a7a90638631c296dfb63d857b24555b25327	|	Add default include paths	|	添加默认包含路径	|
|	187	|	e7fdc2e3f1d20d38ad61f6cb87e72c613b7696c7	|	Add #error	|	添加#error	|
|	188	|	5f5a8507ff2f2509c27ac1a196fd1874345e5e95	|	Add predefine macros such as __STDC__	|	添加预定义宏，如__STDC__	|
|	189	|	6f17071885b98ac5dcdcc0b233ff204150a6826c	|	Add __FILE__ and __LINE__	|	添加__FILE__和__LINE__	|
|	190	|	dc01f94900a9cabf40bb6ec2c5be8b4665c30eda	|	Add __VA_ARGS__	|	添加__VA_ARGS__	|
|	191	|	ba6b4b63751ed65f2fcd74965d2b337a1a65752b	|	Add __func__	|	添加__func__	|
|	192	|	82ba010c764d3dc4d0f72a9ee5a6d6f72780e75f	|	[GNU] Add __FUNCTION__	|	[GNU] 添加__FUNCTION__	|
|	193	|	ab4f1e1e197ecae40299b99dc00b1c92a4a3cb28	|	Concatenate adjacent string literals	|	连接相邻的字符串字面量	|
|	194	|	7746e4ee0b254da6311202c7db3d2fddd4c6a52c	|	Recognize wide character literal	|	识别宽字符字面量	|
|	195	|	7cbfd111d38b70110c9adcdfdae86d07995ae534	|	Add stdarg.h, stdbool.h, stddef.h, stdalign.h and float.h	|	添加stdarg.h、stdbool.h、stddef.h、stdalign.h和float.h	|
|	196	|	5322ea8495d70be81a6b80f7a88850b85bfba240	|	Add va_arg()	|	添加va_arg()	|
|	197	|	12a9e7506c092fcbab8852db85c3aebefc8a8c81	|	Self-host: including preprocessor, chibicc can compile itself	|	自托管：包括预处理器，chibicc可以编译自身	|
|	198	|	b29f0521025c95ff331ddb58258b1083f8efd9ff	|	Support passed-on-stack arguments	|	支持通过堆栈传递的参数	|
|	199	|	9021f7f5decea3e7954f138e9bac4cfea26292be	|	Support passed-on-stack parameters	|	支持通过堆栈传递的参数	|
|	200	|	5e0f8c47e3bd91f589710a28f09b718d4a0ec6f3	|	Allow struct parameter	|	允许结构体参数	|
|	201	|	d63b1f410a7aa3d308d0620d640f417a87b0c838	|	Allow struct argument	|	允许结构体参数	|
|	202	|	c72df1c9be535bdfd5b46609996bf1eaf540aced	|	Allow to call a fucntion returning a struct	|	允许调用返回结构体的函数	|
|	203	|	d7bad961146b9f2fd918f05fd59a50f3f65bf325	|	Allow to define a function returning a struct	|	允许定义返回结构体的函数	|
|	204	|	b6d3cd00df7d0496fca2af2c34e72ab3e6af4028	|	Allow variadic function to take more than 6 parameters	|	允许可变参数函数接受超过6个参数	|
|	205	|	603de502fd8bad750d48aaf9a66c547e5ca04c2a	|	Add va_copy()	|	添加va_copy()	|
|	206	|	e0b5da3b395e46bbc2e377a59d5cba33206288a9	|	Dereferencing a function shouldn't do anything	|	函数解引用不应该做任何事情	|
|	207	|	3f2c2d5bca4f4506e0ab0b03959d96be427fa672	|	Tokenize numeric tokens as pp-numbers	|	将数字令牌作为pp-numbers进行词法分析	|
|	208	|	fc69f5c6f9b3aeb5d6ee61353f0ed0df28f954c5	|	Add -D option	|	添加-D选项	|
|	209	|	be8b6f6d31f0c73c2aabffdf2794f20c69567cdb	|	Add -U option	|	添加-U选项	|
|	210	|	cc852fe99d0acfc6d547b36c75ff85e90975ad36	|	Add bitfield	|	添加位域	|
|	211	|	441a89b80babf98d3feb13e4594ee01eb6cc4dd5	|	Support global struct bitfield initializer	|	支持全局结构体位域初始化器	|
|	212	|	54c2b3b18fb80235ad9ee53cac3966e8aad9e12a	|	Handle op=-style assignments to bitfields	|	处理位域的op=-风格赋值	|
|	213	|	17ea802ceaa76f55726488379959a983f891f631	|	Handle zero-width bitfield member	|	处理零宽度位域成员	|
|	214	|	c302a969d8217ab46113d494b8cd773cf057193d	|	Do not allow to obtain an address of a bitfield	|	不允许获取位域的地址	|
|	215	|	2bdc6b800c1dbe6db584b91046785d4c48c41fb2	|	Write to an in-memory buffer before writing to an actual output file	|	在写入实际输出文件之前写入内存缓冲区	|
|	216	|	b1fdddff1523d2ca7bab4050434499d3a5ac39a1	|	Ignore -O, -W and -g and other flags	|	忽略-O、-W和-g以及其他标志	|
|	217	|	2c91da54dff93a365feec5a34f8eaeccca3e3a70	|	Turn on -Wall compiler flag and fix compiler warnings	|	打开-Wall编译器标志并修复编译器警告	|
|	218	|	5257ee0f202a5f9c4e5bcb576646cefe70f3ae91	|	Make an array of at least 16 bytes long to have alignment of at least 16 bytes	|	使至少16字节长的数组具有至少16字节的对齐	|
|	219	|	9c36dd727c736dc3a3ffa6ce7ce473966d802068	|	Make "main" to implicitly return 0	|	使"main"隐式返回0	|
|	220	|	c3075b3030c0488df1e7aa9f600da0f66072186b	|	Add anonymous struct and union	|	添加匿名结构体和联合体	|
|	221	|	e27417fcde500f6c01ce0dbee57a1af137510a09	|	Add __DATE__ and __TIME__ macros	|	添加__DATE__和__TIME__宏	|
|	222	|	0e77f3dff8b44547da4639c9609c216c9c896fa5	|	[GNU] Add __COUNTER__ macro	|	[GNU] 添加__COUNTER__宏	|
|	223	|	74bcec5b22a601451fac9d0878003d04205abca6	|	Canonicalize newline character	|	规范化换行符	|
|	224	|	c31886aa7a52fd8639e09bbdf8ac8ea854c313f6	|	Add \u and \U escape sequences	|	添加\u和\U转义序列	|
|	225	|	a57c661d46d9523bed01ad1b074f7a78d9e94ca3	|	Accept multibyte character as wide character literal	|	接受多字节字符作为宽字符字面量	|
|	226	|	454618cd15c2c87d9f5a6a6727e1b09a8e22a799	|	Add UTF-16 character literal	|	添加UTF-16字符字面量	|
|	227	|	2dac3afece31c27bf773efbc1f30c6a67088d3b6	|	Add UTF-32 character literal	|	添加UTF-32字符字面量	|
|	228	|	57b21fe90296c867888d7c8c60d243bc254a39d7	|	Add UTF-8 string literal	|	添加UTF-8字符串字面量	|
|	229	|	9cabe1f204a8a6139e8b072dfd6f0a15275ad25f	|	Add UTF-16 string literal	|	添加UTF-16字符串字面量	|
|	230	|	c467ee665de0c385170850ecc895add04b52b8a3	|	Add UTF-32 string literal	|	添加UTF-32字符串字面量	|
|	231	|	cae061af2b65ad0962fb4b6fe3b55abe2f3a5bf8	|	Add wide string literal	|	添加宽字符串字面量	|
|	232	|	36230e0827ca33a9b09ea5aa7b06e170fd188ca1	|	Add UTF-16 string literal initializer	|	添加UTF-16字符串字面量初始化器	|
|	233	|	6adba75af879d8ac2bc43a7337b02e64d10e60f1	|	Add UTF-32 string literal initializer	|	添加UTF-32字符串字面量初始化器	|
|	234	|	e4491b811510d08f880d0f9c7553ecfd18635469	|	Define __STDC_UTF_{16,32}__ macros	|	定义__STDC_UTF_{16,32}__宏	|
|	235	|	0e5d250ebfd29845c8c26b0ad63379994a2b8560	|	Allow multibyte UTF-8 character in identifier	|	允许在标识符中使用多字节UTF-8字符	|
|	236	|	adb8b988897758d0d4f74dcd9129bff0831634ae	|	[GNU] Accept $ as an identifier character	|	[GNU] 接受$作为标识符字符	|
|	237	|	238277714ddc407f966f3c503e13a114d6a91630	|	Allow to concatenate regular string literals with L/u/U string literals	|	允许将普通字符串字面量与L/u/U字符串字面量连接	|
|	238	|	2b2fa25507cdc491d2b5dafb2c4b5e33158b996a	|	Skip UTF-8 BOM markers	|	跳过UTF-8 BOM标记	|
|	239	|	c618c3b582de1d0b10b334a4f2ba6b85d5128940	|	Add array designated initializer	|	添加数组指定初始化器	|
|	240	|	835cd24b2c4598ee784d8bfd1c0427bfa948b947	|	Allow array designators to initialize incomplete arrays	|	允许数组指示器初始化不完整数组	|
|	241	|	691c4fac1529eaf1d825ca6093800912a4df3c91	|	[GNU] Allow to omit "=" in designated initializers	|	[GNU] 允许在指定初始化器中省略"="	|
|	242	|	67f5834378660abf271722a16294a634106d047e	|	Add struct designated initializer	|	添加结构体指定初始化器	|
|	243	|	31dc1dfa211ee27e74907ce3aa3986401dcedb82	|	Add union designated initializer	|	添加联合体指定初始化器	|
|	244	|	95eb5b01b30b24d68cbeb3991f65c617fc2a35cb	|	Handle struct designator for anonymous struct member	|	处理匿名结构体成员的结构体指示器	|
|	245	|	37998be0c183508e54f10f57d63d87e6e7eb0607	|	Improve error message for multibyte characters	|	改进多字节字符的错误消息	|
|	246	|	c61c0d00252a8704ff2731f6a57bad3657b84170	|	Add #line	|	添加#line	|
|	247	|	aaf20fb96eaf21ead775fde6bad00d8e71650b5a	|	[GNU] Add line marker directive	|	[GNU] 添加行标记指令	|
|	248	|	922604ae1e29fd1283fcc557e294a7272116c094	|	[GNU] Add __TIMESTAMP__ macro	|	[GNU] 添加__TIMESTAMP__宏	|
|	249	|	3a10c8aa44250e51dfe33e50b3121d6061faee4b	|	[GNU] Add __BASE_FILE__ macro	|	[GNU] 添加__BASE_FILE__宏	|
|	250	|	338144869fa82097d7767a032cbaac616ba0cd01	|	Add __VA_OPT__	|	添加__VA_OPT__	|
|	251	|	083c27559e5d8fce9c3b588fc4c01769ca9dd10d	|	[GNU] Handle ,##__VA_ARG__	|	[GNU] 处理,##__VA_ARG__	|
|	252	|	74ec9f6f3964d4beaa3970bd99c8660f958b694e	|	Ignore #pragma	|	忽略#pragma	|
|	253	|	007e526ec50bde4b366d0927ad20d9cd4ac53abf	|	[GNU] Support GCC-style variadic macro	|	[GNU] 支持GCC风格的可变宏	|
|	254	|	7d80a5136d1b2926dd0776c51896c40723c518c5	|	Add typeof	|	添加typeof	|
|	255	|	1433b404d68f9fe314ae2955d0988dd74e5ecb92	|	[GNU] Add __builtin_types_compatible_p	|	[GNU] 添加__builtin_types_compatible_p	|
|	256	|	1faab48ecf83d31a4fd781f10f6f00acb681d2dd	|	Add _Generic	|	添加_Generic	|
|	257	|	aee7891acb3e653dcfb10ec4172ae4d099ebf034	|	[GNU] Allow sizeof(<function type>)	|	[GNU] 允许sizeof(<函数类型>)	|
|	258	|	e28a612e9c2293182a83d5a7c6f48129455ce951	|	[GNU] Add ?: operator with omitted operand	|	[GNU] 添加省略操作数的?:运算符	|
|	259	|	a2535163e232cd547b14960bf4232305d239741d	|	Add basic "asm" statement	|	添加基本"asm"语句	|
|	260	|	31087f8d4bbc06e5bec44cb14cab3a922b5e4855	|	Handle inline functions as static functions	|	将内联函数处理为静态函数	|
|	261	|	e5f4ca90fd2bf950189c98ed7f1873c9f35131f3	|	Do not emit static inline functions if referenced by no one	|	如果没有人引用，则不发出静态内联函数	|
|	262	|	6a2dc5a48a75b65aa2e3f606d195ef0fef3c4442	|	Use __attribute__((format(print, ...))) to find programming errors	|	使用__attribute__((format(print, ...)))找到编程错误	|
|	263	|	11fc259b01c4a855e53ffdb2b86c1030f9c18586	|	Add -idirafter option	|	添加-idirafter选项	|
|	264	|	1b99badce48083c5fa6b8b5872e899c7d1a47f9a	|	Add offsetof	|	添加offsetof	|
|	265	|	85e46b1071b54649740b35df939f32ed188c0e13	|	Add tentative definition	|	添加暂定定义	|
|	266	|	6d344ed9459bd0328de53a58505a397d92cb0c8a	|	Add -fcommon and -fno-common flags	|	添加-fcommon和-fno-common标志	|
|	267	|	b3772845bd07fb695ca6b6e67ad7640776ae0f6c	|	Add thread-local variable	|	添加线程局部变量	|
|	268	|	8f5ff07dc08d258209adf60ed8e796efa7b7a476	|	Add -include option	|	添加-include选项	|
|	269	|	ee0a951b30646023ccc9a144afb4b380bf8d09b1	|	Add -x option	|	添加-x选项	|
|	270	|	4064871212049d82af3632941d15e6a0757ebc3c	|	Make -E to imply -xc	|	使-E意味着-xc	|
|	271	|	77275c546a5340f94ad011cd759ef162bc714ba6	|	Add alloca()	|	添加alloca()	|
|	272	|	e8667afd08ecbf7c9b05beb4ff399959d9722ff9	|	Add sizeof() for VLA	|	为VLA添加sizeof()	|
|	273	|	07f901057f5c6aa77c0f15f7a22dc0b88923c227	|	Add pointer arithmetic for VLA	|	为VLA添加指针算术	|
|	274	|	2fa8f489f3a852bd5bb17e023fdc5ea3a606100d	|	Support sizeof(typename) where typename is a VLA	|	支持sizeof(typename)其中typename是VLA	|
|	275	|	b0109a30c9fa24fedcb4d79bb17788e7ed228636	|	Do not define __STDC_NO_VLA__	|	不定义__STDC_NO_VLA__	|
|	276	|	bc2527944a83c1bc951a429530f39e93dc5235b2	|	Add -l option	|	添加-l选项	|
|	277	|	c32f0e21e71f43e64a7b98c9d96d4c513d42ba37	|	Add -s option	|	添加-s选项	|
|	278	|	8d130ab93f65f7ef79839aba87459e4f9507ba39	|	Emit size and type for symbols	|	为符号发出大小和类型	|
|	279	|	d56dd2f46e4049f017eae0dc99b2d16e78b88bee	|	Recognize .a and .so files	|	识别.a和.so文件	|
|	280	|	e0bf168041ef60687b5d4454a93fc78c4f3acc48	|	Add long double	|	添加long double	|
|	281	|	d90c73b6058af4b22a4edd610713f75b2478e356	|	[GNU] Support case ranges	|	[GNU] 支持范围case	|
|	282	|	3d5550e29a92708613c3a351c0857aea90e147a5	|	[GNU] Support array range designator	|	[GNU] 支持数组范围指示器	|
|	283	|	4f165ec60baa74f244d0a7c9b64c4bb3cbb76173	|	[GNU] Support labels-as-values	|	[GNU] 支持标签作为值	|
|	284	|	f0c98e0d590ffae286a8a4847c91212c734be8e3	|	[GNU] Treat labels-as-values as compile-time constant	|	[GNU] 将标签作为值视为编译时常数	|
|	285	|	0aad326f3550b3d4c499d4078fcc65cc2dbf7626	|	Add string hashmap	|	添加字符串哈希表	|
|	286	|	30520e5a7c73a6613cfcef38d72058e7cccde1f4	|	Use hashmap for macro name lookup	|	使用哈希表进行宏名称查找	|
|	287	|	655954e301621737988a4fa0a2c72ffc24285c8d	|	Use hashmap for block-scope lookup	|	使用哈希表进行块作用域查找	|
|	288	|	f6944133d211ec6fb71c41f118905e16a752135b	|	Use hashmap for keyword lookup	|	使用哈希表进行关键字查找	|
|	289	|	d0c4667b6bccf35ddf069c777689cd18c6a632b3	|	Add -M option	|	添加-M选项	|
|	290	|	95d5a46234f98f3793c965bebe036361cbb1978e	|	Add -MF option	|	添加-MF选项	|
|	291	|	57c1d4ec0290d49fa1e954ff3e7a51e24d71a3a1	|	Add -MP option	|	添加-MP选项	|
|	292	|	db850f37a2a284bf18cea427e4676a22d83d04b8	|	Add -MT option	|	添加-MT选项	|
|	293	|	fb5cfe5d17fd0c0cbc0d17789c065b9bb86ba3c4	|	Add -MD option	|	添加-MD选项	|
|	294	|	7aa72e41e6b2703b3f357507252008ebe25dc08d	|	Add -MQ option	|	添加-MQ选项	|
|	295	|	c3edffbbb06be9d586ee4f1cf678049b7d81369d	|	Add -MMD option	|	添加-MMD选项	|
|	296	|		|	main	|		|
