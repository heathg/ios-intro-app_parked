//
//  ToDoItem.h
//  ToDoList
//
//  Created by Heath Glover on 26/04/2015.
//  Copyright (c) 2015 HeathG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
