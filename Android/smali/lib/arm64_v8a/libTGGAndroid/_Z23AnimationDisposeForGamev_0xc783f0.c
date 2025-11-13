// 函数: _Z23AnimationDisposeForGamev
// 地址: 0xc783f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *(*gpGameData + 8)
int64_t* i_2 = *(x19 + 8)

if (i_2 != 0)
    int64_t* i
    
    do
        i = *i_2
        XFree(i_2)
        i_2 = i
    while (i != 0)

int64_t* i_3 = *(x19 + 0x20)
*(x19 + 0x14) = 0
*x19 = 0
*(x19 + 8) = 0

if (i_3 != 0)
    int64_t* i_1
    
    do
        i_1 = *i_3
        XFree(i_3)
        i_3 = i_1
    while (i_1 != 0)

*(x19 + 0x2c) = 0
*(x19 + 0x18) = 0
*(x19 + 0x20) = 0
return XPooledFree(x19, 0x30) __tailcall
