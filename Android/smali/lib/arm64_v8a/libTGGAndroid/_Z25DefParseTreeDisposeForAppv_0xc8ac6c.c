// 函数: _Z25DefParseTreeDisposeForAppv
// 地址: 0xc8ac6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *gpDefParseTreeAppData
int64_t* i_2 = x21[4]
int64_t* x20 = x21

if (i_2 != 0)
    int64_t* i
    
    do
        i = *i_2
        XFree(i_2)
        i_2 = i
    while (i != 0)
    x20 = *gpDefParseTreeAppData

*(x21 + 0x2c) = 0
x21[3] = 0
x21[4] = 0
int64_t* i_3 = x20[1]
int64_t* x0

if (i_3 == 0)
    x0 = x20
else
    int64_t* i_1
    
    do
        i_1 = *i_3
        XFree(i_3)
        i_3 = i_1
    while (i_1 != 0)
    x0 = *gpDefParseTreeAppData

*(x20 + 0x14) = 0
*x20 = 0
x20[1] = 0
return XFree(x0) __tailcall
