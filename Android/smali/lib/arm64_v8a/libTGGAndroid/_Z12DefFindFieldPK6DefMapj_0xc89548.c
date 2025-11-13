// 函数: _Z12DefFindFieldPK6DefMapj
// 地址: 0xc89548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x10)
int32_t x12

x12 = x9 == 0 ? -1 : 0

int32_t* result

do
    if (x12 == 0xffffffff)
        pthread_kill(pthread_self(), 6)
        char** x0_2
        char* x1
        DefField* x2
        x0_2, x1, x2 = XNoReturn()
        return DefinitionAssignString(x0_2, x1, x2) __tailcall
    
    result = *(arg1 + 8) + muls.dp.d(x12, 0x68)
    
    if (x12 + 1 s>= x9)
        x12 = -1
    else
        x12 += 1
while (*result != arg2)

return result
