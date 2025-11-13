// 函数: sub_1068710
// 地址: 0x1068710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTrace("engine_term_display")
int64_t x0 = *(arg1 + 8)

if (x0 != 0)
    eglMakeCurrent(x0, 0, 0, 0)
    int64_t x1_1 = *(arg1 + 0x18)
    
    if (x1_1 != 0)
        eglDestroyContext(*(arg1 + 8), x1_1)
    
    int64_t x1_2 = *(arg1 + 0x10)
    
    if (x1_2 != 0)
        eglDestroySurface(*(arg1 + 8), x1_2)
    
    XTrace("eglTerminate")
    eglTerminate(*(arg1 + 8))

__builtin_memset(arg1 + 8, 0, 0x18)
XTrace("OpenGL_DeleteAllState")
OpenGL_DeleteAllState()
return XTrace("engine_term_display done") __tailcall
