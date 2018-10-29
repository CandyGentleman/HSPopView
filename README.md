
# HSPopView
本框架封装了平时一些项目中需要弹出的一些popView，一共包含三种类型，以后还会有所拓展。

  1. 使用方法：首先添加头文件
```objc
#import "HSqqPopMenuView.h"
#import "HSPopBottomView.h"
#import "HSCentralPopView.h"
```
  2. 实现代码：
    1.  防QQpopView 弹出框
```objc
[HSqqPopMenuView showWithItems:@[@{@"title":@"自动转入设置",@"imageName":@"popMenu_createChat"},
                                     @{@"title":@"常见问题",@"imageName":@"popMenu_scanCard"}
                                     ]
                             width:160
                  triangleLocation:CGPointMake([UIScreen mainScreen].bounds.size.width-60, 64+5)
                            action:^(NSInteger index) {
                                NSLog(@"点击了第%ld行",index);
                            }];

```
    2. 中间弹出框
```objc
[HSCentralPopView showWithItems:@[@"期待您的宝贵意见",
                                      @"使用不方便",
                                      @"积分增值少",
                                      @"单纯试试",
                                      @"想要全部申请积分兑换",
                                      ] action:^(NSInteger index) {
                                          NSLog(@"点击了第%ld行",index);
                                      }];

```
    3. 底部弹出框
```objc
NSArray *array = @[@"积分+增值年化利率约6%，你真的要关闭吗？",@"确认关闭",@"取消"];
    [HSPopBottomView showWithItems:array action:^(NSInteger index) {
                                         NSLog(@"点击了第%ld行",index);
                                     }];


```




