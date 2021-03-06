//
//  LevelViewController.h
//  LevelEditor
//
//  Created by Michael Markowski on 26.01.10.
//  Copyright (c) 2010 Artifacts - Fine Software Development
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Cocoa/Cocoa.h>


enum {
	kTagToolbarButtonMoveAndDrag = 1,
	kTagToolbarButtonSelect = 2,
	kTagToolbarButtonDraw = 3,
};

@interface LevelViewController : NSViewController {
	NSButton *toolbarButtonMoveAndDrag;
	NSButton *toolbarButtonDraw;	
	NSButton *toolbarButtonSelect;
}

@property (nonatomic, retain) IBOutlet NSButton *toolbarButtonMoveAndDrag;
@property (nonatomic, retain) IBOutlet NSButton *toolbarButtonDraw;
@property (nonatomic, retain) IBOutlet NSButton *toolbarButtonSelect;

- (IBAction)toolbarAction:(id)sender;
- (void)disableAllToolbarButtons;

@end
