// 函数: _ZNK5Botan11GeneralName11matches_dnsERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9bde4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x9 = zx.q(*entry_x1)
uint64_t x10 = zx.q(*(arg1 + 0x20))
uint64_t i_2 = x9 u>> 1
uint64_t i_4

if ((x9.d & 1) == 0)
    i_4 = i_2
else
    i_4 = *(entry_x1 + 8)

int32_t x19_1

if ((x10.d & 1) != 0)
    int64_t x11_2 = *(arg1 + 0x28)
    
    if (i_4 == x11_2)
    label_e9be5c:
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x21) x1_2
        
        if ((x10.d & 1) != 0)
            x1_2 = *(arg1 + 0x30)
        else
            x1_2 = arg1 + 0x21
        
        if ((x9.d & 1) != 0)
            if (i_4 == 0)
                x19_1 = 1
            else
                x19_1 = memcmp() == 0 ? 1 : 0
        else if (i_4 == 0)
            x19_1 = 1
        else
            void* x9_2 = &entry_x1[1]
            uint64_t i
            
            do
                uint32_t x10_1 = zx.d(*x9_2)
                uint32_t x11_3 = zx.d(*x1_2)
                x19_1 = x10_1 == x11_3 ? 1 : 0
                
                if (x10_1 != x11_3)
                    break
                
                i = i_2
                i_2 -= 1
                x9_2 += 1
                x1_2 += 1
            while (i != 1)
    else if (x11_2 u<= i_4)
        char var_38
        
        if (zx.d(**(arg1 + 0x30)) != 0x2e)
        label_e9be40:
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                ".", arg1 + 0x20)
        else
        label_e9bee0:
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_38)
        
        uint64_t x8_4 = zx.q(*entry_x1)
        uint64_t x10_2 = zx.q(var_38)
        uint64_t x9_4
        
        if ((x8_4.d & 1) == 0)
            x9_4 = x8_4 u>> 1
        else
            x9_4 = *(entry_x1 + 8)
        
        uint64_t i_6
        uint64_t i_7
        
        if ((x10_2.d & 1) == 0)
            i_7 = x10_2 u>> 1
        else
            i_7 = i_6
        
        char var_50
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_50, entry_x1, x9_4 - i_7, i_7)
        uint64_t x8_6 = zx.q(var_38)
        uint64_t x21_1 = zx.q(var_50)
        int32_t x20_1 = x8_6.d & 1
        uint64_t i_3 = x8_6 u>> 1
        uint64_t i_5
        
        i_5 = x20_1 == 0 ? i_3 : i_6
        
        uint64_t x9_6
        uint64_t var_48
        
        if ((x21_1.d & 1) == 0)
            x9_6 = x21_1 u>> 1
        else
            x9_6 = var_48
        char* var_40
        
        if (i_5 != x9_6)
            x19_1 = 0
        else
            char* x9_7 = &var_38 | 1
            char* x1_4
            
            if ((x21_1.d & 1) == 0)
                x1_4 = &var_50 | 1
            else
                x1_4 = var_40
            
            if ((x20_1 & 0xff) != 0)
                if (i_5 == 0)
                    x19_1 = 1
                else
                    x19_1 = memcmp() == 0 ? 1 : 0
            else if (i_5 == 0)
                x19_1 = 1
            else
                uint64_t i_1
                
                do
                    uint32_t x10_4 = zx.d(*x9_7)
                    uint32_t x11_7 = zx.d(*x1_4)
                    x19_1 = x10_4 == x11_7 ? 1 : 0
                    
                    if (x10_4 != x11_7)
                        break
                    
                    i_1 = i_3
                    i_3 -= 1
                    x9_7 = &x9_7[1]
                    x1_4 = &x1_4[1]
                while (i_1 != 1)
        
        if ((x21_1.d & 1) != 0)
            operator delete(var_40)
            x20_1 = zx.d(var_38) & 1
        
        char* var_28
        
        if ((x20_1 & 0xff) != 0)
            operator delete(var_28)
    else
        x19_1 = 0
else
    uint64_t x11_1 = x10 u>> 1
    
    if (i_4 == x11_1)
        goto label_e9be5c
    
    if (i_4 u>= x11_1)
        if (zx.d(*(arg1 + 0x21)) == 0x2e)
            goto label_e9bee0
        
        goto label_e9be40
    
    x19_1 = 0

return zx.q(x19_1)
