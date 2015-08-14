//
//  KSS3BucketACLXMLParser.h
//  KS3SDK
//
//  Created by JackWong on 12/12/14.
//  Copyright (c) 2014 kingsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KS3BucketACLResult.h"

@interface KS3BucketACLXMLParser : NSObject <NSXMLParserDelegate>
@property (strong, nonatomic) KS3BucketACLResult *listBuctkResult;
- (void)kSS3XMLarse:(NSData *)dataXml;


@end
