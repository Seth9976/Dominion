// 函数: _Z22DefinitionAssignStringPPcPKcPK8DefField
// 地址: 0xc895a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = *arg1

if (x0 != *(arg3 + 0x48))
    XFree(x0)
    *arg1 = nullptr

int32_t x21 = strlen(arg2) + 1
char* x0_4 = XMalloc(x21)
*arg1 = x0_4
return memcpy(x0_4, arg2, sx.q(x21)) __tailcall
