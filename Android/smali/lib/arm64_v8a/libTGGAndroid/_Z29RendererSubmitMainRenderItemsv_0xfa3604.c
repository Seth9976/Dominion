// 函数: _Z29RendererSubmitMainRenderItemsv
// 地址: 0xfa3604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Draw3DRenderItemSubmissionBegin()
(*(**gAppInterface + 0x60))()

if (VRGetAppType() != 0)
    VRStatOverlayDraw()

return Draw3DRenderItemSubmissionEnd() __tailcall
