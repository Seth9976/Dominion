// 函数: _Z24DefDeepCopyVariableArrayPvPK8DefFieldP11AttribTableiPKv
// 地址: 0xc8870c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(*arg2)

if (arg4 == 0)
    *(arg1 + x25) = 0
    return 

void* x23_1 = *(arg5 + x25)

if (x23_1 u<= 0x100000 && (*(arg2 + 0x50) & 0x100) != 0)
    return 

size_t x24 = sx.q(*(*(arg2 + 0x30) + 0x14)) * sx.q(arg4)
int64_t x0_1 = XMalloc(x24.d)
*(arg1 + x25) = x0_1
memcpy(x0_1, x23_1, x24)
return DefDeepCopyArray(*(arg1 + x25), arg4, arg2, arg3, x23_1) __tailcall
