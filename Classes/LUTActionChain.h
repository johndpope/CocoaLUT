//
//  LUTActionChain.h
//  Pods
//
//  Created by Greg Cotten on 6/14/14.
//
//

#import <Foundation/Foundation.h>
#import "CocoaLUT.h"

@interface LUTAction : NSObject

@property (strong) LUT* (^actionBlock)(LUT*);
@property (strong) NSString *actionName;

+(instancetype)actionWithBlock:(LUT *(^)(LUT *))actionBlock
                    actionName:(NSString *)actionName;

-(LUT *)LUTByUsingActionBlockOnLUT:(LUT *)lut;

@end


@interface LUTActionChain : NSObject

+(instancetype)actionChain;

-(LUTAction *)actionAtIndex:(NSUInteger)index;

-(void)insertAction:(LUTAction *)actionBlock atIndex:(NSUInteger)index;

-(void)addAction:(LUTAction *)actionBlock;

-(void)removeActionAtIndex:(NSUInteger)index;

-(LUT *)lutAtIndex:(NSUInteger)index
            usingSourceLUT:(LUT *)sourceLUT;

-(LUT *)outputLUTUsingSourceLUT:(LUT *)sourceLUT;

-(NSArray *)actionNames;

@end