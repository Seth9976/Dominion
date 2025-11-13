// 函数: _Z14FindPlayerCardR7DomGame9PlayerWho11DomCardEnum8DomWhere
// 地址: 0xa36964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_cb0
int32_t i_2 = CardsWhere(arg1, arg2, zx.q(arg4), &var_cb0)

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    void* x22_1 = &var_cb0
    uint64_t i
    
    do
        if ((CardIs(arg1, zx.q(*x22_1), zx.q(arg3)) & 1) != 0)
            return zx.q(*x22_1)
        
        i = i_1
        i_1 -= 1
        x22_1 += 4
    while (i != 1)

return 0
