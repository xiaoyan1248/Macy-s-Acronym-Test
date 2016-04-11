//
//  SecondViewController.h
//  acronyms_Macy
//
//  Created by ZHAOXIAOYAN on 4/8/16.
//  Copyright © 2016 ShawnZhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property(nonatomic)NSMutableArray *jsonResult;



@end
