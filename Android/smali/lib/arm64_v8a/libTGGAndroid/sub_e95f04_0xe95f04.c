// 函数: sub_e95f04
// 地址: 0xe95f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *arg2

if (x23 != 0)
    void** x21_1 = arg2[1]
    void* x0 = x23
    
    if (x21_1 != x23)
        do
            x21_1 -= 0x38
            sub_f276a8(&arg2[2], x21_1)
        while (x23 != x21_1)
        
        x0 = *arg2
    
    arg2[1] = x23
    operator delete(x0)

sub_1101e04(arg1)
noreturn
