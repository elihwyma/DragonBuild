//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@interface PSSpecifierAction : NSObject <NSCopying>
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
}

+ (id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3;
+ (id)actionWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
+ (id)actionWithBoolDetailClass:(Class)arg1;
@property(copy, nonatomic) CDUnknownBlockType setter; // @synthesize setter=_setter;
@property(copy, nonatomic) CDUnknownBlockType getter; // @synthesize getter=_getter;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

