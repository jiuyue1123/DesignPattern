# DesignPattern
为什么会有本文？

  由于本人深感自己实战能力太低于是决定使用c++来实现23个设计模式
  
你将学会什么？

  认真学习本项目之后你将：
 1.简单理解OOP思想
 2.理解OOP的六大原则
 3.掌握OOP流程
 3.学会并利用不只23个设计模式开发项目
 4.对软件工程有一个初步了解
 
一、设计模式是什么？

  设计模式（Design pattern）代表了最佳的实践，通常被有经验的面向对象的软件开发人员所采用。设计模式是软件开发人员在软件开发过程中面临的一般问题的解决方案。这些解决方案是众多软件开发人员经过相当长的一段时间的试验和错误总结出来的。

  设计模式是一套被反复使用的、多数人知晓的、经过分类编目的、代码设计经验的总结。使用设计模式是为了重用代码、让代码更容易被他人理解、保证代码可靠性。 毫无疑问，设计模式于己于他人于系统都是多赢的，设计模式使代码编制真正工程化，设计模式是软件工程的基石，如同大厦的一块块砖石一样。项目中合理地运用设计模式可以完美地解决很多问题，每种模式在现实中都有相应的原理来与之对应，每种模式都描述了一个在我们周围不断重复发生的问题，以及该问题的核心解决方案，这也是设计模式能被广泛应用的原因。

二、设计模式的六大原则（SOLID）

  想要达到这样的效果，我们需要使用接口和抽象类等。
  
什么是接口（interface）？

  所谓的接口，即将内部实现细节封装起来，外部用户用过预留的接口可以使用接口的功能而不需要知晓内部具体细节。C++中，C++ 接口是使用 抽象类 来实现的，抽象类与数据抽象互不混淆，数据抽象是一个把实现细节与相关的数据分离开的概念。 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。不同派生类实现接口的方式也不尽相同，从而实现多态。

1、开闭原则（Open Close Principle）

开闭原则的意思是：对扩展开放，对修改关闭。在程序需要进行拓展的时候，不能去修改原有的代码，实现一个热插拔的效果。简言之，是为了使程序的扩展性好，易于维护和升级。想要达到这样的效果，我们需要使用接口和抽象类，后面的具体设计中我们会提到这点。

2、里氏代换原则（Liskov Substitution Principle）

里氏代换原则是面向对象设计的基本原则之一。 里氏代换原则中说，任何基类可以出现的地方，子类一定可以出现。LSP 是继承复用的基石，只有当派生类可以替换掉基类，且软件单位的功能不受到影响时，基类才能真正被复用，而派生类也能够在基类的基础上增加新的行为。里氏代换原则是对开闭原则的补充。实现开闭原则的关键步骤就是抽象化，而基类与子类的继承关系就是抽象化的具体实现，所以里氏代换原则是对实现抽象化的具体步骤的规范。

3、依赖倒转原则（Dependence Inversion Principle）

这个原则是开闭原则的基础，具体内容：针对接口编程，依赖于抽象而不依赖于具体。

4、接口隔离原则（Interface Segregation Principle）

这个原则的意思是：使用多个隔离的接口，比使用单个接口要好。它还有另外一个意思是：降低类之间的耦合度。由此可见，其实设计模式就是从大型软件架构出发、便于升级和维护的软件设计思想，它强调降低依赖，降低耦合。

5、迪米特法则，又称最少知道原则（Demeter Principle）

最少知道原则是指：一个实体应当尽量少地与其他实体之间发生相互作用，使得系统功能模块相对独立。

6、合成复用原则（Composite Reuse Principle）

合成复用原则是指：尽量使用合成/聚合的方式，而不是使用继承

三、设计模式的四大类

//////////每一个具体地设计模式将在标注名字的文件夹中详细介绍。//////////
创建型模式（Creational Pattern）

  这些设计模式提供了一种在创建对象的同时隐藏创建逻辑的方式，而不是使用 new 运算符直接实例化对象。这使得程序在判断针对某个给定实例需要创建哪些对象时更加灵活。
  
它们包括：

  1.工厂模式（Factory Pattern）
  2.抽象工厂模式（Abstract Factory Pattern）
  3.单例模式（Singleton Pattern）
  4.建造者模式（Builder Pattern）
  5.原型模式（Prototype Pattern）
  
记忆口诀：创工原单建抽（创公园，但见愁）


结构型模式（Structural Pattern）

  这些设计模式关注类和对象的组合。继承的概念被用来组合接口和定义组合对象获得新功能的方式。
  
它们包括：

  1.适配器模式（Adapter Pattern）
  2.桥接模式（Bridge Pattern）
  3.过滤器模式（Filter、Criteria Pattern）
  4.组合模式（Composite Pattern）
  5.装饰器模式（Decorator Pattern）
  6.外观模式（Facade Pattern）
  7.享元模式（Flyweight Pattern）
  8.代理模式（Proxy Pattern）
  
记忆口诀：结享过外组适代装桥（姐想过外租，世代装桥）


行为型模式（Behavioral Pattern）

  这些设计模式特别关注对象之间的通信。
  
它们包括：

  1.责任链模式（Chain of Responsibility Pattern）
  2.命令模式（Command Pattern）
  3.解释器模式（Interpreter Pattern）
  4.迭代器模式（Iterator Pattern）
  5.中介者模式（Mediator Pattern）
  6.备忘录模式（Memento Pattern）
  7.观察者模式（Observer Pattern）
  8.状态模式（State Pattern）
  9.空对象模式（Null Object Pattern）
  10.策略模式（Strategy Pattern）
  11.模板模式（Template Pattern）
  12.访问者模式（Visitor Pattern）
  
记忆口诀：行状责中模访解备观策命迭（形状折中模仿，戒备观测鸣笛访）


J2EE 模式

这些设计模式特别关注表示层。这些模式是由 Sun Java Center 鉴定的.

它们包括：

  1.MVC 模式（MVC Pattern）
  2.业务代表模式（Business Delegate Pattern）
  3.组合实体模式（Composite Entity Pattern）
  4.数据访问对象模式（Data Access Object Pattern）
  5.前端控制器模式（Front Controller Pattern）
  6.拦截过滤器模式（Intercepting Filter Pattern）
  7.服务定位器模式（Service Locator Pattern）
  8.传输对象模式（Transfer Object Pattern）

以上就是设计模式了。

//////////每一个具体地设计模式将在标注名字的文件夹中详细介绍。//////////

思考题：

  请思考这些模式的实际应用模型？（作者鼓励独立完成这些实例）
