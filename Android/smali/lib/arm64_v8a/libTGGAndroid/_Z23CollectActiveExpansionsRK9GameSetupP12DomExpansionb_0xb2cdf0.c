// 函数: _Z23CollectActiveExpansionsRK9GameSetupP12DomExpansionb
// 地址: 0xb2cdf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfigFromString(XString::operator char const*(), *(arg1 + 0x28))
int64_t i = 0
uint64_t result = 0
void var_19c0

if ((arg3.d & 1) != 0)
    do
        int32_t x9_2 = *(&var_19c0 + i + 0x9c8)
        
        if (x9_2 != 0x13)
            if (x9_2 == 0)
                break
            
            void* x10_1 = &var_19c0 + i
            
            if (*(x10_1 + 0x9d0) != *(x10_1 + 0x9d4))
                *(arg2 + (sx.q(result.d) << 2)) = x9_2
                result = zx.q(result.d + 1)
        
        i += 0x10
    while (i != 0x200)
else
    do
        void* x10_4 = &var_19c0 + i
        int32_t x9_3 = *(x10_4 + 0x9c8)
        
        if (x9_3 == 0)
            break
        
        if (*(x10_4 + 0x9d0) != *(x10_4 + 0x9d4))
            *(arg2 + (sx.q(result.d) << 2)) = x9_3
            result = zx.q(result.d + 1)
        
        i += 0x10
    while (i != 0x200)
return result
