// 函数: sub_ccbd70
// 地址: 0xccbd70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

bool cond:0_1

do
    void* x0 = *(arg3 - 0x18)
    *(arg3 - 0x20) = arg2 + 0x10
    
    if (x0 != 0)
        *(arg3 - 0x10) = x0
        operator delete(x0)
    
    if ((zx.d(*(arg3 - 0x38)) & 1) != 0)
        operator delete(*(arg3 - 0x28))
    
    void arg_68
    cond:0_1 = &arg_68 == arg3 - 0x38
    arg3 -= 0x38
while (not(cond:0_1))
sub_1101e04(arg1)
noreturn
