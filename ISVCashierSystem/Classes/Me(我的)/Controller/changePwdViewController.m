//
//  changePwdViewController.m
//  ISVCashierSystem
//
//  Created by aaaa on 17/3/4.
//  Copyright © 2017年 ISV Co.,Ltd. All rights reserved.
//

#import "changePwdViewController.h"
#import "changePwdView.h"

@interface changePwdViewController ()
@property(nonatomic, strong)changePwdView *aView;
@end

@implementation changePwdViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"修改密码";
    self.view.backgroundColor = ISVBackgroundColor;
    _aView = [[changePwdView alloc]initWithFrame:CGRectMake(0, 0, kSCREEN_WIDTH, kSCREEN_HEIGHT)];
    [_aView viewInit];
    [self.view addSubview:_aView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
