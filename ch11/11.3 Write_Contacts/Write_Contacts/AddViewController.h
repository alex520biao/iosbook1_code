//
//  AddViewController.h
//  Write_Contacts
//
//  Created by 关东升 on 12-10-9.
//  本书网站：http://www.iosbook1.com
//  智捷iOS课堂：http://www.51work6.com
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  QQ：1575716557 邮箱：jylong06@163.com
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

@interface AddViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UITextField *txtLastName;
@property (weak, nonatomic) IBOutlet UITextField *txtFirstName;

@property (weak, nonatomic) IBOutlet UITextField *txtMobile;
@property (weak, nonatomic) IBOutlet UITextField *txtIPhone;

@property (weak, nonatomic) IBOutlet UITextField *txtWorkEmail;
@property (weak, nonatomic) IBOutlet UITextField *txtHomeEmail;

- (IBAction)saveClick:(id)sender;
- (IBAction)cancelClick:(id)sender;

@end
