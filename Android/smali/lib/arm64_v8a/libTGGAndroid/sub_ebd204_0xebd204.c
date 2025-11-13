// 函数: sub_ebd204
// 地址: 0xebd204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *arg2
arg2[1] = arg3

if (x22 != 0)
    void* x0 = x22
    
    if (x22 != arg3)
        char* x23_1 = arg3
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(arg3 - 8))
            
            arg3 = x23_1
        while (x22 != x23_1)
        
        x0 = *arg2
    
    arg2[1] = x22
    operator delete(x0)

if ((zx.d(arg4) & 1) == 0)
    sub_1101e04(arg1)
    noreturn

operator delete(arg5)
sub_1101e04(arg1)
noreturn
