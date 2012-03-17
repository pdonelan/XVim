//
//  XVimYankEvaluator.h
//  XVim
//
//  Created by Shuichiro Suzuki on 2/25/12.
//  Copyright (c) 2012 JugglerShu.Net. All rights reserved.
//

#import "XVimOperatorEvaluator.h"

@interface XVimYankEvaluator : XVimOperatorEvaluator{
@private
    NSUInteger _repeat;
}
- (id)initWithRepeat:(NSUInteger)repeat;
@end
