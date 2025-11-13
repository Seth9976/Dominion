// 函数: _ZNSt6__ndk114__num_put_base12__format_intEPcPKcbj
// 地址: 0x10b83ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if ((arg4 & 0x800) == 0)
    if ((arg4 & 0x200) != 0)
        goto label_10b83d4
    
    goto label_10b83b8

*arg1 = 0x2b
arg1 = &arg1[1]
uint32_t i

if ((arg4 & 0x200) == 0)
label_10b83b8:
    i = zx.d(*arg2)
    
    if (i != 0)
    label_10b83e0:
        char* x9_1 = &arg2[1]
        
        do
            *arg1 = i.b
            arg1 = &arg1[1]
            i = zx.d(*x9_1)
            x9_1 = &x9_1[1]
        while (i != 0)
else
label_10b83d4:
    *arg1 = 0x23
    arg1 = &arg1[1]
    i = zx.d(*arg2)
    
    if (i != 0)
        goto label_10b83e0
int32_t x8 = arg4 & 0x4a

if (x8 == 0x40)
    *arg1 = 0x6f
    return 

if (x8 != 8)
    char x8_2
    
    if ((arg3.d & 1) != 0)
        x8_2 = 0x64
    else
        x8_2 = 0x75
    
    *arg1 = x8_2
    return 

char x8_1

if ((arg4 & 0x4000) == 0)
    x8_1 = 0x78
else
    x8_1 = 0x58

*arg1 = x8_1
