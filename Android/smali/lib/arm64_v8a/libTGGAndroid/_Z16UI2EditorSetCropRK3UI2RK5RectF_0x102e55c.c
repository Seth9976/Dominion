// 函数: _Z16UI2EditorSetCropRK3UI2RK5RectF
// 地址: 0x102e55c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1370) = 0
*(arg1 + 0x1694) = 0
AttribMap* x0 = GetEdittedMap(arg1, 0x80)
AttribMapSetDef(*gUI2AttribTable, x0, 0x80, arg2)
return AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_RectF, 0x80) __tailcall
