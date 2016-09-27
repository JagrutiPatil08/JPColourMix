//
//  ViewController.h
//  JPColourmixing
//
//  Created by Student P_05 on 12/09/16.
//  Copyright © 2016 felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#define horizontalPadding= 20.0
@interface ViewController : UIViewController
{
    UILabel * redLabel;
    UILabel *greenLabel;
   UILabel *blueLabel;
    float redVal,blueVal,greenVal;
}
-(void)colorMe:  (float) redval withGreen : (float) greenval withBlue :(float) blueval;

@end

