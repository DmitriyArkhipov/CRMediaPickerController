//
//  CRMediaPickerController.h
//  Christian Roman
//
//  Created by Christian Roman on 9/4/14.
//  Copyright (c) 2014 Christian Roman. All rights reserved.
//
//  Updated by Dmitriy Arkhipov on 24.11.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.

@import UIKit;
@import AssetsLibrary;

typedef NS_OPTIONS(NSInteger, CRMediaPickerControllerMediaType) {
    CRMediaPickerControllerMediaTypeImage = 1 << 0,
    CRMediaPickerControllerMediaTypeVideo = 1 << 1
};

typedef NS_OPTIONS(NSInteger, CRMediaPickerControllerSourceType) {
    CRMediaPickerControllerSourceTypePhotoLibrary       = 1 << 0,
    CRMediaPickerControllerSourceTypeCamera             = 1 << 1,
    CRMediaPickerControllerSourceTypeSavedPhotosAlbum   = 1 << 2,
    CRMediaPickerControllerSourceTypeLastPhotoTaken     = 1 << 3
};

@protocol CRMediaPickerControllerDelegate;

@interface CRMediaPickerController: NSObject

@property (nonatomic, strong, readonly) UIImagePickerController *imagePickerController;
@property (nonatomic, assign) CRMediaPickerControllerMediaType mediaType;
@property (nonatomic, assign) CRMediaPickerControllerSourceType sourceType;
@property (nonatomic, assign) NSTimeInterval videoMaximumDuration;
@property (nonatomic, assign) UIImagePickerControllerQualityType videoQualityType;

@property (nonatomic, copy) Class popoverControllerClass;

@property (nonatomic, weak) UIViewController<CRMediaPickerControllerDelegate> *delegate;

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, assign) UIImagePickerControllerCameraCaptureMode cameraCaptureMode;
@property (nonatomic, assign) UIImagePickerControllerCameraDevice cameraDevice;
@property (nonatomic, assign) UIImagePickerControllerCameraFlashMode cameraFlashMode;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic, assign) CGAffineTransform cameraViewTransform;
@property (nonatomic, assign) BOOL showsCameraControls;

- (void)show;
- (void)showAndDeleteImage:(BOOL)isDelete;
- (void)dismiss;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (void)takePicture;

@end

