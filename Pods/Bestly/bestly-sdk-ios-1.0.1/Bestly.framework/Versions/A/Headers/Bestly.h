//
//  Bestly.h
//  Bestly
//
//  Copyright (c) 2013 Bestly. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Main interface for interfacing with Bestly. Provides methods to
 * run tests and note reached goals.
 */
@interface Bestly : NSObject

/**
 * Call this in your application delegate's
 * application:didFinishLaunchingWithOptions: method to setup
 * the Bestly SDK.
 * @param key Your application's API key.
 */
+ (void)setupWithKey:(NSString *)key;

/**
 * Call this whenever you'd like to run an experiment.
 * @param experimentID The experiment ID corresposding to the
 * experiment that you'd like to run.
 * @param a Experiment variation A. This is the baseline
 * variation. Please note that in any sort of failure
 * (e.g. lack of internet connectivity),
 * this will be the variation that is run.
 * @param b Experiment variation B.
 */
+ (void)runExperimentWithID:(NSString *)experimentID
                          A:(void(^)(void))a
                          B:(void(^)(void))b;

/**
 * Call this whenever you'd like to run an experiment.
 * @param experimentID The experiment ID corresposding to the
 * experiment that you'd like to run.
 * @param a Experiment variation A. This is the baseline
 * variation. Please note that in any sort of failure
 * (e.g. lack of internet connectivity),
 * this will be the variation that is run.
 * @param b Experiment variation B.
 * @param c Experiment variation C.
 */
+ (void)runExperimentWithID:(NSString *)experimentID
                          A:(void(^)(void))a
                          B:(void(^)(void))b
                          C:(void(^)(void))c;

/**
 * Call this when the user has completed the desired result.
 * This will increase the rate of engagement as displayed on the
 * dashboard.
 * @param experimentID The experiment ID corresposding to the
 * goal that was reached.
 */
+ (void)goalReachedForExperimentID:(NSString *)experimentID;

@end
