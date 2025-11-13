// 函数: _ZN5Botan5PKCS88load_keyERNS_10DataSourceERNS_21RandomNumberGeneratorENSt6__ndk18functionIFNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEvEEE
// 地址: 0xdfc7a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int64_t* x8_1 = *(arg3 + 0x20)
void var_90
int64_t* var_70
void var_60
int64_t* var_40

if (x8_1 == 0)
    var_70 = nullptr
    var_40 = nullptr
else
    int64_t* x0_1
    
    if (arg3 == x8_1)
        var_70 = &var_90
        (*(*x8_1 + 0x18))(x8_1, &var_90)
        x0_1 = var_70
        
        if (x0_1 == 0)
            var_40 = nullptr
        else
        label_dfc820:
            
            if (&var_90 == x0_1)
                var_40 = &var_60
                (*(*x0_1 + 0x18))(x0_1, &var_60)
            else
                var_40 = (*(*x0_1 + 0x10))()
    else
        x0_1 = (*(*x8_1 + 0x10))(x8_1)
        var_70 = x0_1
        
        if (x0_1 != 0)
            goto label_dfc820
        
        var_40 = nullptr

int64_t result_1
sub_dfb2d0(&result_1, arg1, &var_60, 1)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

int64_t result = result_1
result_1 = 0

if (&var_90 == var_70)
    (*(*var_70 + 0x20))()
else if (var_70 != 0)
    (*(*var_70 + 0x28))()

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
