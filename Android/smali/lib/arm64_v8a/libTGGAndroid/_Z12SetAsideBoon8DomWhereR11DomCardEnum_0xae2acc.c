// 函数: _Z12SetAsideBoon8DomWhereR11DomCardEnum
// 地址: 0xae2acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
char var_30 = 0
int32_t x0_2 = DrawFateTo(*(x0 + 8), 0xd30, 0xffffffff, zx.q(arg1), 0xffffffff, *(x0 + 0x40), 
    zx.q(*(x0 + 0x48)), zx.q(*arg2))
int64_t result = CardWhat(*(DomGetContext() + 8), zx.q(x0_2))
*arg2 = result.d
return result
