//
//  CRMediaPickerControllerDelegate.h
//  NGSJob
//
//  Created by Dmitriy Arkhipov on 24.11.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CRMediaPickerControllerDelegate <NSObject>

@optional
- (void)CRMediaPickerController:(CRMediaPickerController *)mediaPickerController didFinishPickingAsset:(ALAsset *)asset error:(NSError *)error;
- (void)CRMediaPickerControllerDidCancel:(CRMediaPickerController *)mediaPickerController;
- (void)CRMediaPickerControllerDidDelete;
@end
