#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGUser
@end
  
@interface SWGUser : SWGObject


@property(nonatomic) NSString* userid;

@property(nonatomic) NSString* username;

@property(nonatomic) NSString* sex;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* headimage;

@property(nonatomic) NSString* token;

@end
