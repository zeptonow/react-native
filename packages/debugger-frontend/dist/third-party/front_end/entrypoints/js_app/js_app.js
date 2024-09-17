import"../shell/shell.js";import*as t from"../../core/i18n/i18n.js";import"../../core/root/root.js";import*as e from"../../ui/legacy/legacy.js";import*as i from"../../core/common/common.js";import*as n from"../../core/host/host.js";import*as o from"../../core/sdk/sdk.js";import*as r from"../../ui/legacy/components/utils/utils.js";import*as a from"../main/main.js";const l={profiler:"Profiler",showProfiler:"Show Profiler",startStopRecording:"Start/stop recording",showRecentTimelineSessions:"Show recent timeline sessions",record:"Record",stop:"Stop",startProfilingAndReloadPage:"Start profiling and reload page"},s=t.i18n.registerUIStrings("panels/js_profiler/js_profiler-meta.ts",l),c=t.i18n.getLazilyComputedLocalizedString.bind(void 0,s);let g,d;async function m(){return d||(d=await import("../../panels/profiler/profiler.js")),d}async function w(){return g||(g=await import("../../panels/timeline/timeline.js")),g}function p(t){return void 0===g?[]:t(g)}e.ViewManager.registerViewExtension({location:"panel",id:"js-profiler",title:c(l.profiler),commandPrompt:c(l.showProfiler),order:65,persistence:"permanent",experiment:"js-profiler-temporarily-enable",loadView:async()=>(await m()).ProfilesPanel.JSProfilerPanel.instance()}),e.ActionRegistration.registerActionExtension({actionId:"profiler.js-toggle-recording",category:"JAVASCRIPT_PROFILER",title:c(l.startStopRecording),iconClass:"record-start",toggleable:!0,toggledIconClass:"record-stop",toggleWithRedColor:!0,contextTypes:()=>void 0===d?[]:(t=>[t.ProfilesPanel.JSProfilerPanel])(d),loadActionDelegate:async()=>(await m()).ProfilesPanel.JSProfilerPanel.instance(),bindings:[{platform:"windows,linux",shortcut:"Ctrl+E"},{platform:"mac",shortcut:"Meta+E"}]}),e.ActionRegistration.registerActionExtension({actionId:"timeline.show-history",loadActionDelegate:async()=>new((await w()).TimelinePanel.ActionDelegate),category:"PERFORMANCE",title:c(l.showRecentTimelineSessions),contextTypes:()=>p((t=>[t.TimelinePanel.TimelinePanel])),bindings:[{platform:"windows,linux",shortcut:"Ctrl+H"},{platform:"mac",shortcut:"Meta+Y"}]}),e.ActionRegistration.registerActionExtension({actionId:"timeline.toggle-recording",category:"PERFORMANCE",iconClass:"record-start",toggleable:!0,toggledIconClass:"record-stop",toggleWithRedColor:!0,contextTypes:()=>p((t=>[t.TimelinePanel.TimelinePanel])),loadActionDelegate:async()=>new((await w()).TimelinePanel.ActionDelegate),options:[{value:!0,title:c(l.record)},{value:!1,title:c(l.stop)}],bindings:[{platform:"windows,linux",shortcut:"Ctrl+E"},{platform:"mac",shortcut:"Meta+E"}]}),e.ActionRegistration.registerActionExtension({actionId:"timeline.record-reload",iconClass:"refresh",contextTypes:()=>p((t=>[t.TimelinePanel.TimelinePanel])),category:"PERFORMANCE",title:c(l.startProfilingAndReloadPage),loadActionDelegate:async()=>new((await w()).TimelinePanel.ActionDelegate),bindings:[{platform:"windows,linux",shortcut:"Ctrl+Shift+E"},{platform:"mac",shortcut:"Meta+Shift+E"}]});const h={throttling:"Throttling",showThrottling:"Show Throttling",goOffline:"Go offline",device:"device",throttlingTag:"throttling",enableSlowGThrottling:"Enable slow `3G` throttling",enableFastGThrottling:"Enable fast `3G` throttling",goOnline:"Go online"},f=t.i18n.registerUIStrings("panels/mobile_throttling/mobile_throttling-meta.ts",h),T=t.i18n.getLazilyComputedLocalizedString.bind(void 0,f);let u;async function y(){return u||(u=await import("../../panels/mobile_throttling/mobile_throttling.js")),u}e.ViewManager.registerViewExtension({location:"settings-view",id:"throttling-conditions",title:T(h.throttling),commandPrompt:T(h.showThrottling),order:35,loadView:async()=>new((await y()).ThrottlingSettingsTab.ThrottlingSettingsTab),settings:["custom-network-conditions"]}),e.ActionRegistration.registerActionExtension({actionId:"network-conditions.network-offline",category:"NETWORK",title:T(h.goOffline),loadActionDelegate:async()=>new((await y()).ThrottlingManager.ActionDelegate),tags:[T(h.device),T(h.throttlingTag)]}),e.ActionRegistration.registerActionExtension({actionId:"network-conditions.network-low-end-mobile",category:"NETWORK",title:T(h.enableSlowGThrottling),loadActionDelegate:async()=>new((await y()).ThrottlingManager.ActionDelegate),tags:[T(h.device),T(h.throttlingTag)]}),e.ActionRegistration.registerActionExtension({actionId:"network-conditions.network-mid-tier-mobile",category:"NETWORK",title:T(h.enableFastGThrottling),loadActionDelegate:async()=>new((await y()).ThrottlingManager.ActionDelegate),tags:[T(h.device),T(h.throttlingTag)]}),e.ActionRegistration.registerActionExtension({actionId:"network-conditions.network-online",category:"NETWORK",title:T(h.goOnline),loadActionDelegate:async()=>new((await y()).ThrottlingManager.ActionDelegate),tags:[T(h.device),T(h.throttlingTag)]}),i.Settings.registerSettingExtension({storageType:"Synced",settingName:"custom-network-conditions",settingType:"array",defaultValue:[]});const A={main:"Main",networkTitle:"Scripts",showNode:"Show Scripts"},P=t.i18n.registerUIStrings("entrypoints/js_app/js_app.ts",A),S=t.i18n.getLocalizedString.bind(void 0,P),E=t.i18n.getLazilyComputedLocalizedString.bind(void 0,P);let R,b;class x{static instance(t={forceNew:null}){const{forceNew:e}=t;return R&&!e||(R=new x),R}async run(){n.userMetrics.actionTaken(n.UserMetrics.Action.ConnectToNodeJSDirectly),o.Connections.initMainConnection((async()=>{o.TargetManager.TargetManager.instance().createTarget("main",S(A.main),o.Target.Type.Node,null).runtimeAgent().invoke_runIfWaitingForDebugger()}),r.TargetDetachedDialog.TargetDetachedDialog.webSocketConnectionLost)}}e.ViewManager.registerViewExtension({location:"navigator-view",id:"navigator-network",title:E(A.networkTitle),commandPrompt:E(A.showNode),order:2,persistence:"permanent",loadView:async()=>(await async function(){return b||(b=await import("../../panels/sources/sources.js")),b}()).SourcesNavigator.NetworkNavigatorView.instance()}),i.Runnable.registerEarlyInitializationRunnable(x.instance),new a.MainImpl.MainImpl;export{x as JsMainImpl};