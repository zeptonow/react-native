/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<2281d2471c8f55a0e04d223aabb846c7>>
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

#pragma once

#include <react/featureflags/ReactNativeFeatureFlagsProvider.h>
#include <array>
#include <atomic>
#include <memory>
#include <optional>
#include <string>

namespace facebook::react {

class ReactNativeFeatureFlagsAccessor {
 public:
  ReactNativeFeatureFlagsAccessor();

  bool commonTestFlag();
  bool cdpInteractionMetricsEnabled();
  bool cxxNativeAnimatedEnabled();
  bool cxxNativeAnimatedRemoveJsSync();
  bool disableFabricCommitInCXXAnimated();
  bool disableMountItemReorderingAndroid();
  bool disableOldAndroidAttachmentMetricsWorkarounds();
  bool disableTextLayoutManagerCacheAndroid();
  bool enableAccessibilityOrder();
  bool enableAccumulatedUpdatesInRawPropsAndroid();
  bool enableAndroidTextMeasurementOptimizations();
  bool enableBridgelessArchitecture();
  bool enableCppPropsIteratorSetter();
  bool enableCustomFocusSearchOnClippedElementsAndroid();
  bool enableDestroyShadowTreeRevisionAsync();
  bool enableDoubleMeasurementFixAndroid();
  bool enableEagerMainQueueModulesOnIOS();
  bool enableEagerRootViewAttachment();
  bool enableFabricLogs();
  bool enableFabricRenderer();
  bool enableFixForParentTagDuringReparenting();
  bool enableFontScaleChangesUpdatingLayout();
  bool enableIOSTextBaselineOffsetPerLine();
  bool enableIOSViewClipToPaddingBox();
  bool enableImagePrefetchingAndroid();
  bool enableImmediateUpdateModeForContentOffsetChanges();
  bool enableInteropViewManagerClassLookUpOptimizationIOS();
  bool enableLayoutAnimationsOnAndroid();
  bool enableLayoutAnimationsOnIOS();
  bool enableMainQueueCoordinatorOnIOS();
  bool enableModuleArgumentNSNullConversionIOS();
  bool enableNativeCSSParsing();
  bool enableNetworkEventReporting();
  bool enableNewBackgroundAndBorderDrawables();
  bool enablePreparedTextLayout();
  bool enablePropsUpdateReconciliationAndroid();
  bool enableResourceTimingAPI();
  bool enableViewCulling();
  bool enableViewRecycling();
  bool enableViewRecyclingForText();
  bool enableViewRecyclingForView();
  bool enableVirtualViewDebugFeatures();
  bool enableVirtualViewRenderState();
  bool enableVirtualViewWindowFocusDetection();
  bool fixMappingOfEventPrioritiesBetweenFabricAndReact();
  bool fuseboxEnabledRelease();
  bool fuseboxNetworkInspectionEnabled();
  bool hideOffscreenVirtualViewsOnIOS();
  bool perfMonitorV2Enabled();
  double preparedTextCacheSize();
  bool preventShadowTreeCommitExhaustion();
  bool releaseImageDataWhenConsumed();
  bool shouldPressibilityUseW3CPointerEventsForHover();
  bool skipActivityIdentityAssertionOnHostPause();
  bool traceTurboModulePromiseRejectionsOnAndroid();
  bool updateRuntimeShadowNodeReferencesOnCommit();
  bool useAlwaysAvailableJSErrorHandling();
  bool useFabricInterop();
  bool useNativeEqualsInNativeReadableArrayAndroid();
  bool useNativeTransformHelperAndroid();
  bool useNativeViewConfigsInBridgelessMode();
  bool useOptimizedEventBatchingOnAndroid();
  bool useRawPropsJsiValue();
  bool useShadowNodeStateOnClone();
  bool useTurboModuleInterop();
  bool useTurboModules();
  double virtualViewPrerenderRatio();

  void override(std::unique_ptr<ReactNativeFeatureFlagsProvider> provider);
  std::optional<std::string> getAccessedFeatureFlagNames() const;

 private:
  void markFlagAsAccessed(int position, const char* flagName);
  void ensureFlagsNotAccessed();

  std::unique_ptr<ReactNativeFeatureFlagsProvider> currentProvider_;
  bool wasOverridden_;

  std::array<std::atomic<const char*>, 67> accessedFeatureFlags_;

  std::atomic<std::optional<bool>> commonTestFlag_;
  std::atomic<std::optional<bool>> cdpInteractionMetricsEnabled_;
  std::atomic<std::optional<bool>> cxxNativeAnimatedEnabled_;
  std::atomic<std::optional<bool>> cxxNativeAnimatedRemoveJsSync_;
  std::atomic<std::optional<bool>> disableFabricCommitInCXXAnimated_;
  std::atomic<std::optional<bool>> disableMountItemReorderingAndroid_;
  std::atomic<std::optional<bool>> disableOldAndroidAttachmentMetricsWorkarounds_;
  std::atomic<std::optional<bool>> disableTextLayoutManagerCacheAndroid_;
  std::atomic<std::optional<bool>> enableAccessibilityOrder_;
  std::atomic<std::optional<bool>> enableAccumulatedUpdatesInRawPropsAndroid_;
  std::atomic<std::optional<bool>> enableAndroidTextMeasurementOptimizations_;
  std::atomic<std::optional<bool>> enableBridgelessArchitecture_;
  std::atomic<std::optional<bool>> enableCppPropsIteratorSetter_;
  std::atomic<std::optional<bool>> enableCustomFocusSearchOnClippedElementsAndroid_;
  std::atomic<std::optional<bool>> enableDestroyShadowTreeRevisionAsync_;
  std::atomic<std::optional<bool>> enableDoubleMeasurementFixAndroid_;
  std::atomic<std::optional<bool>> enableEagerMainQueueModulesOnIOS_;
  std::atomic<std::optional<bool>> enableEagerRootViewAttachment_;
  std::atomic<std::optional<bool>> enableFabricLogs_;
  std::atomic<std::optional<bool>> enableFabricRenderer_;
  std::atomic<std::optional<bool>> enableFixForParentTagDuringReparenting_;
  std::atomic<std::optional<bool>> enableFontScaleChangesUpdatingLayout_;
  std::atomic<std::optional<bool>> enableIOSTextBaselineOffsetPerLine_;
  std::atomic<std::optional<bool>> enableIOSViewClipToPaddingBox_;
  std::atomic<std::optional<bool>> enableImagePrefetchingAndroid_;
  std::atomic<std::optional<bool>> enableImmediateUpdateModeForContentOffsetChanges_;
  std::atomic<std::optional<bool>> enableInteropViewManagerClassLookUpOptimizationIOS_;
  std::atomic<std::optional<bool>> enableLayoutAnimationsOnAndroid_;
  std::atomic<std::optional<bool>> enableLayoutAnimationsOnIOS_;
  std::atomic<std::optional<bool>> enableMainQueueCoordinatorOnIOS_;
  std::atomic<std::optional<bool>> enableModuleArgumentNSNullConversionIOS_;
  std::atomic<std::optional<bool>> enableNativeCSSParsing_;
  std::atomic<std::optional<bool>> enableNetworkEventReporting_;
  std::atomic<std::optional<bool>> enableNewBackgroundAndBorderDrawables_;
  std::atomic<std::optional<bool>> enablePreparedTextLayout_;
  std::atomic<std::optional<bool>> enablePropsUpdateReconciliationAndroid_;
  std::atomic<std::optional<bool>> enableResourceTimingAPI_;
  std::atomic<std::optional<bool>> enableViewCulling_;
  std::atomic<std::optional<bool>> enableViewRecycling_;
  std::atomic<std::optional<bool>> enableViewRecyclingForText_;
  std::atomic<std::optional<bool>> enableViewRecyclingForView_;
  std::atomic<std::optional<bool>> enableVirtualViewDebugFeatures_;
  std::atomic<std::optional<bool>> enableVirtualViewRenderState_;
  std::atomic<std::optional<bool>> enableVirtualViewWindowFocusDetection_;
  std::atomic<std::optional<bool>> fixMappingOfEventPrioritiesBetweenFabricAndReact_;
  std::atomic<std::optional<bool>> fuseboxEnabledRelease_;
  std::atomic<std::optional<bool>> fuseboxNetworkInspectionEnabled_;
  std::atomic<std::optional<bool>> hideOffscreenVirtualViewsOnIOS_;
  std::atomic<std::optional<bool>> perfMonitorV2Enabled_;
  std::atomic<std::optional<double>> preparedTextCacheSize_;
  std::atomic<std::optional<bool>> preventShadowTreeCommitExhaustion_;
  std::atomic<std::optional<bool>> releaseImageDataWhenConsumed_;
  std::atomic<std::optional<bool>> shouldPressibilityUseW3CPointerEventsForHover_;
  std::atomic<std::optional<bool>> skipActivityIdentityAssertionOnHostPause_;
  std::atomic<std::optional<bool>> traceTurboModulePromiseRejectionsOnAndroid_;
  std::atomic<std::optional<bool>> updateRuntimeShadowNodeReferencesOnCommit_;
  std::atomic<std::optional<bool>> useAlwaysAvailableJSErrorHandling_;
  std::atomic<std::optional<bool>> useFabricInterop_;
  std::atomic<std::optional<bool>> useNativeEqualsInNativeReadableArrayAndroid_;
  std::atomic<std::optional<bool>> useNativeTransformHelperAndroid_;
  std::atomic<std::optional<bool>> useNativeViewConfigsInBridgelessMode_;
  std::atomic<std::optional<bool>> useOptimizedEventBatchingOnAndroid_;
  std::atomic<std::optional<bool>> useRawPropsJsiValue_;
  std::atomic<std::optional<bool>> useShadowNodeStateOnClone_;
  std::atomic<std::optional<bool>> useTurboModuleInterop_;
  std::atomic<std::optional<bool>> useTurboModules_;
  std::atomic<std::optional<double>> virtualViewPrerenderRatio_;
};

} // namespace facebook::react
