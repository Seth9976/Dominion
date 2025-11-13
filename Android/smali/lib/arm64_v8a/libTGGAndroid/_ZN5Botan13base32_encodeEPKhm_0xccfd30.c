// 函数: _ZN5Botan13base32_encodeEPKhm
// 地址: 0xccfd30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10_5

if (arg2 == arg2 u/ 5 * 5)
    x10_5 = 0
else
    x10_5 = 5 - arg2 u% 5

uint64_t x9_1 = (x10_5 + arg2) u/ 5
uint64_t x22 = x9_1 << 3
char* entry_x8

if (x22 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    Botan::assertion_failure("consumed == input_length", "Consumed the entire input", 
        "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0x232)
else
    int64_t x24_1
    int64_t x25_1
    void* x23_2
    
    if (x22 u>= 0x17)
        uint64_t x24_2 = (x22 + 0x10) & 0xfffffffffffffff0
        void* x0_1 = operator new(x24_2)
        x23_2 = x0_1
        *(entry_x8 + 8) = x22
        *(entry_x8 + 0x10) = x0_1
        *entry_x8 = x24_2 | 1
    label_ccfde0:
        memset(x23_2, 0, x22)
        *(x23_2 + x22) = 0
        void* x26_1
        
        if ((zx.d(*entry_x8) & 1) != 0)
            x26_1 = *(entry_x8 + 0x10)
        else
            x26_1 = &entry_x8[1]
        
        uint64_t i
        
        if (arg2 u< 5)
            x24_1 = 0
            x25_1 = 0
            i = arg2
            
            if (i != 0)
            label_ccfe48:
                char* x0_3 = operator new(5)
                memset(&x0_3[i], 0, 5 - i)
                memcpy(x0_3, &arg1[x24_1], i)
                sub_f264c8(x26_1 + x25_1, x0_3)
                int32_t x9_3 = i.d << 3
                int32_t x10_7
                
                if (i u> 3)
                    x10_7 = x9_3 + 0xdd
                else
                    x10_7 = 0xfb
                
                uint64_t x9_8 = zx.q(((x10_7 - x9_3 + 0x27) & 0xfe) u/ 5)
                memset(x26_1 + (x25_1 | 7) - x9_8, 0x3d, x9_8 + 1)
                x24_1 += i
                operator delete(x0_3)
                x25_1 += 8
        else
            x24_1 = 0
            x25_1 = 0
            i = arg2
            
            do
                sub_f264c8(x26_1 + x25_1, &arg1[x24_1])
                i -= 5
                x24_1 += 5
                x25_1 += 8
            while (i u> 4)
            
            if (i != 0)
                goto label_ccfe48
    else
        char* x23_1 = entry_x8
        *x23_1 = (x9_1.d << 4).b
        x23_2 = &x23_1[1]
        
        if (x22 != 0)
            goto label_ccfde0
        
        x24_1 = 0
        x25_1 = 0
        *x23_2 = 0
    
    if (x24_1 != arg2)
        Botan::assertion_failure("consumed == input_length", "Consumed the entire input", 
            "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x232)
    else
        uint64_t x8_6 = zx.q(*entry_x8)
        uint64_t x8_7
        
        if ((x8_6.d & 1) == 0)
            x8_7 = x8_6 u>> 1
        else
            x8_7 = *(entry_x8 + 8)
        
        if (x25_1 == x8_7)
            return 

int64_t* x0_10 = Botan::assertion_failure("produced == output.size()", "Produced expected size", 
    "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x233)

if ((zx.d(*entry_x8) & 1) != 0)
    operator delete(*(entry_x8 + 0x10))

sub_1101e04(x0_10)
noreturn
