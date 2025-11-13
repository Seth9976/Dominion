// 函数: _Z23RendererDrawStatOverlayv
// 地址: 0xfa2b74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((GameIsDebugDrawFlagSet(0x40) & 1) == 0)
    if ((GameIsDebugDrawFlagSet(0x80) & 1) != 0)
        goto label_fa2bb0
    
    goto label_fa2b94

RendererDrawStats()

if ((GameIsDebugDrawFlagSet(0x80) & 1) == 0)
label_fa2b94:
    
    if ((GameIsDebugDrawFlagSet(0x20) & 1) == 0)
    label_fa2bc4:
        
        if ((GameIsDebugDrawFlagSet(0x80) & 1) == 0)
            int64_t result = GameIsDebugDrawFlagSet(0x40)
            
            if ((result.d & 1) == 0)
                return result
else
label_fa2bb0:
    ProfilerDraw()
    
    if ((GameIsDebugDrawFlagSet(0x20) & 1) == 0)
        goto label_fa2bc4

return RendererDrawFPS() __tailcall
