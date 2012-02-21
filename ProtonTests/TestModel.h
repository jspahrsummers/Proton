//
//  TestModel.h
//  Proton
//
//  Created by Justin Spahr-Summers on 21.02.12.
//  Copyright (c) 2012 Bitswift. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TestSubModel;

@interface TestModel : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSSet *subModels;
@end

@interface TestModel (CoreDataGeneratedAccessors)

- (void)addSubModelsObject:(TestSubModel *)value;
- (void)removeSubModelsObject:(TestSubModel *)value;
- (void)addSubModels:(NSSet *)values;
- (void)removeSubModels:(NSSet *)values;

@end
