//
//  IMGTestCase.h
//  ImgurSession
//
//  Created by Xtreme Dev on 2014-03-18.
//  Copyright (c) 2014 GeoffMacDonald. All rights reserved.
//

#import <XCTest/XCTest.h>

#import "ImgurSession.h"

#define EXP_SHORTHAND YES
#import "Expecta.h"
#import "OCMock.h"
#import <OHHTTPStubs.h>

@interface IMGTestCase : XCTestCase <IMGSessionDelegate>{
    
    //various metadata to store
    NSDictionary *imgurUnitTestParams;
    NSURL * testfileURL;
    __block void(^ failBlock)(NSError * error);
    
}

/**
 Stub reponse for next request
 */
-(void)stubWithFile:(NSString * )filename;

@end
