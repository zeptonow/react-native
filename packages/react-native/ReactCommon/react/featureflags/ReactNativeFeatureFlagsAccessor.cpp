/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<854a95027984ce9f88d32b7e9def773f>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags --update
 */

#include <react/featureflags/ReactNativeFeatureFlagsDefaults.h>
#include <sstream>
#include <stdexcept>
#include <string>
#include "ReactNativeFeatureFlags.h"

namespace facebook::react {

ReactNativeFeatureFlagsAccessor::ReactNativeFeatureFlagsAccessor()
    : currentProvider_(std::make_unique<ReactNativeFeatureFlagsDefaults>()),
      wasOverridden_(false) {}

bool ReactNativeFeatureFlagsAccessor::commonTestFlag() {
  auto flagValue = commonTestFlag_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(0, "commonTestFlag");

    flagValue = currentProvider_->commonTestFlag();
    commonTestFlag_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::cdpInteractionMetricsEnabled() {
  auto flagValue = cdpInteractionMetricsEnabled_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(1, "cdpInteractionMetricsEnabled");

    flagValue = currentProvider_->cdpInteractionMetricsEnabled();
    cdpInteractionMetricsEnabled_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::cxxNativeAnimatedEnabled() {
  auto flagValue = cxxNativeAnimatedEnabled_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(2, "cxxNativeAnimatedEnabled");

    flagValue = currentProvider_->cxxNativeAnimatedEnabled();
    cxxNativeAnimatedEnabled_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::cxxNativeAnimatedRemoveJsSync() {
  auto flagValue = cxxNativeAnimatedRemoveJsSync_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(3, "cxxNativeAnimatedRemoveJsSync");

    flagValue = currentProvider_->cxxNativeAnimatedRemoveJsSync();
    cxxNativeAnimatedRemoveJsSync_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::disableFabricCommitInCXXAnimated() {
  auto flagValue = disableFabricCommitInCXXAnimated_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(4, "disableFabricCommitInCXXAnimated");

    flagValue = currentProvider_->disableFabricCommitInCXXAnimated();
    disableFabricCommitInCXXAnimated_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::disableMountItemReorderingAndroid() {
  auto flagValue = disableMountItemReorderingAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(5, "disableMountItemReorderingAndroid");

    flagValue = currentProvider_->disableMountItemReorderingAndroid();
    disableMountItemReorderingAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::disableOldAndroidAttachmentMetricsWorkarounds() {
  auto flagValue = disableOldAndroidAttachmentMetricsWorkarounds_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(6, "disableOldAndroidAttachmentMetricsWorkarounds");

    flagValue = currentProvider_->disableOldAndroidAttachmentMetricsWorkarounds();
    disableOldAndroidAttachmentMetricsWorkarounds_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::disableTextLayoutManagerCacheAndroid() {
  auto flagValue = disableTextLayoutManagerCacheAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(7, "disableTextLayoutManagerCacheAndroid");

    flagValue = currentProvider_->disableTextLayoutManagerCacheAndroid();
    disableTextLayoutManagerCacheAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableAccessibilityOrder() {
  auto flagValue = enableAccessibilityOrder_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(8, "enableAccessibilityOrder");

    flagValue = currentProvider_->enableAccessibilityOrder();
    enableAccessibilityOrder_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableAccumulatedUpdatesInRawPropsAndroid() {
  auto flagValue = enableAccumulatedUpdatesInRawPropsAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(9, "enableAccumulatedUpdatesInRawPropsAndroid");

    flagValue = currentProvider_->enableAccumulatedUpdatesInRawPropsAndroid();
    enableAccumulatedUpdatesInRawPropsAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableAndroidTextMeasurementOptimizations() {
  auto flagValue = enableAndroidTextMeasurementOptimizations_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(10, "enableAndroidTextMeasurementOptimizations");

    flagValue = currentProvider_->enableAndroidTextMeasurementOptimizations();
    enableAndroidTextMeasurementOptimizations_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableBridgelessArchitecture() {
  auto flagValue = enableBridgelessArchitecture_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(11, "enableBridgelessArchitecture");

    flagValue = currentProvider_->enableBridgelessArchitecture();
    enableBridgelessArchitecture_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableCppPropsIteratorSetter() {
  auto flagValue = enableCppPropsIteratorSetter_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(12, "enableCppPropsIteratorSetter");

    flagValue = currentProvider_->enableCppPropsIteratorSetter();
    enableCppPropsIteratorSetter_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableCustomFocusSearchOnClippedElementsAndroid() {
  auto flagValue = enableCustomFocusSearchOnClippedElementsAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(13, "enableCustomFocusSearchOnClippedElementsAndroid");

    flagValue = currentProvider_->enableCustomFocusSearchOnClippedElementsAndroid();
    enableCustomFocusSearchOnClippedElementsAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableDestroyShadowTreeRevisionAsync() {
  auto flagValue = enableDestroyShadowTreeRevisionAsync_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(14, "enableDestroyShadowTreeRevisionAsync");

    flagValue = currentProvider_->enableDestroyShadowTreeRevisionAsync();
    enableDestroyShadowTreeRevisionAsync_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableDoubleMeasurementFixAndroid() {
  auto flagValue = enableDoubleMeasurementFixAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(15, "enableDoubleMeasurementFixAndroid");

    flagValue = currentProvider_->enableDoubleMeasurementFixAndroid();
    enableDoubleMeasurementFixAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableEagerMainQueueModulesOnIOS() {
  auto flagValue = enableEagerMainQueueModulesOnIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(16, "enableEagerMainQueueModulesOnIOS");

    flagValue = currentProvider_->enableEagerMainQueueModulesOnIOS();
    enableEagerMainQueueModulesOnIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableEagerRootViewAttachment() {
  auto flagValue = enableEagerRootViewAttachment_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(17, "enableEagerRootViewAttachment");

    flagValue = currentProvider_->enableEagerRootViewAttachment();
    enableEagerRootViewAttachment_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableFabricLogs() {
  auto flagValue = enableFabricLogs_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(18, "enableFabricLogs");

    flagValue = currentProvider_->enableFabricLogs();
    enableFabricLogs_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableFabricRenderer() {
  auto flagValue = enableFabricRenderer_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(19, "enableFabricRenderer");

    flagValue = currentProvider_->enableFabricRenderer();
    enableFabricRenderer_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableFixForParentTagDuringReparenting() {
  auto flagValue = enableFixForParentTagDuringReparenting_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(20, "enableFixForParentTagDuringReparenting");

    flagValue = currentProvider_->enableFixForParentTagDuringReparenting();
    enableFixForParentTagDuringReparenting_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableFontScaleChangesUpdatingLayout() {
  auto flagValue = enableFontScaleChangesUpdatingLayout_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(21, "enableFontScaleChangesUpdatingLayout");

    flagValue = currentProvider_->enableFontScaleChangesUpdatingLayout();
    enableFontScaleChangesUpdatingLayout_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableIOSTextBaselineOffsetPerLine() {
  auto flagValue = enableIOSTextBaselineOffsetPerLine_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(22, "enableIOSTextBaselineOffsetPerLine");

    flagValue = currentProvider_->enableIOSTextBaselineOffsetPerLine();
    enableIOSTextBaselineOffsetPerLine_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableIOSViewClipToPaddingBox() {
  auto flagValue = enableIOSViewClipToPaddingBox_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(23, "enableIOSViewClipToPaddingBox");

    flagValue = currentProvider_->enableIOSViewClipToPaddingBox();
    enableIOSViewClipToPaddingBox_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableImagePrefetchingAndroid() {
  auto flagValue = enableImagePrefetchingAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(24, "enableImagePrefetchingAndroid");

    flagValue = currentProvider_->enableImagePrefetchingAndroid();
    enableImagePrefetchingAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableImmediateUpdateModeForContentOffsetChanges() {
  auto flagValue = enableImmediateUpdateModeForContentOffsetChanges_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(25, "enableImmediateUpdateModeForContentOffsetChanges");

    flagValue = currentProvider_->enableImmediateUpdateModeForContentOffsetChanges();
    enableImmediateUpdateModeForContentOffsetChanges_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableInteropViewManagerClassLookUpOptimizationIOS() {
  auto flagValue = enableInteropViewManagerClassLookUpOptimizationIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(26, "enableInteropViewManagerClassLookUpOptimizationIOS");

    flagValue = currentProvider_->enableInteropViewManagerClassLookUpOptimizationIOS();
    enableInteropViewManagerClassLookUpOptimizationIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableLayoutAnimationsOnAndroid() {
  auto flagValue = enableLayoutAnimationsOnAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(27, "enableLayoutAnimationsOnAndroid");

    flagValue = currentProvider_->enableLayoutAnimationsOnAndroid();
    enableLayoutAnimationsOnAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableLayoutAnimationsOnIOS() {
  auto flagValue = enableLayoutAnimationsOnIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(28, "enableLayoutAnimationsOnIOS");

    flagValue = currentProvider_->enableLayoutAnimationsOnIOS();
    enableLayoutAnimationsOnIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableMainQueueCoordinatorOnIOS() {
  auto flagValue = enableMainQueueCoordinatorOnIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(29, "enableMainQueueCoordinatorOnIOS");

    flagValue = currentProvider_->enableMainQueueCoordinatorOnIOS();
    enableMainQueueCoordinatorOnIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableModuleArgumentNSNullConversionIOS() {
  auto flagValue = enableModuleArgumentNSNullConversionIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(30, "enableModuleArgumentNSNullConversionIOS");

    flagValue = currentProvider_->enableModuleArgumentNSNullConversionIOS();
    enableModuleArgumentNSNullConversionIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableNativeCSSParsing() {
  auto flagValue = enableNativeCSSParsing_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(31, "enableNativeCSSParsing");

    flagValue = currentProvider_->enableNativeCSSParsing();
    enableNativeCSSParsing_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableNetworkEventReporting() {
  auto flagValue = enableNetworkEventReporting_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(32, "enableNetworkEventReporting");

    flagValue = currentProvider_->enableNetworkEventReporting();
    enableNetworkEventReporting_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableNewBackgroundAndBorderDrawables() {
  auto flagValue = enableNewBackgroundAndBorderDrawables_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(33, "enableNewBackgroundAndBorderDrawables");

    flagValue = currentProvider_->enableNewBackgroundAndBorderDrawables();
    enableNewBackgroundAndBorderDrawables_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enablePreparedTextLayout() {
  auto flagValue = enablePreparedTextLayout_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(34, "enablePreparedTextLayout");

    flagValue = currentProvider_->enablePreparedTextLayout();
    enablePreparedTextLayout_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enablePropsUpdateReconciliationAndroid() {
  auto flagValue = enablePropsUpdateReconciliationAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(35, "enablePropsUpdateReconciliationAndroid");

    flagValue = currentProvider_->enablePropsUpdateReconciliationAndroid();
    enablePropsUpdateReconciliationAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableResourceTimingAPI() {
  auto flagValue = enableResourceTimingAPI_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(36, "enableResourceTimingAPI");

    flagValue = currentProvider_->enableResourceTimingAPI();
    enableResourceTimingAPI_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableViewCulling() {
  auto flagValue = enableViewCulling_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(37, "enableViewCulling");

    flagValue = currentProvider_->enableViewCulling();
    enableViewCulling_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableViewRecycling() {
  auto flagValue = enableViewRecycling_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(38, "enableViewRecycling");

    flagValue = currentProvider_->enableViewRecycling();
    enableViewRecycling_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableViewRecyclingForText() {
  auto flagValue = enableViewRecyclingForText_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(39, "enableViewRecyclingForText");

    flagValue = currentProvider_->enableViewRecyclingForText();
    enableViewRecyclingForText_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableViewRecyclingForView() {
  auto flagValue = enableViewRecyclingForView_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(40, "enableViewRecyclingForView");

    flagValue = currentProvider_->enableViewRecyclingForView();
    enableViewRecyclingForView_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableVirtualViewDebugFeatures() {
  auto flagValue = enableVirtualViewDebugFeatures_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(41, "enableVirtualViewDebugFeatures");

    flagValue = currentProvider_->enableVirtualViewDebugFeatures();
    enableVirtualViewDebugFeatures_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableVirtualViewRenderState() {
  auto flagValue = enableVirtualViewRenderState_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(42, "enableVirtualViewRenderState");

    flagValue = currentProvider_->enableVirtualViewRenderState();
    enableVirtualViewRenderState_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableVirtualViewWindowFocusDetection() {
  auto flagValue = enableVirtualViewWindowFocusDetection_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(43, "enableVirtualViewWindowFocusDetection");

    flagValue = currentProvider_->enableVirtualViewWindowFocusDetection();
    enableVirtualViewWindowFocusDetection_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::fixMappingOfEventPrioritiesBetweenFabricAndReact() {
  auto flagValue = fixMappingOfEventPrioritiesBetweenFabricAndReact_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(44, "fixMappingOfEventPrioritiesBetweenFabricAndReact");

    flagValue = currentProvider_->fixMappingOfEventPrioritiesBetweenFabricAndReact();
    fixMappingOfEventPrioritiesBetweenFabricAndReact_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::fuseboxEnabledRelease() {
  auto flagValue = fuseboxEnabledRelease_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(45, "fuseboxEnabledRelease");

    flagValue = currentProvider_->fuseboxEnabledRelease();
    fuseboxEnabledRelease_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::fuseboxNetworkInspectionEnabled() {
  auto flagValue = fuseboxNetworkInspectionEnabled_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(46, "fuseboxNetworkInspectionEnabled");

    flagValue = currentProvider_->fuseboxNetworkInspectionEnabled();
    fuseboxNetworkInspectionEnabled_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::hideOffscreenVirtualViewsOnIOS() {
  auto flagValue = hideOffscreenVirtualViewsOnIOS_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(47, "hideOffscreenVirtualViewsOnIOS");

    flagValue = currentProvider_->hideOffscreenVirtualViewsOnIOS();
    hideOffscreenVirtualViewsOnIOS_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::perfMonitorV2Enabled() {
  auto flagValue = perfMonitorV2Enabled_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(48, "perfMonitorV2Enabled");

    flagValue = currentProvider_->perfMonitorV2Enabled();
    perfMonitorV2Enabled_ = flagValue;
  }

  return flagValue.value();
}

double ReactNativeFeatureFlagsAccessor::preparedTextCacheSize() {
  auto flagValue = preparedTextCacheSize_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(49, "preparedTextCacheSize");

    flagValue = currentProvider_->preparedTextCacheSize();
    preparedTextCacheSize_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::preventShadowTreeCommitExhaustion() {
  auto flagValue = preventShadowTreeCommitExhaustion_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(50, "preventShadowTreeCommitExhaustion");

    flagValue = currentProvider_->preventShadowTreeCommitExhaustion();
    preventShadowTreeCommitExhaustion_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::releaseImageDataWhenConsumed() {
  auto flagValue = releaseImageDataWhenConsumed_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(51, "releaseImageDataWhenConsumed");

    flagValue = currentProvider_->releaseImageDataWhenConsumed();
    releaseImageDataWhenConsumed_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::shouldPressibilityUseW3CPointerEventsForHover() {
  auto flagValue = shouldPressibilityUseW3CPointerEventsForHover_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(52, "shouldPressibilityUseW3CPointerEventsForHover");

    flagValue = currentProvider_->shouldPressibilityUseW3CPointerEventsForHover();
    shouldPressibilityUseW3CPointerEventsForHover_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::skipActivityIdentityAssertionOnHostPause() {
  auto flagValue = skipActivityIdentityAssertionOnHostPause_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(53, "skipActivityIdentityAssertionOnHostPause");

    flagValue = currentProvider_->skipActivityIdentityAssertionOnHostPause();
    skipActivityIdentityAssertionOnHostPause_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::traceTurboModulePromiseRejectionsOnAndroid() {
  auto flagValue = traceTurboModulePromiseRejectionsOnAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(54, "traceTurboModulePromiseRejectionsOnAndroid");

    flagValue = currentProvider_->traceTurboModulePromiseRejectionsOnAndroid();
    traceTurboModulePromiseRejectionsOnAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::updateRuntimeShadowNodeReferencesOnCommit() {
  auto flagValue = updateRuntimeShadowNodeReferencesOnCommit_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(55, "updateRuntimeShadowNodeReferencesOnCommit");

    flagValue = currentProvider_->updateRuntimeShadowNodeReferencesOnCommit();
    updateRuntimeShadowNodeReferencesOnCommit_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useAlwaysAvailableJSErrorHandling() {
  auto flagValue = useAlwaysAvailableJSErrorHandling_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(56, "useAlwaysAvailableJSErrorHandling");

    flagValue = currentProvider_->useAlwaysAvailableJSErrorHandling();
    useAlwaysAvailableJSErrorHandling_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useFabricInterop() {
  auto flagValue = useFabricInterop_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(57, "useFabricInterop");

    flagValue = currentProvider_->useFabricInterop();
    useFabricInterop_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useNativeEqualsInNativeReadableArrayAndroid() {
  auto flagValue = useNativeEqualsInNativeReadableArrayAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(58, "useNativeEqualsInNativeReadableArrayAndroid");

    flagValue = currentProvider_->useNativeEqualsInNativeReadableArrayAndroid();
    useNativeEqualsInNativeReadableArrayAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useNativeTransformHelperAndroid() {
  auto flagValue = useNativeTransformHelperAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(59, "useNativeTransformHelperAndroid");

    flagValue = currentProvider_->useNativeTransformHelperAndroid();
    useNativeTransformHelperAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useNativeViewConfigsInBridgelessMode() {
  auto flagValue = useNativeViewConfigsInBridgelessMode_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(60, "useNativeViewConfigsInBridgelessMode");

    flagValue = currentProvider_->useNativeViewConfigsInBridgelessMode();
    useNativeViewConfigsInBridgelessMode_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useOptimizedEventBatchingOnAndroid() {
  auto flagValue = useOptimizedEventBatchingOnAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(61, "useOptimizedEventBatchingOnAndroid");

    flagValue = currentProvider_->useOptimizedEventBatchingOnAndroid();
    useOptimizedEventBatchingOnAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useRawPropsJsiValue() {
  auto flagValue = useRawPropsJsiValue_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(62, "useRawPropsJsiValue");

    flagValue = currentProvider_->useRawPropsJsiValue();
    useRawPropsJsiValue_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useShadowNodeStateOnClone() {
  auto flagValue = useShadowNodeStateOnClone_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(63, "useShadowNodeStateOnClone");

    flagValue = currentProvider_->useShadowNodeStateOnClone();
    useShadowNodeStateOnClone_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useTurboModuleInterop() {
  auto flagValue = useTurboModuleInterop_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(64, "useTurboModuleInterop");

    flagValue = currentProvider_->useTurboModuleInterop();
    useTurboModuleInterop_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useTurboModules() {
  auto flagValue = useTurboModules_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(65, "useTurboModules");

    flagValue = currentProvider_->useTurboModules();
    useTurboModules_ = flagValue;
  }

  return flagValue.value();
}

double ReactNativeFeatureFlagsAccessor::virtualViewPrerenderRatio() {
  auto flagValue = virtualViewPrerenderRatio_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(66, "virtualViewPrerenderRatio");

    flagValue = currentProvider_->virtualViewPrerenderRatio();
    virtualViewPrerenderRatio_ = flagValue;
  }

  return flagValue.value();
}

void ReactNativeFeatureFlagsAccessor::override(
    std::unique_ptr<ReactNativeFeatureFlagsProvider> provider) {
  if (wasOverridden_) {
    throw std::runtime_error(
        "Feature flags cannot be overridden more than once");
  }

  ensureFlagsNotAccessed();
  wasOverridden_ = true;
  currentProvider_ = std::move(provider);
}

std::optional<std::string>
ReactNativeFeatureFlagsAccessor::getAccessedFeatureFlagNames() const {
  std::ostringstream featureFlagListBuilder;
  for (const auto& featureFlagName : accessedFeatureFlags_) {
    if (featureFlagName != nullptr) {
      featureFlagListBuilder << featureFlagName << ", ";
    }
  }

  std::string accessedFeatureFlagNames = featureFlagListBuilder.str();
  if (!accessedFeatureFlagNames.empty()) {
    accessedFeatureFlagNames =
        accessedFeatureFlagNames.substr(0, accessedFeatureFlagNames.size() - 2);
  }

  return accessedFeatureFlagNames.empty()
      ? std::nullopt
      : std::optional{accessedFeatureFlagNames};
}

void ReactNativeFeatureFlagsAccessor::markFlagAsAccessed(
    int position,
    const char* flagName) {
  accessedFeatureFlags_[position] = flagName;
}

void ReactNativeFeatureFlagsAccessor::ensureFlagsNotAccessed() {
  auto accessedFeatureFlagNames = getAccessedFeatureFlagNames();

  if (accessedFeatureFlagNames.has_value()) {
    throw std::runtime_error(
        "Feature flags were accessed before being overridden: " +
        accessedFeatureFlagNames.value());
  }
}

} // namespace facebook::react
