/*
 * Copyright (c) 2016-2021 HERE Europe B.V.
 * All rights reserved.
 */

#import <UIKit/UIKit.h>
@import NMAKit;

@interface MainViewController : UIViewController<NMAVenue3dMapLayerDelegate,NMAVenue3dRoutingControllerObserver,
                                                UITableViewDelegate, UITableViewDataSource>

@end
