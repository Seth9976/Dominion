// 函数: _Z14DomRulesUpdate9UI2Handle
// 地址: 0xba0910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomRulesClick)
int64_t* var_48
int64_t result = GetActiveRulesPageCards(&var_48)

if (result.d s>= 1)
    int64_t x22_1 = 0
    void* x23_1 = &data_1825d10
    uint64_t x24_1 = zx.q(result.d) << 4
    
    do
        char* x21_2 = *(var_48 + x22_1)
        
        if (*(x23_1 - 0x30) == x21_2 && *(x23_1 - 0x38) == x19 && *(x23_1 - 0x28) == 0xffffffff)
            result = UI2Exists(zx.q(*x23_1))
        
        int32_t x20_1
        
        if (*(x23_1 - 0x30) == x21_2 && *(x23_1 - 0x38) == x19 && *(x23_1 - 0x28) == 0xffffffff
                && (result.d & 1) != 0)
            x20_1 = *x23_1
            
            if (x20_1 != 0)
                goto label_ba0978
        else
            result = UI2GetHandle(zx.q(x19), x21_2)
            *x23_1 = result.d
            
            if (result.d != 0)
                x20_1 = result.d
                *(x23_1 - 0x30) = x21_2
                *(x23_1 - 0x38) = x19
                *(x23_1 - 0x28) = 0xffffffff
            label_ba0978:
                DomCardDef* x0_2 = DomDefGet(zx.q(*(var_48 + x22_1 + 8)), 0x18)
                DomDeclareCardComponents(zx.q(x20_1), x0_2, nullptr, 0, 0)
                DomDeclareType(zx.q(x20_1), x0_2, 0)
                result = DomDeclareExpansion(zx.q(x20_1), x0_2)
        x22_1 += 0x10
        x23_1 += 0x40
    while (x24_1 != x22_1)

return result
