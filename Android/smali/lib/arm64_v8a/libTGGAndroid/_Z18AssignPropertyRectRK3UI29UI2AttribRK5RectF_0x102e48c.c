// 函数: _Z18AssignPropertyRectRK3UI29UI2AttribRK5RectF
// 地址: 0x102e48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x20 = arg2.d
*(arg1 + 0x1370) = 0
*(arg1 + 0x1694) = 0
AttribMap* x0 = GetEdittedMap(arg1, arg2)
AttribMapSetDef(*gUI2AttribTable, x0, x20, arg3)
return AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_RectF, x20) __tailcall
