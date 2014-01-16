//
//  OCAProducer+Subclass.h
//  Objective-Chain
//
//  Created by Martin Kiss on 30.12.13.
//  Copyright © 2014 Martin Kiss. All rights reserved.
//

#import "OCAProducer.h"
#import "OCAConnection.h"





/// Methods used internally by other classes.
@interface OCAProducer ()


#pragma mark Creating Producer

- (instancetype)initWithValueClass:(Class)valueClass;


#pragma mark Managing Connections

- (void)willAddConnection:(OCAConnection *)connection;
- (void)addConnection:(OCAConnection *)connection;
- (void)didAddConnection:(OCAConnection *)connection;

- (void)willRemoveConnection:(OCAConnection *)connection;
- (void)removeConnection:(OCAConnection *)connection;
- (void)didRemoveConnection:(OCAConnection *)connection;


#pragma mark Lifetime of Producer

@property (atomic, readwrite, strong) id lastValue;

- (void)produceValue:(id)value NS_REQUIRES_SUPER;
- (void)finishProducingWithError:(NSError *)error NS_REQUIRES_SUPER;




@end
