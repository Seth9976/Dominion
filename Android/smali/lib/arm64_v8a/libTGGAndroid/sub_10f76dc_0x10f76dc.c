// 函数: sub_10f76dc
// 地址: 0x10f76dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char* x8_1 = *arg1

if (arg1[1] == x8_1)
label_10f7734:
    void* x0_3 = sub_10ee40c(arg1)
    
    if (*(x21 + 0x28) == x8)
        return x0_3
else
    uint32_t x8_2 = zx.d(*x8_1)
    void* x0_1
    
    if (x8_2 != 0x44)
        if (x8_2 != 0x54)
            goto label_10f7734
        
        x0_1 = sub_10eec18(arg1)
        goto label_10f7758
    
    x0_1 = sub_10eefc0(arg1)
label_10f7758:
    void* var_40 = x0_1
    
    if (x0_1 != 0)
        sub_10ede98(&arg1[0x25], &var_40)
    
    if (*(x21 + 0x28) == x8)
        return x0_1

__stack_chk_fail()
noreturn
