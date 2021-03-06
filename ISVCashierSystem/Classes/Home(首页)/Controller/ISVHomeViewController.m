//
//  ISVHomeViewController.m
//  ISVCashierSystem
//
//  Created by aaaa on 17/3/2.
//  Copyright © 2017年 ISV Co.,Ltd. All rights reserved.
//

#import "ISVHomeViewController.h"
#import "UIButton+ISVExt.h"
#import "scanCodeViewController.h"
#import "salesAnalysisViewController.h"
#import "addMemberViewController.h"
#import "memberManagerViewController.h"
#import "homeView.h"
@interface ISVHomeViewController ()
@property (nonatomic, strong)homeView *aView;  //实例化一个VView的对象
@end

@implementation ISVHomeViewController

- (void)viewWillAppear:(BOOL)animated{
    // Called when the view is about to made visible. Default does nothing
    [super viewWillAppear:animated];

}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithHexColor:@"#eeedf3"];

    _aView = [[homeView alloc]initWithFrame:CGRectMake(0, 0, kSCREEN_WIDTH, kSCREEN_HEIGHT)];  //初始化时一定要设置frame，否则VView上的两个按钮将无法被点击
    
    [_aView viewInit];
    
    [_aView.collectionBtn addTarget:self action:@selector(collectionBtnClick) forControlEvents:UIControlEventTouchUpInside];
    [_aView.aiBtn addTarget:self action:@selector(aiBtnClick) forControlEvents:UIControlEventTouchUpInside];
    [_aView.addMemberBtn addTarget:self action:@selector(addMemberBtnClick) forControlEvents:UIControlEventTouchUpInside];
    [_aView.memberManagerBtn addTarget:self action:@selector(memberManagerBtnClick) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:_aView];
    
}

- (void)collectionBtnClick {
    scanCodeViewController* scanCodeVC = [[scanCodeViewController alloc]init];
    [self .navigationController pushViewController:scanCodeVC animated:YES];
}

/**
    智能分析
 */
- (void)aiBtnClick {
    salesAnalysisViewController *saVC = [[salesAnalysisViewController alloc]init];
    [self.navigationController pushViewController:saVC animated:YES];
    
}

/**
    新增会员
 */
- (void)addMemberBtnClick {
    addMemberViewController *addMemVC = [[addMemberViewController alloc]init];
    [self.navigationController pushViewController:addMemVC animated:YES];
}

/**
    会员管理
 */
- (void)memberManagerBtnClick {
    memberManagerViewController *memMangerVC = [[memberManagerViewController alloc]init];
    [self.navigationController pushViewController:memMangerVC animated:YES];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
