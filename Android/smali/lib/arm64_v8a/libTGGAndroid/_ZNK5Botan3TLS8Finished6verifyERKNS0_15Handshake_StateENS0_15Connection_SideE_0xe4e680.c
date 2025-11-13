// 函数: _ZNK5Botan3TLS8Finished6verifyERKNS0_15Handshake_StateENS0_15Connection_SideE
// 地址: 0xe4e680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* var_30
int32_t entry_x2
sub_e4e140(&var_30, arg2, entry_x2)
char* x8 = *(arg1 + 8)
char* x0_1 = var_30
void* i_1 = *(arg1 + 0x10) - x8
int64_t var_28
int32_t x19_1
char* var_28_1

if (i_1 != var_28 - x0_1)
    x19_1 = 0
    
    if (x0_1 != 0)
        var_28_1 = x0_1
        operator delete(x0_1)
else
    char var_14_1 = 0
    
    if (i_1 != 0)
        char* x10_2 = x0_1
        void* i
        
        do
            char x11_1 = *x8
            x8 = &x8[1]
            char x12_1 = *x10_2
            x10_2 = &x10_2[1]
            i = i_1
            i_1 -= 1
            var_14_1 |= x12_1 ^ x11_1
        while (i != 1)
    
    uint32_t x8_1 = zx.d(var_14_1)
    x19_1 = sx.d((x8_1.b - 1) & (not.d(x8_1)).b) s< 0 ? 1 : 0
    
    if (x0_1 != 0)
        var_28_1 = x0_1
        operator delete(x0_1)
return zx.q(x19_1)
