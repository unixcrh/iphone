//
//  ViewTeamViewController.h
//  ClubMaster
//
//  Created by Henrik Hansen on 18/01/12.
//

#import <UIKit/UIKit.h>

@interface ViewTeamViewController : UIViewController <UITableViewDelegate>

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) IBOutlet UIButton *attendingButton;
@property (nonatomic, retain) IBOutlet UIButton *unattendingButton;

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, assign) BOOL isAttending;

- (IBAction)attend:(id)sender;
- (IBAction)unattend:(id)sender;

@end
