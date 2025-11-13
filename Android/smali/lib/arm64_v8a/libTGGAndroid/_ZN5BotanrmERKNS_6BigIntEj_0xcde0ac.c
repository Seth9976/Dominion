// 函数: _ZN5BotanrmERKNS_6BigIntEj
// 地址: 0xcde0ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    if (arg2 == 0)
        void* x0_3 = __cxa_allocate_exception(0x20)
        Botan::BigInt::DivideByZero::DivideByZero()
        __cxa_throw(x0_3, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
        noreturn
    
    uint32_t x0
    
    if ((arg2 & (arg2 - 1)) == 0)
        int32_t* x9_1 = *arg1
        
        if (*(arg1 + 8) == x9_1)
            x0 = 0
        else
            x0 = *x9_1 & (arg2 - 1)
        
        goto label_cde104
    
    int64_t x8_1 = *(arg1 + 0x18)
    
    if (x8_1 == -1)
        int64_t x9_5 = *arg1
        int64_t x11_1 = *(arg1 + 8)
        int64_t x10_2 = x11_1 - x9_5
        
        if (x11_1 == x9_5)
            *(arg1 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_2 s>= 0 ? x10_2 : -1
            
            int64_t x11_2 = x9_5 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            x8_1 = x10_2 s>> 2
            int64_t x10_3
            
            x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
            
            int64_t i_2 = x12_2 * (x10_3 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_5 - 4 + (i_2 << 2))
                i = i_2
                i_2 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                x8_1 -= x11_3
            while (i != 1)
            *(arg1 + 0x18) = x8_1
            
            if (x8_1 != 0)
                goto label_cde184
    else if (x8_1 != 0)
    label_cde184:
        x0 = 0
        int64_t i_1 = x8_1 - 1
        
        do
            int64_t x8_3 = *arg1
            uint32_t x1
            
            if (i_1 u< (*(arg1 + 8) - x8_3) s>> 2)
                x1 = *(x8_3 + (i_1 << 2))
            else
                x1 = 0
            
            x0 = Botan::bigint_modop(x0, x1, arg2)
            i_1 -= 1
        while (i_1 != -1)
        
    label_cde104:
        
        if (x0 != 0)
            if (*(arg1 + 0x20) == 0)
                return zx.q(arg2 - x0)
            
            return zx.q(x0)

return 0
