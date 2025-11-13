// 函数: _Z23MaterialUIItemSetSimplejPKc
// 地址: 0xf7ff6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x2 = arg2

if ((zx.d(data_2421900) & 1) == 0)
    char const* var_18_1 = x2
    x2 = var_18_1
    
    if (__cxa_guard_acquire(&data_2421900) != 0)
        data_24218b8 = UILayoutGetElementIndex(data_24218f0, "imgTexture")
        __cxa_guard_release(&data_2421900)
        x2 = var_18_1

if ((zx.d(data_2421908) & 1) == 0)
    char const* var_18_2 = x2
    x2 = var_18_2
    
    if (__cxa_guard_acquire(&data_2421908) != 0)
        data_24218bc = UILayoutGetElementIndex(data_24218f0, "txtLayerName")
        __cxa_guard_release(&data_2421908)
        x2 = var_18_2

if ((zx.d(data_2421910) & 1) == 0)
    char const* var_18_3 = x2
    x2 = var_18_3
    
    if (__cxa_guard_acquire(&data_2421910) != 0)
        data_24218c0 = UILayoutGetElementIndex(data_24218f0, "txtBlend")
        __cxa_guard_release(&data_2421910)
        x2 = var_18_3

UIStateOverrideText(arg1, data_24218bc, x2, true)
UIStateOverrideElementHidden(arg1, data_24218b8, true)
return UIStateOverrideElementHidden(arg1, data_24218c0, true) __tailcall
