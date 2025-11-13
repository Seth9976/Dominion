// 函数: _Z9VRDrawEyev
// 地址: 0x106068c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gGraphicsInterface
uint32_t x22 = *gGlobalVRAppType
int32_t x19 = *(gVR + 0xf0) == 1 ? 1 : 0
(*(*x0 + 0x120))(x0, zx.q(*(gDraw3DData + 0x38)), 0)
RenderUseSubmittedCamera()
int64_t result
int128_t v0
result, v0 = RenderItemListDraw(zx.q(x19))

if (x22 != 4)
    if (x22 == 2)
        int128_t var_40 = (*U"0123@ABCLMNO")[0xc].o
        DrawRectSolid(&var_40, gRgbaIBlack)
        var_40 = data_71cff0
        DrawRectSolid(&var_40, gRgbaIBlack)
        var_40 = data_71ae30
        DrawRectSolid(&var_40, gRgbaIBlack)
        var_40 = data_71a810
        DrawRectSolid(&var_40, gRgbaIBlack)
        result = DrawModeSet(0)
    
    if (*gGraphicsDriverType == 1)
        result = OpenGL_RenderTexture_Resolve()
    
    if (*(*gAppInterface + 0x30) != 0 && zx.d(*gUsingMultisampleExt) == 0)
        result = GameIsDebugDrawFlagSet(0x2000)
        
        if (zx.d(*gUsingMultisampleExt) == 0 && (result.d & 1) == 0)
            int64_t* x0_6 = *gGraphicsInterface
            void* x9_2
            
            if (*(gVR + 0xf0) != 1)
                x9_2 = *x0_6
            else
                x9_2 = *x0_6
            
            return (*(x9_2 + 0x128))()

return result
