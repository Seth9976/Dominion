// 函数: jcv_diagram_free
// 地址: 0xc11700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
int64_t x19 = *(x20 + 0x9c)
void* i = *(x20 + 0x4c)
int64_t x2 = *(x20 + 0xac)

if (i != 0)
    int64_t var_18_1 = x2
    
    do
        *(x20 + 0x4c) = *(i + 8)
        var_18_1(x19)
        x2 = var_18_1
        i = *(x20 + 0x4c)
    while (i != 0)

*x20
jump(x2)
